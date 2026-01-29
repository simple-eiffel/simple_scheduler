# TaskMaster - Technical Design

## Architecture

### Component Overview

```
+----------------------------------------------------------+
|                      TaskMaster                           |
+----------------------------------------------------------+
|  CLI Interface Layer (TASKMASTER_CLI)                     |
|    - Argument parsing (simple_cli)                        |
|    - Command routing                                      |
|    - Output formatting (text, json, csv)                  |
+----------------------------------------------------------+
|  Business Logic Layer                                     |
|    - TASKMASTER_ENGINE: Core scheduling operations        |
|    - TASKMASTER_JOB_STORE: Persistent job storage         |
|    - TASKMASTER_HISTORY: Execution history management     |
|    - TASKMASTER_REPORTER: Metrics and reports             |
+----------------------------------------------------------+
|  Integration Layer                                        |
|    - simple_scheduler: Job scheduling engine              |
|    - simple_sql: SQLite persistence                       |
|    - simple_json: Configuration and export                |
|    - simple_logger: Execution logging                     |
|    - simple_config: Settings management                   |
+----------------------------------------------------------+
|  Data Layer                                               |
|    - jobs.db: Job definitions, triggers, history          |
|    - taskmaster.json: Configuration                       |
|    - logs/: Execution logs                                |
+----------------------------------------------------------+
```

### Class Design

| Class | Responsibility | Key Features |
|-------|----------------|--------------|
| TASKMASTER_CLI | Command-line interface | parse_args, execute_command, format_output |
| TASKMASTER_ENGINE | Core scheduling engine | schedule_job, unschedule_job, run_daemon |
| TASKMASTER_JOB_STORE | Persistent job storage | save_job, load_jobs, delete_job |
| TASKMASTER_HISTORY | Execution history | record_execution, get_history, purge_old |
| TASKMASTER_REPORTER | Reports and metrics | job_summary, execution_stats, export_json |
| TASKMASTER_CONFIG | Configuration management | load_config, save_config, validate |
| TASKMASTER_LISTENER | Event handling | on_job_completed, on_job_failed |

### Command Structure

```bash
taskmaster <command> [options] [arguments]

Commands:
  schedule     Schedule a new job
  unschedule   Remove a scheduled job
  list         List all scheduled jobs
  history      Show execution history
  run          Execute a job immediately
  daemon       Start scheduler daemon
  status       Show daemon status
  report       Generate execution report
  export       Export jobs/history to JSON
  import       Import jobs from JSON
  config       Manage configuration

Schedule Options:
  --cron EXPR        Cron expression (e.g., "*/5 * * * *")
  --interval SECS    Interval in seconds
  --at DATETIME      One-time execution at specific time
  --name NAME        Human-readable job name
  --command CMD      Shell command to execute
  --retry COUNT      Retry count on failure (default: 0)
  --timeout SECS     Execution timeout (default: 0/unlimited)
  --concurrent       Allow concurrent executions

Global Options:
  --config FILE      Configuration file path
  --db FILE          Database file path
  --output FORMAT    Output format (text|json|csv)
  --verbose          Verbose output
  --quiet            Suppress non-essential output
  --help             Show help
  --version          Show version
```

### Command Examples

```bash
# Schedule a cron job
taskmaster schedule --cron "*/5 * * * *" --name "cleanup" --command "./cleanup.sh"

# Schedule an interval job
taskmaster schedule --interval 30 --name "heartbeat" --command "curl http://monitor/ping"

# Schedule a one-time job
taskmaster schedule --at "2026-01-25 09:00:00" --name "deploy" --command "./deploy.sh"

# List all jobs
taskmaster list
taskmaster list --output json

# Show execution history
taskmaster history --job cleanup --last 10
taskmaster history --since "2026-01-01" --output csv

# Run a job immediately
taskmaster run cleanup

# Start daemon
taskmaster daemon --foreground
taskmaster daemon --background

# Generate report
taskmaster report --period week --output json > report.json

# Export/import jobs
taskmaster export --output jobs.json
taskmaster import --file jobs.json
```

### Data Flow

