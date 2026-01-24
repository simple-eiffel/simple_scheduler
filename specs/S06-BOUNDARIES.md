# S06-BOUNDARIES.md
## simple_scheduler - System Boundaries

**Generation Type:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23

---

## 1. Scope Boundaries

### IN SCOPE

| Capability | Description |
|------------|-------------|
| Cron expressions | Standard 5-field, extended 6-field |
| Interval triggers | Every N seconds |
| Date triggers | One-time at specific time |
| Job management | Add, remove, enable, disable |
| Execution history | Bounded history with MML model |
| Listeners | Event notifications |
| Human-readable cron | to_description conversion |

### OUT OF SCOPE

| Capability | Reason |
|------------|--------|
| Persistent storage | Use external database |
| Distributed execution | Single-process only |
| Fluent builder API | Research mentions, not implemented |
| Job stores | Memory only |
| Clustering | Not implemented |
| Web UI | Not implemented |

## 2. Integration Boundaries

### INTERNAL DEPENDENCIES

```
simple_scheduler
    |
    +-- simple_datetime (SIMPLE_DATE_TIME)
    |
    +-- simple_mml (MML_SEQUENCE for model queries)
    |
    +-- base (Core Eiffel)
```

### EXTERNAL INTERFACES

| Interface | Protocol | Notes |
|-----------|----------|-------|
| Agent system | PROCEDURE | Job actions |
| Date/Time | SIMPLE_DATE_TIME | Time handling |

## 3. Error Boundaries

### Validation Errors

| Error | Handling |
|-------|----------|
| Invalid cron expression | is_valid = False, validation_error set |
| Duplicate job ID | Precondition violation |
| Non-future date trigger | Precondition violation |
| Zero/negative interval | Precondition violation |

### Runtime Errors

| Error | Handling |
|-------|----------|
| Job exception | Caught, stored in result |
| Timeout | Not yet implemented |
| Concurrent violation | Job skipped |

## 4. Data Boundaries

### History Size

| Attribute | Limit |
|-----------|-------|
| Max_history_size | 100 |
| results list | Bounded at 100 |
| model_history | Bounded at 100 |

### Job Limits

| Attribute | Limit |
|-----------|-------|
| Job count | ARRAYED_LIST capacity |
| Listener count | ARRAYED_LIST capacity |

## 5. Behavioral Boundaries

### Tick-Based Execution

The scheduler uses polling model:
1. Call `tick()` from main loop
2. Check current time against triggers
3. Execute matching jobs
4. Update trigger state

```eiffel
from until not scheduler.is_running loop
    scheduler.tick
    sleep (scheduler.poll_interval_ms)
end
```

### Job Lifecycle

```
Created --> Scheduled --> [Running] --> Completed
                 |                         |
                 +<---- (next trigger) <---+
                 |
                 +--> Unscheduled
```

## 6. Extension Points

### Custom Triggers

Implement SIMPLE_TRIGGER:
```eiffel
class MY_TRIGGER inherit SIMPLE_TRIGGER
feature
    id: STRING
    is_enabled: BOOLEAN
    is_expired: BOOLEAN
    next_fire_time (after: SIMPLE_DATE_TIME): detachable SIMPLE_DATE_TIME
    matches (time: SIMPLE_DATE_TIME): BOOLEAN
end
```

### Custom Listeners

Implement SIMPLE_SCHEDULER_LISTENER:
```eiffel
class MY_LISTENER inherit SIMPLE_SCHEDULER_LISTENER
feature
    on_job_completed (job: SIMPLE_JOB; result: SIMPLE_JOB_RESULT)
        do
            log ("Job " + job.name + " completed")
        end
    -- Other callbacks...
end
```

## 7. Version Boundaries

| Component | Version | Notes |
|-----------|---------|-------|
| EiffelStudio | 25.02+ | Required |
| Void Safety | All | Full void safety |
| SCOOP | Thread mode | Concurrency |
| MML | simple_mml | Model library |

## 8. Future Extensions (from Research)

| Extension | Status |
|-----------|--------|
| Fluent API | NOT IMPLEMENTED |
| Job stores | NOT IMPLEMENTED |
| SQL persistence | NOT IMPLEMENTED |
| Telemetry | NOT IMPLEMENTED |
| SCOOP processors | NOT IMPLEMENTED |
