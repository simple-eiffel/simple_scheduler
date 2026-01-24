# S01-PROJECT-INVENTORY.md
## simple_scheduler - Job Scheduling Library

**Generation Type:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23
**Source:** Implementation analysis + research/SIMPLE_SCHEDULER_RESEARCH.md

---

### 1. PROJECT IDENTITY

| Field | Value |
|-------|-------|
| Name | simple_scheduler |
| UUID | A1B2C3D4-E5F6-7890-1234-567890ABCDEF |
| Description | Job scheduling for Eiffel: cron expressions, delayed tasks, recurring jobs |
| Version | 1.0.0 |
| License | MIT License |
| Author | Larry Rix |

### 2. PURPOSE

Provides job scheduling functionality for Eiffel applications:
- Cron expression parsing and evaluation
- Fixed interval triggers
- One-time date triggers
- Job execution with lifecycle events
- Listener-based notifications

### 3. DEPENDENCIES

| Library | Location | Purpose |
|---------|----------|---------|
| base | $ISE_LIBRARY/library/base/base.ecf | Core Eiffel types |
| simple_datetime | $SIMPLE_EIFFEL/simple_datetime/simple_datetime.ecf | Date/time handling |
| simple_mml | $SIMPLE_EIFFEL/simple_mml/simple_mml.ecf | Mathematical model library |

### 4. FILE INVENTORY

| File | Class | Role |
|------|-------|------|
| src/simple_scheduler.e | SIMPLE_SCHEDULER | Main facade |
| src/simple_job.e | SIMPLE_JOB | Job container |
| src/simple_job_result.e | SIMPLE_JOB_RESULT | Execution result |
| src/simple_trigger.e | SIMPLE_TRIGGER | Base trigger (deferred) |
| src/simple_cron_trigger.e | SIMPLE_CRON_TRIGGER | Cron-based trigger |
| src/simple_interval_trigger.e | SIMPLE_INTERVAL_TRIGGER | Fixed interval |
| src/simple_date_trigger.e | SIMPLE_DATE_TRIGGER | One-time trigger |
| src/simple_cron_expression.e | SIMPLE_CRON_EXPRESSION | Cron parser |
| src/simple_scheduler_listener.e | SIMPLE_SCHEDULER_LISTENER | Event listener |

### 5. BUILD TARGETS

| Target | Root Class | Purpose |
|--------|------------|---------|
| simple_scheduler | (library) | Main library target |
| simple_scheduler_tests | TEST_APP | Test suite |

### 6. CAPABILITIES

- Concurrency: SCOOP support (uses thread)
- Void Safety: Full (all)
- Assertions: Full (precondition, postcondition, check, invariant, loop, supplier_precondition)

### 7. RELATED RESEARCH

- research/SIMPLE_SCHEDULER_RESEARCH.md - 7-step research covering POSIX crontab, Quartz, APScheduler
- MML_INTEGRATION.md - MML integration notes
