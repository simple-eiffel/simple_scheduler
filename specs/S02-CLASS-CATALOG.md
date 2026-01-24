# S02-CLASS-CATALOG.md
## simple_scheduler - Class Catalog

**Generation Type:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23

---

### CLASS: SIMPLE_SCHEDULER

**Role:** Job scheduler facade

**Creation Procedures:**
- `make` - Create new scheduler

**Key Features:**
- Access: `job_count`, `pending_jobs`, `next_fire_time`, `poll_interval_ms`
- Status: `is_running`, `is_paused`
- Scheduling: `schedule`, `schedule_cron`, `schedule_interval`, `schedule_at`, `unschedule`
- Query: `has_job`, `job`, `trigger_for_job`
- Control: `start`, `stop`, `pause`, `resume`, `trigger_now`, `tick`
- Options: `set_poll_interval`
- Listeners: `add_listener`, `remove_listener`

**Collaborators:** SIMPLE_JOB, SIMPLE_TRIGGER, SIMPLE_SCHEDULER_LISTENER

**Invariants:**
- `jobs_attached`, `triggers_attached`, `job_triggers_attached`, `listeners_attached`
- `poll_interval_positive: poll_interval_ms > 0`
- `jobs_triggers_sync: jobs.count = triggers.count`

---

### CLASS: SIMPLE_JOB

**Role:** Scheduled job with action and execution history

**Creation Procedures:**
- `make(id, action)` - Create with ID and action procedure
- `make_with_name(id, name, action)` - Create with custom name

**Key Features:**
- Access: `id`, `name`, `action`, `context`
- State: `is_enabled`, `is_running`, `last_run`, `last_result`, `run_count`, `error_count`, `results`
- Model: `model_history` (MML_SEQUENCE), `get_last_n_results`
- Options: `allow_concurrent`, `retry_count`, `timeout_seconds`
- Commands: `set_name`, `set_context`, `set_allow_concurrent`, `set_retry_count`, `set_timeout`, `enable`, `disable`, `execute`, `clear_history`

**Constants:**
- `Max_history_size: INTEGER = 100`

**Invariants:**
- `id_not_empty`, `name_not_empty`, `action_attached`
- `run_count_non_negative`, `error_count_non_negative`
- `history_bounded: model_history.count <= Max_history_size`
- `last_result_consistency: attached last_result implies run_count > 0`

---

### CLASS: SIMPLE_JOB_RESULT

**Role:** Job execution result

**Key Features:**
- Access: `duration_ms`, `is_success`, `error_message`
- Factory: `make_success(duration)`, `make_failure(duration, message)`

---

### CLASS: SIMPLE_TRIGGER (Deferred)

**Role:** Base trigger interface

**Deferred Features:**
- `id: STRING`
- `is_enabled: BOOLEAN`
- `is_expired: BOOLEAN`
- `next_fire_time(after: SIMPLE_DATE_TIME): detachable SIMPLE_DATE_TIME`
- `matches(time: SIMPLE_DATE_TIME): BOOLEAN`

---

### CLASS: SIMPLE_CRON_TRIGGER

**Role:** Cron expression-based trigger

**Creation Procedures:**
- `make_with_id(id, expression)` - Create with cron expression

**Key Features:**
- Access: `id`, `expression`, `cron`
- Query: `next_fire_time`, `matches`
- Status: `is_enabled`, `is_expired`

**Collaborators:** SIMPLE_CRON_EXPRESSION

---

### CLASS: SIMPLE_INTERVAL_TRIGGER

**Role:** Fixed interval trigger (every N seconds)

**Creation Procedures:**
- `make_with_id(id, seconds)` - Create with interval

**Key Features:**
- Access: `id`, `interval_seconds`, `last_fire_time`
- Query: `next_fire_time`, `matches`
- Commands: `record_fire`
- Status: `is_enabled`, `is_expired`

---

### CLASS: SIMPLE_DATE_TRIGGER

**Role:** One-time trigger at specific date/time

**Creation Procedures:**
- `make_with_id(id, fire_time)` - Create for specific time

**Key Features:**
- Access: `id`, `fire_time`, `has_fired`
- Query: `next_fire_time`, `matches`
- Commands: `record_fire`
- Status: `is_enabled`, `is_expired`

---

### CLASS: SIMPLE_CRON_EXPRESSION

**Role:** Cron expression parser and evaluator

**Creation Procedures:**
- `make(expression)` - Standard 5-field cron
- `make_extended(expression)` - Extended 6-field with seconds

**Key Features:**
- Access: `expression`, `is_extended`
- Fields: `second_field`, `minute_field`, `hour_field`, `day_of_month_field`, `month_field`, `day_of_week_field`
- Status: `is_valid`, `validation_error`
- Calculation: `next_fire_time`, `matches`
- Conversion: `to_description` - Human-readable

**Cron Format:**
- Standard: `minute hour day-of-month month day-of-week`
- Extended: `second minute hour day-of-month month day-of-week`
- Wildcards: `*` (all), `*/n` (step), `n-m` (range), `n,m` (list)

---

### CLASS: SIMPLE_SCHEDULER_LISTENER (Deferred)

**Role:** Scheduler event listener interface

**Deferred Features:**
- `on_scheduler_started(scheduler)`
- `on_scheduler_stopped(scheduler)`
- `on_scheduler_paused(scheduler)`
- `on_scheduler_resumed(scheduler)`
- `on_job_scheduled(job, trigger)`
- `on_job_unscheduled(job)`
- `on_job_starting(job)`
- `on_job_completed(job, result)`
