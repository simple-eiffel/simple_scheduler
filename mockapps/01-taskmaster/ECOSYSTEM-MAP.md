# TaskMaster - Ecosystem Integration

## simple_* Dependencies

### Required Libraries

| Library | Purpose | Integration Point |
|---------|---------|-------------------|
| simple_scheduler | Core job scheduling engine | TASKMASTER_ENGINE wraps SIMPLE_SCHEDULER |
| simple_sql | SQLite database operations | TASKMASTER_JOB_STORE, TASKMASTER_HISTORY |
| simple_json | Configuration and export | TASKMASTER_CONFIG, export/import commands |
| simple_logger | Execution logging | Daemon logging, job output capture |
| simple_config | Settings management | Configuration file handling |
| simple_cli | Command-line argument parsing | TASKMASTER_CLI |

### Optional Libraries

| Library | Purpose | When Needed |
|---------|---------|-------------|
| simple_email | Failure notifications | When notifications.email configured |
| simple_http | Webhook notifications | When notifications.webhook configured |
| simple_process | External command execution | For job command execution |
| simple_csv | CSV export format | When --output csv specified |
| simple_uuid | Unique job ID generation | For new job creation |

## Integration Patterns

### simple_scheduler Integration

**Purpose:** Core scheduling engine for job trigger evaluation and execution.

**Usage:**
```eiffel
class TASKMASTER_ENGINE

feature {NONE} -- Initialization

    make
        do
            create scheduler.make
            create listener.make (Current)
            scheduler.add_listener (listener)
        end

feature -- Scheduling

    schedule_cron_job (a_job: TASKMASTER_JOB_DEF)
            -- Schedule job with cron expression.
        local
            l_job: SIMPLE_JOB
            l_agent: PROCEDURE
        do
            l_agent := agent execute_command (a_job.command, a_job.id)
            create l_job.make_with_name (a_job.id, a_job.name, l_agent)
            l_job.set_retry_count (a_job.retry_count)
            l_job.set_timeout (a_job.timeout_seconds)
            l_job.set_allow_concurrent (a_job.allow_concurrent)
            scheduler.schedule_cron (l_job, a_job.trigger_spec)
        end

feature {NONE} -- Implementation

    scheduler: SIMPLE_SCHEDULER
            -- The underlying scheduler.

    listener: TASKMASTER_LISTENER
            -- Event listener for execution tracking.

end
```

**Data flow:** Job definitions -> SIMPLE_SCHEDULER -> Trigger evaluation -> Job execution

### simple_sql Integration

**Purpose:** Persistent storage for job definitions and execution history.

**Usage:**
```eiffel
class TASKMASTER_JOB_STORE

feature {NONE} -- Initialization

    make (a_db_path: STRING)
        do
            create db.make (a_db_path)
            ensure_schema
        end

feature -- Persistence

    save_job (a_job: TASKMASTER_JOB_DEF)
            -- Save or update job in database.
        local
            l_sql: STRING
        do
            l_sql := "INSERT OR REPLACE INTO jobs (id, name, command, trigger_type, trigger_spec, "
            l_sql.append ("is_enabled, retry_count, timeout_seconds, allow_concurrent, created_at, updated_at) ")
            l_sql.append ("VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)")
            db.execute (l_sql, <<a_job.id, a_job.name, a_job.command, a_job.trigger_type,
                                  a_job.trigger_spec, a_job.is_enabled, a_job.retry_count,
                                  a_job.timeout_seconds, a_job.allow_concurrent,
                                  a_job.created_at, a_job.updated_at>>)
        end

    load_all_jobs: ARRAYED_LIST [TASKMASTER_JOB_DEF]
            -- Load all jobs from database.
        do
            create Result.make (10)
            db.query ("SELECT * FROM jobs", Void)
            across db.results as row loop
                Result.extend (job_from_row (row))
            end
        end

feature {NONE} -- Implementation

    db: SIMPLE_SQL
            -- Database connection.

end
```

**Data flow:** Job definitions <-> SQLite database

### simple_json Integration

**Purpose:** Configuration file format and job export/import.

**Usage:**
```eiffel
class TASKMASTER_CONFIG

feature -- Loading

    load (a_path: STRING)
            -- Load configuration from JSON file.
        local
            l_json: SIMPLE_JSON
            l_content: STRING
        do
            create l_json.make
            l_content := file_content (a_path)
            if l_json.parse (l_content) then
                extract_settings (l_json.root)
            end
        end

feature -- Export

    export_jobs (a_jobs: LIST [TASKMASTER_JOB_DEF]): STRING
            -- Export jobs to JSON format.
        local
            l_json: SIMPLE_JSON
            l_array: SIMPLE_JSON_ARRAY
        do
            create l_json.make
            create l_array.make
            across a_jobs as job loop
                l_array.extend (job_to_json (job))
            end
            l_json.set_root (l_array)
            Result := l_json.to_string_pretty
        end

end
```

