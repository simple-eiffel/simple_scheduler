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
			scheduler_not_void: a_scheduler /= Void
		deferred
		end

	on_scheduler_stopped (a_scheduler: SIMPLE_SCHEDULER)
			-- Called when scheduler stops.
		require
			scheduler_not_void: a_scheduler /= Void
		deferred
		end

	on_scheduler_paused (a_scheduler: SIMPLE_SCHEDULER)
			-- Called when scheduler pauses.
		require
			scheduler_not_void: a_scheduler /= Void
		deferred
		end

	on_scheduler_resumed (a_scheduler: SIMPLE_SCHEDULER)
			-- Called when scheduler resumes.
		require
			scheduler_not_void: a_scheduler /= Void
		deferred
		end

feature -- Job events

	on_job_scheduled (a_job: SIMPLE_JOB; a_trigger: SIMPLE_TRIGGER)
			-- Called when job is scheduled.
		require
			job_not_void: a_job /= Void
			trigger_not_void: a_trigger /= Void
		deferred
		end

	on_job_unscheduled (a_job: SIMPLE_JOB)
			-- Called when job is unscheduled.
		require
			job_not_void: a_job /= Void
		deferred
		end

	on_job_starting (a_job: SIMPLE_JOB)
			-- Called before job executes.
		require
			job_not_void: a_job /= Void
		deferred
		end

	on_job_completed (a_job: SIMPLE_JOB; a_result: SIMPLE_JOB_RESULT)
			-- Called after job completes.
		require
			job_not_void: a_job /= Void
			result_not_void: a_result /= Void
		deferred
		end

note
	copyright: "Copyright (c) 2025, Larry Rix"
	license: "MIT License"

end
