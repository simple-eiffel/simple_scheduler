# Changelog

All notable changes to simple_scheduler will be documented in this file.

## [0.1.0] - 2025-12-13

### Added
- Initial release
- SIMPLE_CRON_EXPRESSION: Parse and evaluate cron expressions
  - Standard 5-field format (minute hour day-of-month month day-of-week)
  - Extended 6-field format (with seconds)
  - Pattern support: *, ranges, lists, steps
  - `next_fire_time` calculation
  - `matches` for checking if time matches pattern
  - `to_description` for human-readable output
- SIMPLE_TRIGGER: Base class for trigger types
- SIMPLE_CRON_TRIGGER: Cron expression based trigger
- SIMPLE_INTERVAL_TRIGGER: Fixed interval trigger
  - Seconds, minutes, hours constructors
  - Optional start/end times
  - Maximum fires limit
- SIMPLE_DATE_TRIGGER: One-time date/time trigger
- SIMPLE_JOB: Job representation
  - Action (procedure) execution
  - Enable/disable
  - Retry on failure
  - Execution history tracking
- SIMPLE_JOB_RESULT: Execution result with success/failure status
- SIMPLE_SCHEDULER: Main facade
  - Schedule with cron/interval/date triggers
  - Start/stop/pause/resume control
  - Manual trigger execution
  - Event listener support
- SIMPLE_SCHEDULER_LISTENER: Event interface for lifecycle callbacks