```
┌─────────────┐     ┌────────────────┐     ┌─────────────────┐
│   CLI       │────>│  TASKMASTER    │────>│  SIMPLE_        │
│   Command   │     │  ENGINE        │     │  SCHEDULER      │
└─────────────┘     └────────────────┘     └─────────────────┘
                            │                       │
                            v                       v
                    ┌───────────────┐       ┌───────────────┐
                    │  JOB_STORE    │       │  Trigger      │
                    │  (simple_sql) │       │  Evaluation   │
                    └───────────────┘       └───────────────┘
                            │                       │
                            v                       v
                    ┌───────────────┐       ┌───────────────┐
                    │  SQLite DB    │       │  Job          │
                    │  (jobs.db)    │       │  Execution    │
                    └───────────────┘       └───────────────┘
                                                    │
                            ┌───────────────────────┘
                            v
                    ┌───────────────┐
                    │  HISTORY      │
                    │  Recording    │
                    └───────────────┘
                            │
                            v
                    ┌───────────────┐
                    │  REPORTER     │
                    │  Metrics      │
                    └───────────────┘
```

### Configuration Schema

```json
{
  "taskmaster": {
    "database": {
      "path": "./taskmaster.db",
      "history_retention_days": 90
    },
    "daemon": {
      "poll_interval_ms": 1000,
      "pid_file": "./taskmaster.pid",
      "log_file": "./taskmaster.log"
    },
    "logging": {
      "level": "info",
      "format": "text",
      "output": "file"
    },
    "notifications": {
      "on_failure": true,
      "email": null,
      "webhook": null
    },
    "defaults": {
      "retry_count": 0,
      "timeout_seconds": 0,
      "allow_concurrent": false
    }
  }
}
```

### Database Schema

```sql
-- Jobs table
CREATE TABLE jobs (
    id TEXT PRIMARY KEY,
    name TEXT NOT NULL,
    command TEXT NOT NULL,
    trigger_type TEXT NOT NULL,  -- 'cron', 'interval', 'date'
    trigger_spec TEXT NOT NULL,  -- cron expression, interval seconds, or ISO date
    is_enabled INTEGER DEFAULT 1,
    retry_count INTEGER DEFAULT 0,
    timeout_seconds INTEGER DEFAULT 0,
    allow_concurrent INTEGER DEFAULT 0,
    created_at TEXT NOT NULL,
    updated_at TEXT NOT NULL
);

-- Execution history table
CREATE TABLE executions (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    job_id TEXT NOT NULL,
    started_at TEXT NOT NULL,
    completed_at TEXT,
    duration_ms INTEGER,
    exit_code INTEGER,
    is_success INTEGER,
    output TEXT,
    error_message TEXT,
    FOREIGN KEY (job_id) REFERENCES jobs(id)
);

-- Indexes
CREATE INDEX idx_executions_job_id ON executions(job_id);
CREATE INDEX idx_executions_started_at ON executions(started_at);
```

### Error Handling

| Error Type | Handling | User Message |
|------------|----------|--------------|
| Invalid cron expression | Reject schedule | "Invalid cron expression: {error}" |
| Job not found | Return error | "Job not found: {id}" |
| Database error | Log and retry | "Database error: {message}" |
| Command execution failure | Record in history | "Job failed: exit code {code}" |
| Timeout exceeded | Kill process | "Job timed out after {seconds}s" |
| Concurrent execution blocked | Skip execution | "Job {id} already running, skipping" |

### Exit Codes

| Code | Meaning |
|------|---------|
| 0 | Success |
| 1 | General error |
| 2 | Invalid arguments |
| 3 | Job not found |
| 4 | Database error |
| 5 | Configuration error |
| 6 | Daemon already running |

## GUI/TUI Future Path

**CLI foundation enables:**
- Job definitions stored in database can be read by any UI
- JSON export format for data interchange
- Event listeners can push updates to UI via WebSocket
- Configuration file shared between CLI and UI

**What would change for TUI:**
- Add simple_tui for interactive job management
- Real-time job status display
- History browser with filtering
- Configuration editor

**Shared components between CLI/GUI:**
- TASKMASTER_ENGINE (all business logic)
- TASKMASTER_JOB_STORE (data access)
- TASKMASTER_HISTORY (execution tracking)
- Database schema and migrations
