# DataFlow Orchestrator - Build Plan

## Phase Overview

| Phase | Deliverable | Effort | Dependencies |
|-------|-------------|--------|--------------|
| Phase 1 | MVP Pipeline Runner | 4-5 days | simple_scheduler, simple_json, simple_process |
| Phase 2 | Persistence & History | 3-4 days | Phase 1, simple_sql |
| Phase 3 | SLA & Alerts | 2-3 days | Phase 2, simple_email |
| Phase 4 | Polish | 2-3 days | Phase 3, all features complete |

**Total Estimated Effort:** 11-15 days

---

## Phase 1: MVP Pipeline Runner

### Objective

Demonstrate core pipeline execution with dependency resolution. Run pipelines from JSON definitions with stage ordering.

### Deliverables

1. **DATAFLOW_CLI** - Command-line interface with basic commands
2. **DATAFLOW_PIPELINE** - Pipeline definition model
3. **DATAFLOW_STAGE** - Stage definition model
4. **DATAFLOW_DEPENDENCY_RESOLVER** - Topological sort for stage ordering
5. **DATAFLOW_STAGE_EXECUTOR** - Command execution with timeout
6. **DATAFLOW_ENGINE** - Core orchestration logic
7. **Basic CLI** - init, create, validate, run, list commands

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T1.1 | Create project structure | ECF compiles, directories exist |
| T1.2 | Define pipeline JSON schema | Schema documented, examples created |
| T1.3 | Implement DATAFLOW_PIPELINE | Parse pipeline from JSON |
| T1.4 | Implement DATAFLOW_STAGE | Parse stage with dependencies |
| T1.5 | Implement DATAFLOW_DEPENDENCY_RESOLVER | Topological sort, cycle detection |
| T1.6 | Implement DATAFLOW_STAGE_EXECUTOR | Execute command with timeout |
| T1.7 | Implement DATAFLOW_ENGINE | Orchestrate stage execution |
| T1.8 | Implement DATAFLOW_CLI scaffold | Argument parsing, routing |
| T1.9 | Implement `init` command | Create project structure |
| T1.10 | Implement `create` command | Generate pipeline skeleton |
| T1.11 | Implement `validate` command | Validate pipeline JSON |
| T1.12 | Implement `run` command | Execute pipeline |
| T1.13 | Implement `list` command | List pipeline files |
| T1.14 | Write MVP tests | Core functionality tested |

### Test Cases

| Test | Input | Expected Output |
|------|-------|-----------------|
| Parse valid pipeline | Valid JSON file | DATAFLOW_PIPELINE object |
| Detect circular dependency | Stage A -> B -> C -> A | Error: "Circular dependency" |
| Resolve linear pipeline | A -> B -> C | Order: [A, B, C] |
| Resolve diamond pipeline | A -> B,C; B,C -> D | Order: [A, B, C, D] or [A, C, B, D] |
| Execute stage | `echo hello` | Exit code 0, output "hello" |
| Stage timeout | `sleep 10` with 1s timeout | Timeout error |

### Contracts

```eiffel
class DATAFLOW_DEPENDENCY_RESOLVER
feature
    resolve_order (a_stages: LIST [DATAFLOW_STAGE]): ARRAYED_LIST [DATAFLOW_STAGE]
        require
            stages_not_empty: not a_stages.is_empty
            no_cycles: not has_cycle (a_stages)
        ensure
            all_stages: Result.count = a_stages.count
            dependencies_respected: dependencies_ordered (Result)

    has_cycle (a_stages: LIST [DATAFLOW_STAGE]): BOOLEAN
```

---

## Phase 2: Persistence & History

### Objective

Add SQLite persistence for pipeline state and execution history. Enable scheduling pipelines with cron expressions.

### Deliverables