**Data flow:** Configuration JSON <-> Settings objects <-> Application

### simple_logger Integration

**Purpose:** Structured logging for daemon and job execution.

**Usage:**
```eiffel
class TASKMASTER_ENGINE

feature {NONE} -- Logging

    log: SIMPLE_LOGGER
            -- Application logger.

    log_job_started (a_job_id: STRING)
        do
            log.info ("Job started: " + a_job_id)
        end

    log_job_completed (a_job_id: STRING; a_result: SIMPLE_JOB_RESULT)
        do
            if a_result.is_success then
                log.info ("Job completed: " + a_job_id + " (" + a_result.duration_ms.out + "ms)")
            else
                log.error ("Job failed: " + a_job_id + " - " + a_result.error_message)
            end
        end

end
```

**Data flow:** Events -> Logger -> Log file/stdout

### simple_cli Integration

**Purpose:** Command-line argument parsing and command routing.

**Usage:**
```eiffel
class TASKMASTER_CLI

feature -- Execution

    run (a_args: ARRAY [STRING])
            -- Execute CLI with arguments.
        local
            l_parser: SIMPLE_CLI_PARSER
        do
            create l_parser.make ("taskmaster")
            l_parser.add_command ("schedule", agent do_schedule)
            l_parser.add_command ("list", agent do_list)
            l_parser.add_command ("history", agent do_history)
            l_parser.add_command ("daemon", agent do_daemon)

            l_parser.add_option ("cron", "Cron expression", True)
            l_parser.add_option ("interval", "Interval in seconds", True)
            l_parser.add_option ("output", "Output format", True)
            l_parser.add_flag ("verbose", "Verbose output")

            l_parser.parse (a_args)
            l_parser.execute
        end

end
```

**Data flow:** Command-line args -> Parser -> Command handler -> Output

## Dependency Graph

```
taskmaster
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
    +-- simple_logger (required)
    |       +-- simple_datetime
    |
    +-- simple_config (required)
    |       +-- simple_json
    |
    +-- simple_cli (required)
    |       +-- ISE base
    |
    +-- simple_process (required)
    |       +-- ISE base
    |
    +-- simple_uuid (required)
    |       +-- ISE base
    |
    +-- simple_email (optional)
    |       +-- simple_smtp
    |
    +-- simple_http (optional)
    |       +-- ISE net
    |
    +-- simple_csv (optional)
            +-- ISE base
```

## ECF Configuration

```xml
<?xml version="1.0" encoding="ISO-8859-1"?>
<system xmlns="http://www.eiffel.com/developers/xml/configuration-1-23-0"
        name="taskmaster"
        uuid="XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX">

    <target name="taskmaster">
        <root class="TASKMASTER_CLI" feature="make"/>
        <file_rule>
            <exclude>/EIFGENs$</exclude>
            <exclude>/\.git$</exclude>
        </file_rule>
        <option warning="warning" syntax="standard">
            <assertions precondition="true" postcondition="true" invariant="true"/>
        </option>

        <!-- simple_* dependencies -->
        <library name="simple_scheduler" location="$SIMPLE_EIFFEL/simple_scheduler/simple_scheduler.ecf"/>
        <library name="simple_sql" location="$SIMPLE_EIFFEL/simple_sql/simple_sql.ecf"/>
        <library name="simple_json" location="$SIMPLE_EIFFEL/simple_json/simple_json.ecf"/>
        <library name="simple_logger" location="$SIMPLE_EIFFEL/simple_logger/simple_logger.ecf"/>
        <library name="simple_config" location="$SIMPLE_EIFFEL/simple_config/simple_config.ecf"/>
        <library name="simple_cli" location="$SIMPLE_EIFFEL/simple_cli/simple_cli.ecf"/>
        <library name="simple_process" location="$SIMPLE_EIFFEL/simple_process/simple_process.ecf"/>
        <library name="simple_uuid" location="$SIMPLE_EIFFEL/simple_uuid/simple_uuid.ecf"/>

        <!-- Optional dependencies (conditional) -->
        <library name="simple_email" location="$SIMPLE_EIFFEL/simple_email/simple_email.ecf"/>
        <library name="simple_csv" location="$SIMPLE_EIFFEL/simple_csv/simple_csv.ecf"/>

        <!-- ISE dependencies (only when no simple_* alternative) -->
        <library name="base" location="$ISE_LIBRARY/library/base/base.ecf"/>

        <!-- Application source -->
        <cluster name="src" location="./src/" recursive="true"/>
    </target>

    <target name="taskmaster_tests" extends="taskmaster">
        <root class="TEST_APP" feature="make"/>
        <library name="simple_testing" location="$SIMPLE_EIFFEL/simple_testing/simple_testing.ecf"/>
        <cluster name="tests" location="./tests/" recursive="true"/>
    </target>

</system>
```
