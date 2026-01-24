# S04-FEATURE-SPECS.md
## simple_scheduler - Feature Specifications

**Generation Type:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23

---

## Feature Categories

### 1. Scheduler Creation

| Feature | Class | Signature | Description |
|---------|-------|-----------|-------------|
| make | SIMPLE_SCHEDULER | | Create new scheduler |

### 2. Job Scheduling

| Feature | Class | Signature | Description |
|---------|-------|-----------|-------------|
| schedule | SIMPLE_SCHEDULER | (job, trigger) | Schedule with trigger |
| schedule_cron | SIMPLE_SCHEDULER | (job, expression) | Schedule with cron |
| schedule_interval | SIMPLE_SCHEDULER | (job, seconds) | Schedule every N seconds |
| schedule_at | SIMPLE_SCHEDULER | (job, time) | Schedule one-time |
| unschedule | SIMPLE_SCHEDULER | (job_id) | Remove job |

### 3. Scheduler Control

| Feature | Class | Signature | Description |
|---------|-------|-----------|-------------|
| start | SIMPLE_SCHEDULER | | Start scheduler |
| stop | SIMPLE_SCHEDULER | | Stop scheduler |
| pause | SIMPLE_SCHEDULER | | Pause (preserve state) |
| resume | SIMPLE_SCHEDULER | | Resume from pause |
| trigger_now | SIMPLE_SCHEDULER | (job_id) | Execute immediately |
| tick | SIMPLE_SCHEDULER | | Process one tick |

### 4. Scheduler Query

| Feature | Class | Signature | Description |
|---------|-------|-----------|-------------|
| has_job | SIMPLE_SCHEDULER | (job_id): BOOLEAN | Job exists? |
| job | SIMPLE_SCHEDULER | (job_id): detachable SIMPLE_JOB | Get job |
| trigger_for_job | SIMPLE_SCHEDULER | (job_id): detachable SIMPLE_TRIGGER | Get trigger |
| job_count | SIMPLE_SCHEDULER | : INTEGER | Number of jobs |
| pending_jobs | SIMPLE_SCHEDULER | : ARRAYED_LIST [SIMPLE_JOB] | All jobs |
| next_fire_time | SIMPLE_SCHEDULER | : detachable SIMPLE_DATE_TIME | Next fire |

### 5. Scheduler Status

| Feature | Class | Signature | Description |
|---------|-------|-----------|-------------|
| is_running | SIMPLE_SCHEDULER | : BOOLEAN | Running? |
| is_paused | SIMPLE_SCHEDULER | : BOOLEAN | Paused? |
| poll_interval_ms | SIMPLE_SCHEDULER | : INTEGER | Poll interval |
| set_poll_interval | SIMPLE_SCHEDULER | (ms: INTEGER) | Set interval |

### 6. Listeners

| Feature | Class | Signature | Description |
|---------|-------|-----------|-------------|
| add_listener | SIMPLE_SCHEDULER | (listener) | Add listener |
| remove_listener | SIMPLE_SCHEDULER | (listener) | Remove listener |

### 7. Job Creation

| Feature | Class | Signature | Description |
|---------|-------|-----------|-------------|
| make | SIMPLE_JOB | (id, action) | Create job |
| make_with_name | SIMPLE_JOB | (id, name, action) | Create with name |

### 8. Job Access

| Feature | Class | Signature | Description |
|---------|-------|-----------|-------------|
| id | SIMPLE_JOB | : STRING | Job ID |
| name | SIMPLE_JOB | : STRING | Job name |
| action | SIMPLE_JOB | : PROCEDURE | Action to execute |
| context | SIMPLE_JOB | : detachable ANY | Job context |

### 9. Job State

