# DataFlow Orchestrator - Technical Design

## Architecture

### Component Overview

```
+----------------------------------------------------------+
|                  DataFlow Orchestrator                    |
+----------------------------------------------------------+
|  CLI Interface Layer (DATAFLOW_CLI)                       |
|    - Argument parsing (simple_cli)                        |
|    - Pipeline commands                                    |
|    - Output formatting (text, json)                       |
+----------------------------------------------------------+
|  Business Logic Layer                                     |
|    - DATAFLOW_ENGINE: Pipeline orchestration              |
|    - DATAFLOW_PIPELINE: Pipeline definition model         |
|    - DATAFLOW_STAGE: Individual pipeline stage            |
|    - DATAFLOW_DEPENDENCY_RESOLVER: Stage ordering         |
|    - DATAFLOW_SLA_MONITOR: SLA tracking and alerts        |
+----------------------------------------------------------+
|  Integration Layer                                        |
|    - simple_scheduler: Stage scheduling                   |
|    - simple_sql: Pipeline metadata, execution logs        |
|    - simple_json: Pipeline definitions                    |
|    - simple_process: Stage command execution              |
|    - simple_email: SLA alerts                             |
+----------------------------------------------------------+
|  Data Layer                                               |
|    - dataflow.db: Pipeline state, execution history       |
|    - pipelines/*.json: Pipeline definitions               |
|    - logs/: Execution logs                                |
+----------------------------------------------------------+
```

### Class Design

| Class | Responsibility | Key Features |
|-------|----------------|--------------|
| DATAFLOW_CLI | Command-line interface | parse_args, execute_command, format_output |
| DATAFLOW_ENGINE | Pipeline orchestration | run_pipeline, schedule_pipeline, check_slas |
| DATAFLOW_PIPELINE | Pipeline definition | stages, dependencies, schedule, sla |
| DATAFLOW_STAGE | Individual stage | command, timeout, retry_policy |
| DATAFLOW_DEPENDENCY_RESOLVER | Topological sort | resolve_order, detect_cycles |
| DATAFLOW_SLA_MONITOR | SLA tracking | check_sla, record_violation, alert |
| DATAFLOW_PIPELINE_STORE | Persistence | save_pipeline, load_pipelines |
| DATAFLOW_EXECUTION_LOG | Execution history | record_run, get_history |
| DATAFLOW_ALERTER | Notifications | send_failure_alert, send_sla_violation |

### Command Structure

```bash
dataflow <command> [options] [arguments]

Commands:
  init         Initialize new pipeline project
  create       Create a new pipeline definition
  validate     Validate pipeline definition
  run          Execute a pipeline immediately
  schedule     Add pipeline to scheduler
  unschedule   Remove pipeline from scheduler
  list         List all pipelines
  status       Show pipeline status
  history      Show execution history
  logs         Show stage logs
  sla          Show SLA compliance report
  daemon       Start orchestrator daemon
  graph        Show pipeline dependency graph

Pipeline Commands:
  dataflow run <pipeline>           Run pipeline now
  dataflow run <pipeline> --stage   Run specific stage only
  dataflow run <pipeline> --from    Start from specific stage

Schedule Options:
  --cron EXPR        Cron expression
  --depends PIPELINE Depend on another pipeline
  --sla DURATION     SLA deadline (e.g., "2h", "30m")

Global Options:
  --config FILE      Configuration file
  --pipelines DIR    Pipeline definitions directory
  --output FORMAT    Output format (text|json)
  --verbose          Verbose output
  --help             Show help
```

### Command Examples

```bash
# Initialize pipeline project
dataflow init --name my-etl

# Create pipeline
dataflow create daily-sales --stages "extract,transform,load"

# Validate pipeline
dataflow validate pipelines/daily-sales.json

# Run pipeline immediately
dataflow run daily-sales
dataflow run daily-sales --stage transform
dataflow run daily-sales --from transform

# Schedule pipeline
dataflow schedule daily-sales --cron "0 2 * * *" --sla "4h"

# List pipelines
dataflow list
dataflow list --status running

# Show status
dataflow status daily-sales
dataflow status --all

# Show history
dataflow history daily-sales --last 10
dataflow history --since "2026-01-01" --failed

# Show logs
dataflow logs daily-sales --run latest
dataflow logs daily-sales --run 123 --stage extract

# SLA report
dataflow sla --period week
dataflow sla daily-sales --violations

# Start daemon
dataflow daemon
dataflow daemon --foreground

# Show dependency graph
dataflow graph daily-sales
dataflow graph --all --format dot > graph.dot
```

