# S05-CONSTRAINTS.md
## simple_scheduler - Design Constraints

**Generation Type:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23

---

## 1. Cron Expression Constraints

### Standard Format (5 fields)
```
minute hour day-of-month month day-of-week
  *      *        *         *       *
```

### Extended Format (6 fields)
```
second minute hour day-of-month month day-of-week
  *       *     *        *         *       *
```

### Field Values

| Field | Range | Notes |
|-------|-------|-------|
| second | 0-59 | Extended only |
| minute | 0-59 | |
| hour | 0-23 | |
| day-of-month | 1-31 | |
| month | 1-12 | |
| day-of-week | 0-6 | 0=Sunday, 7=Sunday |

### Patterns

| Pattern | Meaning | Example |
|---------|---------|---------|
| `*` | All values | Every minute |
| `n` | Specific value | `5` = 5th |
| `n-m` | Range | `1-5` = 1 through 5 |
| `n,m,o` | List | `1,5,10` |
| `*/n` | Step | `*/5` = every 5 |

## 2. Job Constraints

| Constraint | Rule |
|------------|------|
| ID | Non-empty, unique within scheduler |
| Name | Non-empty |
| Action | Must be PROCEDURE |
| run_count | >= 0 |
| error_count | >= 0, <= run_count |
| retry_count | >= 0 |
| timeout_seconds | >= 0 (0 = no timeout) |

## 3. History Constraints

| Constraint | Rule |
|------------|------|
| Max Size | 100 (Max_history_size) |
| Bounded | Oldest removed when full |
| Model | MML_SEQUENCE for specifications |

## 4. Scheduler State Constraints

| State | Transitions |
|-------|-------------|
| Stopped | -> Running (start) |
| Running | -> Stopped (stop), Paused (pause) |
| Paused | -> Running (resume) |

```
     +----------+
     | Stopped  |
     +----+-----+
          | start
          v
     +----+-----+    pause    +----------+
     | Running  +------------>| Paused   |
     +----+-----+<------------+----------+
          | stop       resume
          v
     +----+-----+
     | Stopped  |
     +----------+
```

## 5. Trigger Constraints

| Trigger Type | Constraint |
|--------------|------------|
| Cron | Valid cron expression required |
| Interval | seconds > 0 |
| Date | Time must be in future |

## 6. Concurrent Execution Constraints

| Setting | Behavior |
|---------|----------|
| allow_concurrent = False | Skip if already running |
| allow_concurrent = True | Allow overlapping executions |

## 7. Timing Constraints

| Constraint | Default | Notes |
|------------|---------|-------|
| poll_interval_ms | 1000 | 1 second |
| Max search iterations | 525600 | 1 year of minutes |
| timeout_seconds | 0 | 0 = no timeout |

## 8. Listener Events

| Event | When |
|-------|------|
| on_scheduler_started | start() called |
| on_scheduler_stopped | stop() called |
| on_scheduler_paused | pause() called |
| on_scheduler_resumed | resume() called |
| on_job_scheduled | schedule() called |
| on_job_unscheduled | unschedule() called |
| on_job_starting | Before execute |
| on_job_completed | After execute |

## 9. MML Model Constraints

| Model Query | Constraint |
|-------------|------------|
| model_history | count = results.count |
| model_history | count <= Max_history_size |
| get_last_n_results | Result.count <= n |
| get_last_n_results | Result.count <= model_history.count |

## 10. SCOOP Constraints

| Constraint | Rule |
|------------|------|
| Concurrency | Thread mode |
| Job execution | Not separate processor (yet) |
| Tick | Called from main loop |
