# simple_scheduler

Job scheduling for Eiffel: cron expressions, delayed tasks, recurring jobs.

## Features

- **Cron Expressions**: Standard 5-field and extended 6-field (with seconds) cron syntax
- **Interval Triggers**: Fixed-interval scheduling (seconds, minutes, hours)
- **Date Triggers**: One-time scheduling at specific date/time
- **Job Management**: Enable/disable, retry on failure, execution history
- **Event Listeners**: Subscribe to scheduler and job lifecycle events
- **Human-Readable Descriptions**: Convert cron expressions to readable text

## Installation

Add to your ECF:
```xml
<library name="simple_scheduler" location="$SIMPLE_SCHEDULER\simple_scheduler.ecf"/>
```

Set environment variable:
```
SIMPLE_SCHEDULER=path/to/simple_scheduler
```

## Quick Start

```eiffel
local
    scheduler: SIMPLE_SCHEDULER
    job: SIMPLE_JOB
do
    create scheduler.make

    -- Schedule with cron expression (every 5 minutes)
    create job.make ("cleanup", agent do_cleanup)
    scheduler.schedule_cron (job, "*/5 * * * *")

    -- Schedule with interval (every 30 seconds)
    create job.make ("heartbeat", agent send_heartbeat)
    scheduler.schedule_interval (job, 30)

    -- Start scheduler
    scheduler.start

    -- In your main loop:
    scheduler.tick
end
```

## Cron Expression Format

Standard 5-field format:
```
┌───────────── minute (0-59)
│ ┌───────────── hour (0-23)
│ │ ┌───────────── day of month (1-31)
│ │ │ ┌───────────── month (1-12)
│ │ │ │ ┌───────────── day of week (0-6, Sun=0)
│ │ │ │ │
* * * * *
```

Extended 6-field format (with seconds):
```
┌───────────── second (0-59)
│ ┌───────────── minute (0-59)
│ │ ┌───────────── hour (0-23)
│ │ │ ┌───────────── day of month (1-31)
│ │ │ │ ┌───────────── month (1-12)
│ │ │ │ │ ┌───────────── day of week (0-6)
│ │ │ │ │ │
* * * * * *
```

### Field Syntax

| Pattern | Description |
|---------|-------------|
| `*` | All values |
| `n` | Specific value |
| `n-m` | Range (inclusive) |
| `n,m,o` | List of values |
| `*/n` | Step (every n) |

### Examples

| Expression | Description |
|------------|-------------|
| `* * * * *` | Every minute |
| `*/5 * * * *` | Every 5 minutes |
| `0 * * * *` | Every hour |
| `0 9 * * *` | Every day at 9 AM |
| `0 9 * * 1-5` | 9 AM Monday-Friday |
| `0 0 1 * *` | Midnight on 1st of month |

## API Reference

### SIMPLE_SCHEDULER

```eiffel
-- Scheduling
schedule (job, trigger)           -- Schedule with trigger
schedule_cron (job, expression)   -- Schedule with cron
schedule_interval (job, seconds)  -- Schedule with interval
schedule_at (job, datetime)       -- Schedule one-time
unschedule (job_id)              -- Remove job

-- Control
start                            -- Start scheduler
stop                             -- Stop scheduler
pause                            -- Pause (preserve state)
resume                           -- Resume from pause
trigger_now (job_id)             -- Execute immediately
tick                             -- Process one scheduler tick

-- Query
has_job (id): BOOLEAN
job (id): detachable SIMPLE_JOB
pending_jobs: LIST [SIMPLE_JOB]
next_fire_time: detachable DATE_TIME
```

### SIMPLE_JOB

```eiffel
make (id, action)                    -- Create job
make_with_name (id, name, action)    -- Create with display name

-- Options
set_allow_concurrent (bool)          -- Allow parallel runs
set_retry_count (n)                  -- Retries on failure
set_timeout (seconds)                -- Max execution time

-- State
is_enabled, is_running: BOOLEAN
run_count, error_count: INTEGER
last_run: DATE_TIME
last_result: SIMPLE_JOB_RESULT
```

### Triggers

```eiffel
-- Cron trigger
create {SIMPLE_CRON_TRIGGER}.make ("*/5 * * * *")

-- Interval trigger
create {SIMPLE_INTERVAL_TRIGGER}.make_seconds (30)
create {SIMPLE_INTERVAL_TRIGGER}.make_minutes (5)
create {SIMPLE_INTERVAL_TRIGGER}.make_hours (1)

-- Date trigger
create {SIMPLE_DATE_TRIGGER}.make (datetime)
create {SIMPLE_DATE_TRIGGER}.make_in_seconds (60)
create {SIMPLE_DATE_TRIGGER}.make_in_minutes (5)
```

## Event Listeners

```eiffel
class MY_LISTENER inherit SIMPLE_SCHEDULER_LISTENER

feature
    on_scheduler_started (s) do ... end
    on_scheduler_stopped (s) do ... end
    on_job_scheduled (job, trigger) do ... end
    on_job_starting (job) do ... end
    on_job_completed (job, result) do ... end
end

-- Usage
scheduler.add_listener (create {MY_LISTENER})
```

## Dependencies

- base (EiffelStudio)
- time (EiffelStudio)

## License

MIT License - Copyright (c) 2025, Larry Rix
