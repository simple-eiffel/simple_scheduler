# Drift Analysis: simple_scheduler

Generated: 2026-01-24
Method: `ec.exe -flatshort` vs `specs/*.md` + `research/*.md`

## Specification Sources

| Source | Files | Lines |
|--------|-------|-------|
| specs/*.md | 8 | 1291 |
| research/*.md | 1 | 353 |

## Classes Analyzed

| Class | Spec'd Features | Actual Features | Drift |
|-------|-----------------|-----------------|-------|
| SIMPLE_SCHEDULER | 61 | 49 | -12 |

## Feature-Level Drift

### Specified, Implemented ✓
- `add_listener` ✓
- `has_job` ✓
- `is_paused` ✓
- `is_running` ✓
- `job_count` ✓
- `job_triggers_attached` ✓
- `jobs_attached` ✓
- `listeners_attached` ✓
- `next_fire_time` ✓
- `pending_jobs` ✓
- ... and 9 more

### Specified, NOT Implemented ✗
- `action_attached` ✗
- `allow_concurrent` ✗
- `clear_history` ✗
- `day_of_month_field` ✗
- `day_of_week_field` ✗
- `duration_ms` ✗
- `error_count` ✗
- `error_count_non_negative` ✗
- `error_message` ✗
- `fire_time` ✗
- ... and 32 more

### Implemented, NOT Specified
- `Io`
- `Operating_environment`
- `author`
- `conforms_to`
- `copy`
- `copyright`
- `date`
- `default_rescue`
- `description`
- `generating_type`
- ... and 20 more

## Summary

| Category | Count |
|----------|-------|
| Spec'd, implemented | 19 |
| Spec'd, missing | 42 |
| Implemented, not spec'd | 30 |
| **Overall Drift** | **HIGH** |

## Conclusion

**simple_scheduler** has high drift. Significant gaps between spec and implementation.
