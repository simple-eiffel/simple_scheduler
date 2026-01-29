# TaskMaster - Build Plan

## Phase Overview

| Phase | Deliverable | Effort | Dependencies |
|-------|-------------|--------|--------------|
| Phase 1 | MVP CLI | 3-4 days | simple_scheduler, simple_cli, simple_process |
| Phase 2 | Persistence | 2-3 days | Phase 1, simple_sql, simple_json |
| Phase 3 | Reporting | 2 days | Phase 2, simple_csv |
| Phase 4 | Polish | 2 days | Phase 3, all features complete |

**Total Estimated Effort:** 9-11 days

---

## Phase 1: MVP

### Objective

Demonstrate core scheduling functionality with CLI interface. Jobs run in memory only (no persistence), but full scheduling capabilities work.

### Deliverables

1. **TASKMASTER_CLI** - Command-line interface with basic commands
2. **TASKMASTER_ENGINE** - Core scheduling wrapper around SIMPLE_SCHEDULER
3. **TASKMASTER_JOB_DEF** - Job definition data class
4. **Basic CLI** - schedule, list, run, daemon commands

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T1.1 | Create project structure | ECF compiles, directories exist |
| T1.2 | Implement TASKMASTER_JOB_DEF | Data class with all job attributes |
| T1.3 | Implement TASKMASTER_ENGINE | Wraps SIMPLE_SCHEDULER, executes shell commands |
| T1.4 | Implement TASKMASTER_CLI scaffold | Argument parsing, command routing |
| T1.5 | Implement `schedule` command | --cron, --interval, --at options work |
| T1.6 | Implement `list` command | Shows all scheduled jobs |
| T1.7 | Implement `run` command | Executes job immediately |
| T1.8 | Implement `daemon` command | Starts scheduler loop |
| T1.9 | Add shell command execution | Uses simple_process for external commands |
| T1.10 | Write MVP tests | Core functionality tested |

### Test Cases

| Test | Input | Expected Output |
|------|-------|-----------------|
| Schedule cron job | `schedule --cron "*/5 * * * *" --name test --command "echo hello"` | Job scheduled, ID returned |
| Schedule interval job | `schedule --interval 30 --name ping --command "curl http://localhost"` | Job scheduled, ID returned |
| List jobs | `list` | Table of scheduled jobs |
| Run job | `run test` | Job executes, output shown |
| Invalid cron | `schedule --cron "invalid"` | Error message, exit code 2 |

### Contracts

```eiffel
class TASKMASTER_ENGINE
feature
    schedule_job (a_job: TASKMASTER_JOB_DEF)
        require
            job_not_void: a_job /= Void
            job_has_id: not a_job.id.is_empty
            job_has_command: not a_job.command.is_empty
            trigger_valid: a_job.has_valid_trigger
        ensure
            job_scheduled: has_job (a_job.id)

    has_job (a_id: STRING): BOOLEAN
        require
            id_not_empty: not a_id.is_empty
```

---

## Phase 2: Persistence

### Objective

Add SQLite persistence so jobs survive daemon restarts. Implement execution history tracking.

### Deliverables

1. **TASKMASTER_JOB_STORE** - SQLite-based job storage
2. **TASKMASTER_HISTORY** - Execution history recording
3. **TASKMASTER_LISTENER** - Event listener for history recording
4. **Database schema** - SQLite tables for jobs and executions
5. **history** command - View execution history

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T2.1 | Design database schema | Tables for jobs, executions |
| T2.2 | Implement TASKMASTER_JOB_STORE | CRUD operations for jobs |
| T2.3 | Implement TASKMASTER_HISTORY | Record executions, query history |
| T2.4 | Implement TASKMASTER_LISTENER | Captures scheduler events |
| T2.5 | Integrate persistence in ENGINE | Load jobs on start, save on schedule |
| T2.6 | Implement `history` command | --job, --last, --since options |
| T2.7 | Implement `unschedule` command | Remove job from scheduler and DB |
| T2.8 | Add history retention policy | Purge old records based on config |
| T2.9 | Write persistence tests | DB operations tested |

### Test Cases

| Test | Input | Expected Output |
|------|-------|-----------------|
| Job persists | Schedule job, restart daemon | Job still scheduled |
| History recorded | Run job, check history | Execution recorded with duration |
| History filtering | `history --job test --last 5` | Last 5 executions for job |
| Unschedule | `unschedule test` | Job removed from DB |
| History retention | Configure 7-day retention | Old records purged |

### Contracts

```eiffel
class TASKMASTER_JOB_STORE
feature
    save_job (a_job: TASKMASTER_JOB_DEF)
        require
            job_valid: a_job.is_valid
        ensure
            job_exists: job_exists (a_job.id)

    load_job (a_id: STRING): detachable TASKMASTER_JOB_DEF
        require
            id_not_empty: not a_id.is_empty
        ensure
            found_implies_valid: attached Result implies Result.is_valid
```

---

## Phase 3: Reporting

### Objective

Add operational reporting, JSON/CSV export, and configuration management.

### Deliverables

1. **TASKMASTER_REPORTER** - Metrics and report generation
2. **TASKMASTER_CONFIG** - Configuration file support
3. **export/import** commands - JSON job definitions
4. **report** command - Execution statistics
5. **config** command - View/edit configuration

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T3.1 | Implement TASKMASTER_REPORTER | Job stats, execution metrics |
| T3.2 | Implement TASKMASTER_CONFIG | Load/save JSON config |
| T3.3 | Implement `report` command | --period, --output options |
| T3.4 | Implement `export` command | Jobs to JSON |
| T3.5 | Implement `import` command | Jobs from JSON |
| T3.6 | Implement `config` command | Show/set configuration |
| T3.7 | Add CSV output format | --output csv for list, history |
| T3.8 | Write reporting tests | All report formats tested |

