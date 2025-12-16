<p align="center">
  <img src="https://raw.githubusercontent.com/simple-eiffel/claude_eiffel_op_docs/main/artwork/LOGO.png" alt="simple_ library logo" width="400">
</p>

# simple_scheduler

**[Documentation](https://simple-eiffel.github.io/simple_scheduler/)** | **[GitHub](https://github.com/simple-eiffel/simple_scheduler)**

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Eiffel](https://img.shields.io/badge/Eiffel-25.02-blue.svg)](https://www.eiffel.org/)
[![Design by Contract](https://img.shields.io/badge/DbC-enforced-orange.svg)]()
[![SCOOP](https://img.shields.io/badge/SCOOP-compatible-orange.svg)]()

Job scheduling for Eiffel: cron expressions, delayed tasks, recurring jobs, persistent schedules.

Part of the [Simple Eiffel](https://github.com/simple-eiffel) ecosystem.

## Status

**Beta**

## Overview

simple_scheduler provides comprehensive job scheduling for Eiffel applications including standard cron expressions (5 and 6 field), interval-based triggers, one-time scheduling, and event listeners. Built with Design by Contract and SCOOP compatibility.

```eiffel
-- Schedule a job with cron expression
local
    scheduler: SIMPLE_SCHEDULER
    job: SIMPLE_JOB
do
    create scheduler.make
    create job.make ("cleanup", agent do_cleanup)
    scheduler.schedule_cron (job, "*/5 * * * *")  -- Every 5 minutes
    scheduler.start
end
```

## Features

- **Cron Expressions** - Standard 5-field and extended 6-field (with seconds) cron syntax
- **Interval Triggers** - Fixed-interval scheduling (seconds, minutes, hours)
- **Date Triggers** - One-time scheduling at specific date/time
- **Job Management** - Enable/disable, retry on failure, execution history
- **Event Listeners** - Subscribe to scheduler and job lifecycle events
- **Human-Readable** - Convert cron expressions to readable text

## Installation

1. Set the ecosystem environment variable (one-time setup for all simple_* libraries):
```bash
export SIMPLE_EIFFEL=/path/to/prod
```

2. Add to ECF:
```xml
<library name="simple_scheduler" location="$SIMPLE_EIFFEL/simple_scheduler/simple_scheduler.ecf"/>
```

## Cron Expression Format

```
┌───────────── minute (0-59)
│ ┌───────────── hour (0-23)
│ │ ┌───────────── day of month (1-31)
│ │ │ ┌───────────── month (1-12)
│ │ │ │ ┌───────────── day of week (0-6, Sun=0)
│ │ │ │ │
* * * * *
```

| Expression | Description |
|------------|-------------|
| `* * * * *` | Every minute |
| `*/5 * * * *` | Every 5 minutes |
| `0 * * * *` | Every hour |
| `0 9 * * *` | Every day at 9 AM |
| `0 9 * * 1-5` | 9 AM Monday-Friday |

## Dependencies

- simple_datetime - Date/time operations

## License

MIT License
