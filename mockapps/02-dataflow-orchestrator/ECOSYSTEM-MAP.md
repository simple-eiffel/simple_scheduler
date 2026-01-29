# DataFlow Orchestrator - Ecosystem Integration

## simple_* Dependencies

### Required Libraries

| Library | Purpose | Integration Point |
|---------|---------|-------------------|
| simple_scheduler | Stage scheduling, cron triggers | DATAFLOW_ENGINE schedules pipeline runs |
| simple_sql | Pipeline metadata, execution logs | DATAFLOW_PIPELINE_STORE, DATAFLOW_EXECUTION_LOG |
| simple_json | Pipeline definition parsing | Pipeline JSON loading and validation |
| simple_process | Stage command execution | External command runner with timeout |
| simple_cli | Command-line argument parsing | DATAFLOW_CLI |
| simple_logger | Execution logging | Daemon logs, stage output capture |
| simple_config | Configuration management | Settings for paths, retention, alerts |

### Optional Libraries

| Library | Purpose | When Needed |
|---------|---------|-------------|
| simple_email | SLA violation alerts | When notifications configured |
| simple_http | Webhook notifications | When webhook URL configured |
| simple_csv | Report export | When --output csv specified |
| simple_template | Alert message formatting | For customized alert templates |
| simple_dot | Dependency graph visualization | For `graph` command |
| simple_datetime | Duration parsing | For SLA and timeout specifications |

## Integration Patterns

### simple_scheduler Integration

**Purpose:** Schedule pipeline runs according to cron expressions.

**Usage:**
```eiffel
class DATAFLOW_ENGINE

feature {NONE} -- Initialization

    make
        do
            create scheduler.make
            create pipeline_listener.make (Current)
            scheduler.add_listener (pipeline_listener)
        end

feature -- Scheduling

    schedule_pipeline (a_pipeline: DATAFLOW_PIPELINE)
            -- Schedule pipeline with its configured cron expression.
        local
            l_job: SIMPLE_JOB
            l_agent: PROCEDURE
        do
            l_agent := agent run_pipeline (a_pipeline.name)
            create l_job.make_with_name (
                "pipeline_" + a_pipeline.name,
                a_pipeline.description,
                l_agent
            )
            l_job.set_allow_concurrent (False)  -- No overlapping runs
            scheduler.schedule_cron (l_job, a_pipeline.schedule)
            scheduled_pipelines.put (a_pipeline, a_pipeline.name)
        end

feature -- Execution

    run_pipeline (a_name: STRING)
            -- Execute all stages of pipeline in dependency order.
        local
            l_pipeline: DATAFLOW_PIPELINE
            l_stages: ARRAYED_LIST [DATAFLOW_STAGE]
            l_run_id: INTEGER
        do
            l_pipeline := load_pipeline (a_name)
            l_stages := dependency_resolver.resolve_order (l_pipeline.stages)
            l_run_id := start_run (l_pipeline)

            across l_stages as stage loop
                execute_stage (l_run_id, stage)
            end

            complete_run (l_run_id)
            check_sla (l_pipeline, l_run_id)
        end

feature {NONE} -- Implementation

    scheduler: SIMPLE_SCHEDULER
    dependency_resolver: DATAFLOW_DEPENDENCY_RESOLVER
    scheduled_pipelines: HASH_TABLE [DATAFLOW_PIPELINE, STRING]

end
```

**Data flow:** Pipeline definition -> SIMPLE_SCHEDULER job -> Stage execution sequence

### simple_sql Integration

**Purpose:** Store pipeline state, execution history, and SLA violations.

**Usage:**
```eiffel
class DATAFLOW_EXECUTION_LOG

feature {NONE} -- Initialization

    make (a_db_path: STRING)
        do
            create db.make (a_db_path)
            ensure_schema
        end

feature -- Run Management

    start_run (a_pipeline: STRING; a_triggered_by: STRING): INTEGER
            -- Start new pipeline run, return run ID.
        do
            db.execute ("INSERT INTO runs (pipeline_name, started_at, status, triggered_by) "
                + "VALUES (?, datetime('now'), 'running', ?)",
                <<a_pipeline, a_triggered_by>>)
            Result := db.last_insert_id
        end

    record_stage (a_run_id: INTEGER; a_stage: STRING; a_status: STRING;
                  a_exit_code: INTEGER; a_output: STRING; a_duration: INTEGER)
            -- Record stage execution result.
        do
            db.execute ("INSERT INTO stage_executions "
                + "(run_id, stage_name, started_at, completed_at, duration_seconds, "
                + "status, exit_code, output) VALUES (?, ?, ?, datetime('now'), ?, ?, ?, ?)",
                <<a_run_id, a_stage, started_at, a_duration, a_status, a_exit_code, a_output>>)
        end

feature -- History

    get_run_history (a_pipeline: STRING; a_limit: INTEGER): ARRAYED_LIST [DATAFLOW_RUN]
            -- Get recent runs for pipeline.
        do
            create Result.make (a_limit)
            db.query ("SELECT * FROM runs WHERE pipeline_name = ? "
                + "ORDER BY started_at DESC LIMIT ?", <<a_pipeline, a_limit>>)
            across db.results as row loop
                Result.extend (run_from_row (row))
            end
        end

feature {NONE} -- Implementation

    db: SIMPLE_SQL

end
```