1. **DATAFLOW_PIPELINE_STORE** - Pipeline metadata persistence
2. **DATAFLOW_EXECUTION_LOG** - Run and stage history
3. **Database schema** - Tables for pipelines, runs, stages
4. **schedule** command - Add pipeline to scheduler
5. **unschedule** command - Remove from scheduler
6. **history** command - View execution history
7. **logs** command - View stage output
8. **status** command - Pipeline status
9. **daemon** command - Background scheduler

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T2.1 | Design database schema | Tables for pipelines, runs, stages |
| T2.2 | Implement DATAFLOW_PIPELINE_STORE | CRUD for pipeline metadata |
| T2.3 | Implement DATAFLOW_EXECUTION_LOG | Record runs, stages |
| T2.4 | Integrate with SIMPLE_SCHEDULER | Schedule pipeline jobs |
| T2.5 | Implement `schedule` command | --cron option, add to scheduler |
| T2.6 | Implement `unschedule` command | Remove from scheduler |
| T2.7 | Implement `daemon` command | Start scheduler loop |
| T2.8 | Implement `history` command | --last, --since, --failed options |
| T2.9 | Implement `logs` command | --run, --stage options |
| T2.10 | Implement `status` command | Current pipeline state |
| T2.11 | Write persistence tests | DB operations tested |

### Test Cases

| Test | Input | Expected Output |
|------|-------|-----------------|
| Schedule pipeline | `schedule daily-sales --cron "0 2 * * *"` | Pipeline scheduled |
| Pipeline persists | Schedule, restart daemon | Pipeline still scheduled |
| History recorded | Run pipeline, check history | Run with stages recorded |
| History filtering | `history --last 5 --failed` | Last 5 failed runs |
| Logs retrieval | `logs daily-sales --run 123 --stage extract` | Stage output displayed |

---

## Phase 3: SLA & Alerts

### Objective

Add SLA monitoring with violation tracking and email alerts on failures.

### Deliverables

1. **DATAFLOW_SLA_MONITOR** - SLA checking and violation recording
2. **DATAFLOW_ALERTER** - Email notifications
3. **sla** command - SLA compliance report
4. **Alert templates** - Email templates for violations and failures
5. **Configuration** - Notification settings

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T3.1 | Design SLA tracking | Duration parsing, violation detection |
| T3.2 | Implement DATAFLOW_SLA_MONITOR | Check SLA after run completion |
| T3.3 | Create SLA violations table | Record violations with timestamps |
| T3.4 | Implement DATAFLOW_ALERTER | Email sending for alerts |
| T3.5 | Create alert templates | SLA violation, pipeline failure |
| T3.6 | Implement `sla` command | --period, --violations options |
| T3.7 | Add notification config | Email addresses, webhook URLs |
| T3.8 | Write SLA tests | Violation detection, alerting tested |

### Test Cases

| Test | Input | Expected Output |
|------|-------|-----------------|
| SLA met | Pipeline with 1h SLA, completes in 30m | SLA met, no violation |
| SLA violated | Pipeline with 30m SLA, takes 45m | Violation recorded |
| Failure alert | Stage fails | Alert email sent |
| SLA report | `sla --period week` | Weekly compliance stats |

### SLA Report Format

```
DataFlow SLA Report - Week of 2026-01-20

Pipeline: daily-sales
  SLA: 4 hours
  Runs: 7
  SLA Met: 6 (85.7%)
  Violations: 1
    - 2026-01-22: Expected 4h, took 4h 23m

Pipeline: hourly-sync
  SLA: 30 minutes
  Runs: 168
  SLA Met: 165 (98.2%)
  Violations: 3

Overall Compliance: 96.0%
```

---

## Phase 4: Production Polish

### Objective

Harden for production with comprehensive error handling, documentation, and advanced features.

### Deliverables

