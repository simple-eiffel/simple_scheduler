# S03-CONTRACTS.md
## simple_scheduler - Contract Specifications

**Generation Type:** BACKWASH (reverse-engineered from implementation)
**Date:** 2026-01-23

---

## SIMPLE_SCHEDULER Contracts

### make
```eiffel
make
    ensure
        not_running: not is_running
```

### schedule
```eiffel
schedule (a_job: SIMPLE_JOB; a_trigger: SIMPLE_TRIGGER)
    require
        not_duplicate: not has_job (a_job.id)
    ensure
        job_added: has_job (a_job.id)
        count_increased: job_count = old job_count + 1
```

### schedule_cron
```eiffel
schedule_cron (a_job: SIMPLE_JOB; a_expression: READABLE_STRING_8)
    require
        expression_not_empty: not a_expression.is_empty
        not_duplicate: not has_job (a_job.id)
    ensure
        job_added: has_job (a_job.id)
```

### schedule_interval
```eiffel
schedule_interval (a_job: SIMPLE_JOB; a_seconds: INTEGER)
    require
        positive: a_seconds > 0
        not_duplicate: not has_job (a_job.id)
    ensure
        job_added: has_job (a_job.id)
```

### schedule_at
```eiffel
schedule_at (a_job: SIMPLE_JOB; a_time: SIMPLE_DATE_TIME)
    require
        future: a_time > create {SIMPLE_DATE_TIME}.make_now
        not_duplicate: not has_job (a_job.id)
    ensure
        job_added: has_job (a_job.id)
```

### unschedule
```eiffel
unschedule (a_job_id: READABLE_STRING_8)
    require
        has_job: has_job (a_job_id)
    ensure
        removed: not has_job (a_job_id)
```

### start
```eiffel
start
    require
        not_running: not is_running
    ensure
        running: is_running
        not_paused: not is_paused
```

### stop
```eiffel
stop
    require
        is_running: is_running
    ensure
        not_running: not is_running
```

### pause
```eiffel
pause
    require
        is_running: is_running
        not_paused: not is_paused
    ensure
        paused: is_paused
```

### resume
```eiffel
resume
    require
        is_running: is_running
        is_paused: is_paused
    ensure
        not_paused: not is_paused
```

### trigger_now
```eiffel
trigger_now (a_job_id: READABLE_STRING_8)
    require
        has_job: has_job (a_job_id)
```

### set_poll_interval
```eiffel
set_poll_interval (a_ms: INTEGER)
    require
        positive: a_ms > 0
    ensure
        set: poll_interval_ms = a_ms
```

### Class Invariant
```eiffel
invariant
    jobs_attached: attached jobs
    triggers_attached: attached triggers
    job_triggers_attached: attached job_triggers
    listeners_attached: attached listeners
    poll_interval_positive: poll_interval_ms > 0
    jobs_triggers_sync: jobs.count = triggers.count
```

---

## SIMPLE_JOB Contracts

### make
```eiffel
make (a_id: READABLE_STRING_8; a_action: PROCEDURE)
    require
        id_not_empty: not a_id.is_empty
    ensure
        id_set: id.same_string (a_id)
        name_set: name.same_string (a_id)
        action_set: action = a_action
        enabled: is_enabled
        not_concurrent: not allow_concurrent
        no_retries: retry_count = 0
        no_timeout: timeout_seconds = 0
        no_runs: run_count = 0
        no_errors: error_count = 0
        not_running: not is_running
        empty_history: model_history.is_empty
```

### make_with_name
```eiffel
make_with_name (a_id: READABLE_STRING_8; a_name: READABLE_STRING_8; a_action: PROCEDURE)
    require
        id_not_empty: not a_id.is_empty
        name_not_empty: not a_name.is_empty
    ensure
        id_set: id.same_string (a_id)
        name_set: name.same_string (a_name)
        action_set: action = a_action
        enabled: is_enabled
```

### execute
```eiffel
execute
    require
        is_enabled: is_enabled
        not_running_or_concurrent: not is_running or allow_concurrent
    ensure
        not_running: not is_running
        has_result: attached last_result
        run_count_incremented: run_count = old run_count + 1
        result_is_success: attached last_result as lr implies lr.is_success
        history_updated: model_history.count >= old model_history.count or model_history.count = Max_history_size
        last_in_history: model_history.count > 0 implies model_history.last = last_result
        last_run_set: attached last_run
```

### set_name
```eiffel
set_name (a_name: READABLE_STRING_8)
    require
        not_empty: not a_name.is_empty
    ensure
        name_set: name.same_string (a_name)
```

### set_retry_count
```eiffel
set_retry_count (a_count: INTEGER)
    require
        non_negative: a_count >= 0
    ensure
        set: retry_count = a_count
```

### set_timeout
```eiffel
set_timeout (a_seconds: INTEGER)
    require
        non_negative: a_seconds >= 0
    ensure
        set: timeout_seconds = a_seconds
```

### clear_history
```eiffel
clear_history
    ensure
        history_empty: model_history.is_empty
        run_count_reset: run_count = 0
        error_count_reset: error_count = 0
        no_last_result: last_result = Void
        no_last_run: last_run = Void
```

### get_last_n_results
```eiffel
get_last_n_results (n: INTEGER): MML_SEQUENCE [SIMPLE_JOB_RESULT]
    require
        positive: n > 0
    ensure
        bounded_by_request: Result.count <= n
        bounded_by_history: Result.count <= model_history.count
        returns_tail: Result.count > 0 implies Result.last = model_history.last
```

### model_history
```eiffel
model_history: MML_SEQUENCE [SIMPLE_JOB_RESULT]
    ensure
        count_matches: Result.count = results.count
        bounded: Result.count <= Max_history_size
```

### Class Invariant
```eiffel
invariant
    id_not_empty: not id.is_empty
    name_not_empty: not name.is_empty
    action_attached: attached action
    run_count_non_negative: run_count >= 0
    error_count_non_negative: error_count >= 0
    retry_count_non_negative: retry_count >= 0
    timeout_non_negative: timeout_seconds >= 0
    error_count_bounded: error_count <= run_count
    history_bounded: model_history.count <= Max_history_size
    last_result_consistency: attached last_result implies run_count > 0
    last_run_consistency: attached last_run implies run_count > 0
```

---

## SIMPLE_CRON_EXPRESSION Contracts

### make
```eiffel
make (a_expression: READABLE_STRING_8)
    require
        expression_not_empty: not a_expression.is_empty
    ensure
        expression_set: expression.same_string (a_expression)
```

### make_extended
```eiffel
make_extended (a_expression: READABLE_STRING_8)
    require
        expression_not_empty: not a_expression.is_empty
    ensure
        expression_set: expression.same_string (a_expression)
```

### next_fire_time
```eiffel
next_fire_time (a_after: SIMPLE_DATE_TIME): SIMPLE_DATE_TIME
    require
        is_valid: is_valid
```

### matches
```eiffel
matches (a_time: SIMPLE_DATE_TIME): BOOLEAN
    require
        is_valid: is_valid
```

### to_description
```eiffel
to_description: STRING
    require
        is_valid: is_valid
```

### Class Invariant
```eiffel
invariant
    expression_attached: attached expression
    fields_attached: attached minute_field and attached hour_field and
                     attached day_of_month_field and attached month_field and
                     attached day_of_week_field
```
