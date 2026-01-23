note
	description: "[
		Listener interface for scheduler events.

		Implement this to receive notifications about scheduler
		and job lifecycle events.
	]"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	SIMPLE_SCHEDULER_LISTENER

feature -- Scheduler events

	on_scheduler_started (a_scheduler: SIMPLE_SCHEDULER)
			-- Called when scheduler starts.
		require
			scheduler_running: a_scheduler.is_running
		deferred
		end

	on_scheduler_stopped (a_scheduler: SIMPLE_SCHEDULER)
			-- Called when scheduler stops.
		require
			scheduler_stopped: not a_scheduler.is_running
		deferred
		end

	on_scheduler_paused (a_scheduler: SIMPLE_SCHEDULER)
			-- Called when scheduler pauses.
		require
			scheduler_paused: a_scheduler.is_paused
		deferred
		end

	on_scheduler_resumed (a_scheduler: SIMPLE_SCHEDULER)
			-- Called when scheduler resumes.
		require
			scheduler_running: a_scheduler.is_running
			scheduler_not_paused: not a_scheduler.is_paused
		deferred
		end

feature -- Job events

	on_job_scheduled (a_job: SIMPLE_JOB; a_trigger: SIMPLE_TRIGGER)
			-- Called when job is scheduled.
		deferred
		end

	on_job_unscheduled (a_job: SIMPLE_JOB)
			-- Called when job is unscheduled.
		deferred
		end

	on_job_starting (a_job: SIMPLE_JOB)
			-- Called before job executes.
		require
			job_enabled: a_job.is_enabled
		deferred
		end

	on_job_completed (a_job: SIMPLE_JOB; a_result: SIMPLE_JOB_RESULT)
			-- Called after job completes.
		require
			job_has_result: attached a_job.last_result
		deferred
		end

note
	copyright: "Copyright (c) 2025, Larry Rix"
	license: "MIT License"

end