1. Error handling hardening
2. Help documentation
3. `graph` command for dependency visualization
4. Performance optimization
5. README and usage documentation

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T4.1 | Comprehensive error handling | All edge cases handled |
| T4.2 | Help text for all commands | --help shows detailed usage |
| T4.3 | Implement `graph` command | DOT format output |
| T4.4 | Performance profiling | Handle 50+ pipelines efficiently |
| T4.5 | Documentation | README, pipeline schema docs |
| T4.6 | Integration tests | End-to-end workflow tests |
| T4.7 | Release packaging | Binary builds |

### Test Cases

| Test | Input | Expected Output |
|------|-------|-----------------|
| Invalid JSON | Malformed pipeline.json | Clear validation errors |
| 50 pipelines | Schedule 50 pipelines | Daemon runs smoothly |
| Graph output | `graph daily-sales --format dot` | Valid DOT graph |

---

## ECF Target Structure

```xml
<!-- Library target -->
<target name="dataflow_lib">
    <option warning="warning" syntax="standard">
        <assertions precondition="true" postcondition="true" invariant="true"/>
    </option>
    <library name="simple_scheduler" location="$SIMPLE_EIFFEL/simple_scheduler/simple_scheduler.ecf"/>
    <library name="simple_sql" location="$SIMPLE_EIFFEL/simple_sql/simple_sql.ecf"/>
    <library name="simple_json" location="$SIMPLE_EIFFEL/simple_json/simple_json.ecf"/>
    <library name="simple_process" location="$SIMPLE_EIFFEL/simple_process/simple_process.ecf"/>
    <library name="simple_cli" location="$SIMPLE_EIFFEL/simple_cli/simple_cli.ecf"/>
    <library name="simple_logger" location="$SIMPLE_EIFFEL/simple_logger/simple_logger.ecf"/>
    <library name="simple_config" location="$SIMPLE_EIFFEL/simple_config/simple_config.ecf"/>
    <library name="simple_datetime" location="$SIMPLE_EIFFEL/simple_datetime/simple_datetime.ecf"/>
    <library name="simple_email" location="$SIMPLE_EIFFEL/simple_email/simple_email.ecf"/>
    <library name="simple_csv" location="$SIMPLE_EIFFEL/simple_csv/simple_csv.ecf"/>
    <library name="base" location="$ISE_LIBRARY/library/base/base.ecf"/>
    <cluster name="src" location="./src/" recursive="true"/>
</target>

<!-- CLI target -->
<target name="dataflow" extends="dataflow_lib">
    <root class="DATAFLOW_CLI" feature="make"/>
</target>

<!-- Test target -->
<target name="dataflow_tests" extends="dataflow_lib">
    <root class="TEST_APP" feature="make"/>
    <library name="simple_testing" location="$SIMPLE_EIFFEL/simple_testing/simple_testing.ecf"/>
    <cluster name="tests" location="./tests/" recursive="true"/>
</target>
```

---

## Build Commands

```bash
# Compile CLI
/d/prod/ec.sh -batch -config dataflow.ecf -target dataflow -c_compile

# Compile finalized
/d/prod/ec.sh -batch -config dataflow.ecf -target dataflow -finalize -c_compile

# Run tests
/d/prod/ec.sh -batch -config dataflow.ecf -target dataflow_tests -c_compile
./EIFGENs/dataflow_tests/W_code/dataflow.exe
```

---

## Success Criteria

| Criterion | Measure | Target |
|-----------|---------|--------|
| Compiles | Zero errors | 100% |
| Tests pass | All tests | 100% |
| CLI works | All commands functional | Yes |
| Documentation | README, schema docs complete | Yes |
| Pipeline reliability | Stages execute in order | 100% |
| SLA accuracy | Violations detected correctly | 100% |
| Performance | 50 pipelines, <5% CPU idle | Yes |

---

## Risk Mitigation

| Risk | Mitigation |
|------|------------|
| simple_process incomplete | Use ISE PROCESS_FACTORY fallback |
| Cycle detection edge cases | Comprehensive test suite |
| Email delivery failures | Log attempts, retry queue |
| Large pipeline files | Streaming JSON parser |