**Data flow:** Run events -> SQL insert -> History queries

### simple_json Integration

**Purpose:** Parse and validate pipeline definition files.

**Usage:**
```eiffel
class DATAFLOW_PIPELINE_LOADER

feature -- Loading

    load_pipeline (a_path: STRING): DATAFLOW_PIPELINE
            -- Load pipeline from JSON file.
        local
            l_json: SIMPLE_JSON
            l_content: STRING
            l_root: SIMPLE_JSON_OBJECT
        do
            create l_json.make
            l_content := file_content (a_path)

            if l_json.parse (l_content) and then
               attached {SIMPLE_JSON_OBJECT} l_json.root as obj then
                l_root := obj
                create Result.make (
                    l_root.string_item ("name"),
                    l_root.string_item ("description")
                )
                Result.set_schedule (l_root.string_item ("schedule"))
                Result.set_sla (parse_duration (l_root.string_item ("sla")))

                -- Load stages
                if attached {SIMPLE_JSON_ARRAY} l_root.item ("stages") as stages then
                    across stages as s loop
                        Result.add_stage (stage_from_json (s))
                    end
                end
            end
        end

feature -- Validation

    validate_pipeline (a_pipeline: DATAFLOW_PIPELINE): ARRAYED_LIST [STRING]
            -- Return list of validation errors (empty if valid).
        do
            create Result.make (5)

            if a_pipeline.name.is_empty then
                Result.extend ("Pipeline name is required")
            end

            if a_pipeline.stages.is_empty then
                Result.extend ("Pipeline must have at least one stage")
            end

            if dependency_resolver.has_cycle (a_pipeline.stages) then
                Result.extend ("Circular dependency detected in stages")
            end

            across a_pipeline.stages as s loop
                if s.command.is_empty then
                    Result.extend ("Stage '" + s.name + "' missing command")
                end
            end
        end

end
```

**Data flow:** JSON file -> Parser -> DATAFLOW_PIPELINE object -> Validation

### simple_process Integration

**Purpose:** Execute stage commands with timeout and output capture.

**Usage:**
```eiffel
class DATAFLOW_STAGE_EXECUTOR

feature -- Execution

    execute_stage (a_stage: DATAFLOW_STAGE): DATAFLOW_STAGE_RESULT
            -- Execute stage command, return result.
        local
            l_process: SIMPLE_PROCESS
            l_start: SIMPLE_DATE_TIME
            l_duration: INTEGER
        do
            create l_process.make (a_stage.command)
            l_process.set_timeout_seconds (a_stage.timeout_seconds)

            create l_start.make_now
            l_process.execute

            l_duration := seconds_since (l_start)

            if l_process.timed_out then
                create Result.make_timeout (l_duration, a_stage.timeout_seconds)
            elseif l_process.exit_code = 0 then
                create Result.make_success (l_duration, l_process.output)
            else
                create Result.make_failure (l_duration, l_process.exit_code, l_process.error_output)
            end
        end

    execute_with_retry (a_stage: DATAFLOW_STAGE): DATAFLOW_STAGE_RESULT
            -- Execute stage with retry policy.
        local
            l_attempt: INTEGER
            l_last_result: DATAFLOW_STAGE_RESULT
        do
            from
                l_attempt := 1
            until
                l_attempt > a_stage.retry_count + 1 or
                (attached l_last_result and then l_last_result.is_success)
            loop
                l_last_result := execute_stage (a_stage)
                if not l_last_result.is_success and l_attempt <= a_stage.retry_count then
                    sleep (a_stage.retry_delay_seconds * 1000)
                end
                l_attempt := l_attempt + 1
            end
            Result := l_last_result
        end

end
```

**Data flow:** Stage command -> Process execution -> Result capture

### simple_email Integration

**Purpose:** Send SLA violation and failure alerts.

