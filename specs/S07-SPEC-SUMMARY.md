# S07-SPEC-SUMMARY.md
## simple_scheduler - Specification Summary

**Generation Type:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23

---

## Executive Summary

**simple_scheduler** provides job scheduling for Eiffel:
- Cron expression parsing (5 and 6 field)
- Interval and one-time triggers
- Job execution with history tracking
- MML model queries for specifications
- Listener-based event notifications

## Quick Reference

### Schedule with Cron
```eiffel
local
    scheduler: SIMPLE_SCHEDULER
    job: SIMPLE_JOB
do
    create scheduler.make
    create job.make ("cleanup", agent do_cleanup)

    scheduler.schedule_cron (job, "*/5 * * * *")  -- Every 5 minutes
    scheduler.start

    from until not scheduler.is_running loop
        scheduler.tick
        sleep (1000)
    end
end
```

### Schedule with Interval
```eiffel
scheduler.schedule_interval (heartbeat_job, 30)  -- Every 30 seconds
```

### Schedule One-Time
```eiffel
scheduler.schedule_at (reminder_job, future_time)
```

### Cron Examples
```
* * * * *       Every minute
*/5 * * * *     Every 5 minutes
0 * * * *       Every hour
0 9 * * 1-5     9 AM Monday-Friday
0 0 1 * *       Midnight on 1st of month
```

### Job with Options
```eiffel
create job.make_with_name ("report", "Daily Report", agent generate_report)
job.set_retry_count (3)
job.set_timeout (60)
job.set_allow_concurrent (False)
```

### Job History (MML)
```eiffel
history := job.model_history
last_five := job.get_last_n_results (5)
```

## Class Summary

| Class | Purpose | Key Features |
|-------|---------|--------------|
| SIMPLE_SCHEDULER | Main facade | Schedule, control, query |
| SIMPLE_JOB | Job container | Action, state, history |
| SIMPLE_JOB_RESULT | Execution result | Duration, success/failure |
| SIMPLE_TRIGGER | Base trigger | Deferred interface |
| SIMPLE_CRON_TRIGGER | Cron trigger | Expression-based |
| SIMPLE_INTERVAL_TRIGGER | Interval trigger | Every N seconds |
| SIMPLE_DATE_TRIGGER | Date trigger | One-time |
| SIMPLE_CRON_EXPRESSION | Cron parser | Parse, validate, match |
| SIMPLE_SCHEDULER_LISTENER | Event listener | Callbacks |

## Contract Highlights

| Contract | Feature | Rule |
|----------|---------|------|
| Precondition | schedule | not_duplicate |
| Precondition | start | not_running |
| Precondition | schedule_at | future time |
| Postcondition | schedule | job_added |
| Postcondition | execute | run_count_incremented |
| Invariant | SIMPLE_JOB | history_bounded |
| Invariant | SIMPLE_SCHEDULER | jobs_triggers_sync |

## MML Model Features

The library uses MML for specification-level queries:
- `model_history`: MML_SEQUENCE of results
- `get_last_n_results(n)`: Tail of history
- Bounded history (Max_history_size = 100)

## Key Design Decisions

1. **Polling Model**: tick() called from main loop
2. **MML Integration**: Model queries for DBC
3. **History Bounded**: Max 100 results per job
4. **Listener Pattern**: Event notifications
5. **Cron Standard**: POSIX-compatible plus extensions

## Known Limitations

- No persistent job storage
- No distributed execution
- No fluent builder API
- Polling-based (not interrupt-driven)
- Timeout not fully implemented

## Related Documents

- S01-PROJECT-INVENTORY.md - Project structure
- S02-CLASS-CATALOG.md - Class details
- S03-CONTRACTS.md - Contract specifications
- S04-FEATURE-SPECS.md - Feature catalog
- S05-CONSTRAINTS.md - Design constraints
- S06-BOUNDARIES.md - Scope and limits
- S08-VALIDATION-REPORT.md - Test coverage
- research/SIMPLE_SCHEDULER_RESEARCH.md - Full research
- MML_INTEGRATION.md - MML integration notes