### Pipeline Definition Format

```json
{
  "name": "daily-sales",
  "description": "Daily sales data pipeline",
  "schedule": "0 2 * * *",
  "sla": "4h",
  "notifications": {
    "on_failure": ["team@example.com"],
    "on_sla_violation": ["alerts@example.com"]
  },
  "stages": [
    {
      "name": "extract",
      "command": "./scripts/extract_sales.sh",
      "timeout": "30m",
      "retry": {
        "count": 3,
        "delay": "5m"
      }
    },
    {
      "name": "transform",
      "command": "python transform.py",
      "depends_on": ["extract"],
      "timeout": "1h"
    },
    {
      "name": "load",
      "command": "./scripts/load_warehouse.sh",
      "depends_on": ["transform"],
      "timeout": "30m"
    },
    {
      "name": "validate",
      "command": "./scripts/validate_data.sh",
      "depends_on": ["load"],
      "timeout": "10m"
    }
  ],
  "on_success": "./scripts/notify_success.sh",
  "on_failure": "./scripts/notify_failure.sh"
}
```

### Data Flow

```
┌─────────────┐     ┌────────────────┐     ┌─────────────────┐
│  Pipeline   │────>│  DEPENDENCY    │────>│  Execution      │
│  JSON       │     │  RESOLVER      │     │  Order          │
└─────────────┘     └────────────────┘     └─────────────────┘
                                                    │
                            ┌───────────────────────┘
                            v
┌─────────────┐     ┌────────────────┐     ┌─────────────────┐
│  SCHEDULER  │────>│  Stage         │────>│  Command        │
│  Trigger    │     │  Execution     │     │  Execution      │
└─────────────┘     └────────────────┘     └─────────────────┘
                            │                       │
                            v                       v
                    ┌───────────────┐       ┌───────────────┐
                    │  Execution    │       │  SLA          │
                    │  Log          │       │  Monitor      │
                    └───────────────┘       └───────────────┘
                                                    │
                            ┌───────────────────────┘
                            v
                    ┌───────────────┐
                    │  Alerter      │
                    │  (if needed)  │
                    └───────────────┘
```

### Database Schema

```sql
-- Pipelines table (runtime state)
CREATE TABLE pipelines (
    name TEXT PRIMARY KEY,
    definition_path TEXT NOT NULL,
    schedule TEXT,
    sla_seconds INTEGER,
    is_enabled INTEGER DEFAULT 1,
    last_run_id INTEGER,
    last_run_at TEXT,
    last_status TEXT,
    created_at TEXT NOT NULL,
    updated_at TEXT NOT NULL
);

-- Pipeline runs table
CREATE TABLE runs (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    pipeline_name TEXT NOT NULL,
    started_at TEXT NOT NULL,
    completed_at TEXT,
    duration_seconds INTEGER,
    status TEXT NOT NULL,  -- 'running', 'success', 'failed', 'cancelled'
    triggered_by TEXT,     -- 'schedule', 'manual', 'dependency'
    sla_met INTEGER,
    FOREIGN KEY (pipeline_name) REFERENCES pipelines(name)
);

-- Stage executions table
CREATE TABLE stage_executions (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    run_id INTEGER NOT NULL,
    stage_name TEXT NOT NULL,
    started_at TEXT NOT NULL,
    completed_at TEXT,
    duration_seconds INTEGER,
    status TEXT NOT NULL,  -- 'pending', 'running', 'success', 'failed', 'skipped'
    exit_code INTEGER,
    output TEXT,
    error_message TEXT,
    retry_count INTEGER DEFAULT 0,
    FOREIGN KEY (run_id) REFERENCES runs(id)
);

-- SLA violations table
CREATE TABLE sla_violations (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    pipeline_name TEXT NOT NULL,
    run_id INTEGER NOT NULL,
    sla_seconds INTEGER NOT NULL,
    actual_seconds INTEGER NOT NULL,
    violation_at TEXT NOT NULL,
    notified INTEGER DEFAULT 0,
    FOREIGN KEY (pipeline_name) REFERENCES pipelines(name),
    FOREIGN KEY (run_id) REFERENCES runs(id)
);

-- Indexes
CREATE INDEX idx_runs_pipeline ON runs(pipeline_name);
CREATE INDEX idx_runs_started_at ON runs(started_at);
CREATE INDEX idx_stage_exec_run ON stage_executions(run_id);
CREATE INDEX idx_sla_violations_pipeline ON sla_violations(pipeline_name);
```