**Usage:**
```eiffel
class DATAFLOW_ALERTER

feature -- Alerts

    send_sla_violation (a_pipeline: STRING; a_run_id: INTEGER;
                        a_expected: INTEGER; a_actual: INTEGER)
            -- Send SLA violation alert.
        local
            l_subject: STRING
            l_body: STRING
        do
            l_subject := "SLA Violation: " + a_pipeline
            l_body := template_engine.render ("sla_violation", <<
                ["pipeline", a_pipeline],
                ["run_id", a_run_id.out],
                ["expected_seconds", a_expected.out],
                ["actual_seconds", a_actual.out]
            >>)

            across notification_emails (a_pipeline, "on_sla_violation") as email loop
                email_client.send (email, l_subject, l_body)
            end
        end

    send_failure_alert (a_pipeline: STRING; a_run_id: INTEGER;
                        a_stage: STRING; a_error: STRING)
            -- Send stage failure alert.
        local
            l_subject: STRING
            l_body: STRING
        do
            l_subject := "Pipeline Failed: " + a_pipeline
            l_body := template_engine.render ("pipeline_failure", <<
                ["pipeline", a_pipeline],
                ["run_id", a_run_id.out],
                ["stage", a_stage],
                ["error", a_error]
            >>)

            across notification_emails (a_pipeline, "on_failure") as email loop
                email_client.send (email, l_subject, l_body)
            end
        end

feature {NONE} -- Implementation

    email_client: SIMPLE_EMAIL
    template_engine: SIMPLE_TEMPLATE

end
```

**Data flow:** Alert event -> Template rendering -> Email send

## Dependency Graph

```
dataflow-orchestrator
    |
    +-- simple_scheduler (required)
    |       +-- simple_datetime
    |       +-- simple_mml
    |
    +-- simple_sql (required)
    |       +-- ISE base
    |
    +-- simple_json (required)
    |       +-- ISE base
    |
    +-- simple_process (required)
    |       +-- ISE base
    |
    +-- simple_cli (required)
    |       +-- ISE base
    |
    +-- simple_logger (required)
    |       +-- simple_datetime
    |
    +-- simple_config (required)
    |       +-- simple_json
    |
    +-- simple_datetime (required)
    |       +-- ISE time
    |
    +-- simple_email (optional)
    |       +-- simple_smtp
    |
    +-- simple_csv (optional)
    |       +-- ISE base
    |
    +-- simple_template (optional)
    |       +-- simple_json
    |
    +-- simple_dot (optional)
            +-- ISE base
```

## ECF Configuration

```xml
<?xml version="1.0" encoding="ISO-8859-1"?>
<system xmlns="http://www.eiffel.com/developers/xml/configuration-1-23-0"
        name="dataflow"
        uuid="XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX">

    <target name="dataflow_lib">
        <option warning="warning" syntax="standard">
            <assertions precondition="true" postcondition="true" invariant="true"/>
        </option>

        <!-- simple_* dependencies -->
        <library name="simple_scheduler" location="$SIMPLE_EIFFEL/simple_scheduler/simple_scheduler.ecf"/>
        <library name="simple_sql" location="$SIMPLE_EIFFEL/simple_sql/simple_sql.ecf"/>
        <library name="simple_json" location="$SIMPLE_EIFFEL/simple_json/simple_json.ecf"/>
        <library name="simple_process" location="$SIMPLE_EIFFEL/simple_process/simple_process.ecf"/>
        <library name="simple_cli" location="$SIMPLE_EIFFEL/simple_cli/simple_cli.ecf"/>
        <library name="simple_logger" location="$SIMPLE_EIFFEL/simple_logger/simple_logger.ecf"/>
        <library name="simple_config" location="$SIMPLE_EIFFEL/simple_config/simple_config.ecf"/>
        <library name="simple_datetime" location="$SIMPLE_EIFFEL/simple_datetime/simple_datetime.ecf"/>

        <!-- Optional dependencies -->
        <library name="simple_email" location="$SIMPLE_EIFFEL/simple_email/simple_email.ecf"/>
        <library name="simple_csv" location="$SIMPLE_EIFFEL/simple_csv/simple_csv.ecf"/>
        <library name="simple_template" location="$SIMPLE_EIFFEL/simple_template/simple_template.ecf"/>

        <!-- ISE dependencies -->
        <library name="base" location="$ISE_LIBRARY/library/base/base.ecf"/>

        <!-- Application source -->
        <cluster name="src" location="./src/" recursive="true"/>
    </target>

    <target name="dataflow" extends="dataflow_lib">
        <root class="DATAFLOW_CLI" feature="make"/>
    </target>

    <target name="dataflow_tests" extends="dataflow_lib">
        <root class="TEST_APP" feature="make"/>
        <library name="simple_testing" location="$SIMPLE_EIFFEL/simple_testing/simple_testing.ecf"/>
        <cluster name="tests" location="./tests/" recursive="true"/>
    </target>

</system>
```