### Test Cases

| Test | Input | Expected Output |
|------|-------|-----------------|
| Weekly report | `report --period week` | Execution stats for past week |
| JSON export | `export --output jobs.json` | Valid JSON file with all jobs |
| JSON import | `import --file jobs.json` | Jobs created from file |
| CSV output | `list --output csv` | Valid CSV with job data |
| Config show | `config` | Current configuration displayed |

### Report Format

```
TaskMaster Report - Week of 2026-01-20

Jobs Summary:
  Total Jobs: 5
  Active Jobs: 4
  Disabled Jobs: 1

Execution Summary:
  Total Executions: 847
  Successful: 841 (99.3%)
  Failed: 6 (0.7%)

Top Jobs by Execution:
  1. heartbeat     - 336 runs
  2. cleanup       - 168 runs
  3. sync          - 168 runs

Failed Executions:
  2026-01-22 14:35 - deploy - Exit code 1
  2026-01-21 09:00 - backup - Timeout after 300s
```

---

## Phase 4: Production Polish

### Objective

Harden for production use with comprehensive error handling, documentation, and performance optimization.

### Deliverables

1. Error handling hardening
2. Help documentation
3. Configuration validation
4. Performance optimization
5. README and usage documentation

### Tasks

| Task | Description | Acceptance Criteria |
|------|-------------|---------------------|
| T4.1 | Comprehensive error handling | All edge cases handled gracefully |
| T4.2 | Help text for all commands | --help shows detailed usage |
| T4.3 | Configuration validation | Invalid config rejected with clear message |
| T4.4 | Performance profiling | Daemon handles 100+ jobs efficiently |
| T4.5 | Documentation | README, CHANGELOG, man page |
| T4.6 | Integration tests | End-to-end workflow tests |
| T4.7 | Release packaging | Binary builds for Windows/Linux |

### Test Cases

| Test | Input | Expected Output |
|------|-------|-----------------|
| Invalid DB path | `--db /invalid/path` | Clear error message |
| Missing command | No arguments | Help text shown |
| 100+ jobs | Schedule 100 jobs | Daemon runs smoothly |
| Concurrent execution | Two daemons | Second rejected |

---

## ECF Target Structure

```xml
<!-- Library target (reusable business logic) -->
<target name="taskmaster_lib">
    <option warning="warning" syntax="standard">
        <assertions precondition="true" postcondition="true" invariant="true"/>
    </option>
    <!-- Dependencies -->
    <library name="simple_scheduler" location="$SIMPLE_EIFFEL/simple_scheduler/simple_scheduler.ecf"/>
    <library name="simple_sql" location="$SIMPLE_EIFFEL/simple_sql/simple_sql.ecf"/>
    <library name="simple_json" location="$SIMPLE_EIFFEL/simple_json/simple_json.ecf"/>
    <library name="simple_logger" location="$SIMPLE_EIFFEL/simple_logger/simple_logger.ecf"/>
    <library name="simple_config" location="$SIMPLE_EIFFEL/simple_config/simple_config.ecf"/>
    <library name="simple_cli" location="$SIMPLE_EIFFEL/simple_cli/simple_cli.ecf"/>
    <library name="simple_process" location="$SIMPLE_EIFFEL/simple_process/simple_process.ecf"/>
    <library name="simple_uuid" location="$SIMPLE_EIFFEL/simple_uuid/simple_uuid.ecf"/>
    <library name="simple_csv" location="$SIMPLE_EIFFEL/simple_csv/simple_csv.ecf"/>
    <library name="base" location="$ISE_LIBRARY/library/base/base.ecf"/>
    <cluster name="src" location="./src/" recursive="true"/>
</target>

<!-- CLI executable target -->
<target name="taskmaster" extends="taskmaster_lib">
    <root class="TASKMASTER_CLI" feature="make"/>
</target>

<!-- Test target -->
<target name="taskmaster_tests" extends="taskmaster_lib">
    <root class="TEST_APP" feature="make"/>
    <library name="simple_testing" location="$SIMPLE_EIFFEL/simple_testing/simple_testing.ecf"/>
    <cluster name="tests" location="./tests/" recursive="true"/>
</target>
```

---

## Build Commands

```bash
# Compile CLI (workbench for development)
/d/prod/ec.sh -batch -config taskmaster.ecf -target taskmaster -c_compile

# Compile CLI (finalized for release)
/d/prod/ec.sh -batch -config taskmaster.ecf -target taskmaster -finalize -c_compile

# Run tests
/d/prod/ec.sh -batch -config taskmaster.ecf -target taskmaster_tests -c_compile
./EIFGENs/taskmaster_tests/W_code/taskmaster.exe

# Finalized test run
/d/prod/ec.sh -batch -config taskmaster.ecf -target taskmaster_tests -finalize -c_compile
./EIFGENs/taskmaster_tests/F_code/taskmaster.exe
```

---

## Success Criteria

| Criterion | Measure | Target |
|-----------|---------|--------|
| Compiles | Zero errors | 100% |
| Tests pass | All tests | 100% |
| CLI works | All commands functional | Yes |
| Documentation | README complete | Yes |
| Job reliability | Jobs execute on schedule | 99.9% |
| Performance | 100+ jobs, <1% CPU idle | Yes |

---

## Risk Mitigation

| Risk | Mitigation |
|------|------------|
| simple_process not available | Fall back to ISE PROCESS_FACTORY |
| simple_cli incomplete | Use basic argument parsing |
| SQLite locking issues | Use WAL mode, single writer |
| Memory leaks in daemon | Periodic history purge, bounded collections |