| Feature | Class | Signature | Description |
|---------|-------|-----------|-------------|
| is_enabled | SIMPLE_JOB | : BOOLEAN | Job enabled? |
| is_running | SIMPLE_JOB | : BOOLEAN | Currently running? |
| last_run | SIMPLE_JOB | : detachable SIMPLE_DATE_TIME | Last run time |
| last_result | SIMPLE_JOB | : detachable SIMPLE_JOB_RESULT | Last result |
| run_count | SIMPLE_JOB | : INTEGER | Successful runs |
| error_count | SIMPLE_JOB | : INTEGER | Failed runs |
| results | SIMPLE_JOB | : ARRAYED_LIST [SIMPLE_JOB_RESULT] | History |

### 10. Job Model Queries (MML)

| Feature | Class | Signature | Description |
|---------|-------|-----------|-------------|
| model_history | SIMPLE_JOB | : MML_SEQUENCE [SIMPLE_JOB_RESULT] | History as model |
| get_last_n_results | SIMPLE_JOB | (n): MML_SEQUENCE | Get last N results |

### 11. Job Options

| Feature | Class | Signature | Description |
|---------|-------|-----------|-------------|
| allow_concurrent | SIMPLE_JOB | : BOOLEAN | Allow concurrent? |
| retry_count | SIMPLE_JOB | : INTEGER | Retry on failure |
| timeout_seconds | SIMPLE_JOB | : INTEGER | Max execution time |
| set_allow_concurrent | SIMPLE_JOB | (value) | Set concurrent |
| set_retry_count | SIMPLE_JOB | (count) | Set retries |
| set_timeout | SIMPLE_JOB | (seconds) | Set timeout |

### 12. Job Commands

| Feature | Class | Signature | Description |
|---------|-------|-----------|-------------|
| enable | SIMPLE_JOB | | Enable job |
| disable | SIMPLE_JOB | | Disable job |
| execute | SIMPLE_JOB | | Execute action |
| clear_history | SIMPLE_JOB | | Clear history |
| set_name | SIMPLE_JOB | (name) | Change name |
| set_context | SIMPLE_JOB | (context) | Set context |

### 13. Cron Expression

| Feature | Class | Signature | Description |
|---------|-------|-----------|-------------|
| make | SIMPLE_CRON_EXPRESSION | (expression) | Standard 5-field |
| make_extended | SIMPLE_CRON_EXPRESSION | (expression) | 6-field with seconds |
| expression | SIMPLE_CRON_EXPRESSION | : STRING | Original expression |
| is_valid | SIMPLE_CRON_EXPRESSION | : BOOLEAN | Valid expression? |
| validation_error | SIMPLE_CRON_EXPRESSION | : detachable STRING | Error message |
| next_fire_time | SIMPLE_CRON_EXPRESSION | (after): SIMPLE_DATE_TIME | Next time |
| matches | SIMPLE_CRON_EXPRESSION | (time): BOOLEAN | Time matches? |
| to_description | SIMPLE_CRON_EXPRESSION | : STRING | Human readable |

### 14. Cron Fields

| Feature | Class | Signature | Description |
|---------|-------|-----------|-------------|
| second_field | SIMPLE_CRON_EXPRESSION | : STRING | Seconds (extended) |
| minute_field | SIMPLE_CRON_EXPRESSION | : STRING | Minutes |
| hour_field | SIMPLE_CRON_EXPRESSION | : STRING | Hours |
| day_of_month_field | SIMPLE_CRON_EXPRESSION | : STRING | Day of month |
| month_field | SIMPLE_CRON_EXPRESSION | : STRING | Month |
| day_of_week_field | SIMPLE_CRON_EXPRESSION | : STRING | Day of week |
| is_extended | SIMPLE_CRON_EXPRESSION | : BOOLEAN | Has seconds? |

### 15. Job Result

| Feature | Class | Signature | Description |
|---------|-------|-----------|-------------|
| make_success | SIMPLE_JOB_RESULT | (duration_ms) | Success result |
| make_failure | SIMPLE_JOB_RESULT | (duration_ms, message) | Failure result |
| duration_ms | SIMPLE_JOB_RESULT | : INTEGER_64 | Execution time |
| is_success | SIMPLE_JOB_RESULT | : BOOLEAN | Success? |
| error_message | SIMPLE_JOB_RESULT | : detachable STRING | Error message |