### Dependency Resolution Algorithm

```eiffel
class DATAFLOW_DEPENDENCY_RESOLVER

feature -- Resolution

    resolve_order (a_stages: LIST [DATAFLOW_STAGE]): ARRAYED_LIST [DATAFLOW_STAGE]
            -- Return stages in execution order (topological sort).
        require
            stages_not_empty: not a_stages.is_empty
            no_cycles: not has_cycle (a_stages)
        local
            l_in_degree: HASH_TABLE [INTEGER, STRING]
            l_queue: ARRAYED_QUEUE [DATAFLOW_STAGE]
            l_current: DATAFLOW_STAGE
        do
            create Result.make (a_stages.count)
            l_in_degree := compute_in_degrees (a_stages)
            create l_queue.make (a_stages.count)

            -- Add stages with no dependencies
            across a_stages as s loop
                if l_in_degree.item (s.name) = 0 then
                    l_queue.extend (s)
                end
            end

            -- Process queue
            from until l_queue.is_empty loop
                l_current := l_queue.item
                l_queue.remove
                Result.extend (l_current)

                -- Reduce in-degree of dependents
                across a_stages as s loop
                    if s.depends_on.has (l_current.name) then
                        l_in_degree.force (l_in_degree.item (s.name) - 1, s.name)
                        if l_in_degree.item (s.name) = 0 then
                            l_queue.extend (s)
                        end
                    end
                end
            end
        ensure
            all_stages_included: Result.count = a_stages.count
        end

    has_cycle (a_stages: LIST [DATAFLOW_STAGE]): BOOLEAN
            -- Check for circular dependencies.
        do
            -- DFS-based cycle detection
            Result := detect_cycle_dfs (a_stages)
        end

end
```

### Error Handling

| Error Type | Handling | User Message |
|------------|----------|--------------|
| Invalid pipeline JSON | Reject with validation errors | "Pipeline validation failed: {errors}" |
| Circular dependency | Reject pipeline | "Circular dependency detected: {cycle}" |
| Stage timeout | Kill process, record failure | "Stage timed out after {duration}" |
| Stage failure | Execute retry policy, then fail | "Stage failed after {n} retries" |
| SLA violation | Record, alert, continue | "SLA violated: expected {sla}, took {actual}" |
| Pipeline not found | Return error | "Pipeline not found: {name}" |

### Exit Codes

| Code | Meaning |
|------|---------|
| 0 | Success |
| 1 | General error |
| 2 | Invalid arguments |
| 3 | Pipeline not found |
| 4 | Validation error |
| 5 | Database error |
| 6 | Stage execution failed |
| 7 | SLA violated (pipeline succeeded but late) |

## GUI/TUI Future Path

**CLI foundation enables:**
- Pipeline definitions in JSON readable by any UI
- Execution logs and history in database
- Real-time status via database polling
- Graph visualization via DOT format export

**What would change for TUI:**
- Add simple_tui for interactive pipeline management
- Real-time stage progress display
- Log viewer with filtering
- Dependency graph ASCII art

**Shared components between CLI/GUI:**
- DATAFLOW_ENGINE (all business logic)
- DATAFLOW_PIPELINE_STORE (data access)
- DATAFLOW_DEPENDENCY_RESOLVER (graph algorithms)
- Pipeline JSON schema
