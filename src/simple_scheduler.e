note
	description: "[
		Job scheduler facade.

		Main entry point for scheduling jobs. Supports:
		- Cron expressions
		- Fixed intervals
		- One-time date triggers
		- Fluent API for schedule creation

		Examples:
		  scheduler.schedule_cron (job, '*/5 * * * *')  -- Every 5 minutes
		  scheduler.schedule_interval (job, 30)        -- Every 30 seconds
		  scheduler.schedule_at (job, future_time)     -- One-time
	]"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	SIMPLE_SCHEDULER

create
	make

feature {NONE} -- Initialization

	make
			-- Create new scheduler.
		do
			create jobs.make (10)
			create triggers.make (10)
			create job_triggers.make (10)
			create listeners.make (5)
			poll_interval_ms := 1000  -- Default 1 second
		ensure
			not_running: not is_running
		end

feature -- Access

	job_count: INTEGER
			-- Number of scheduled jobs.
		do
			Result := jobs.count
		end

	pending_jobs: ARRAYED_LIST [SIMPLE_JOB]
			-- List of all scheduled jobs.
		local
			i: INTEGER
		do
			create Result.make (jobs.count)
			from
				i := 1
			until
				i > jobs.count
			loop
				Result.extend (jobs.i_th (i))
				i := i + 1
			end
		end

	next_fire_time: detachable DATE_TIME
			-- Next time any job will fire.
		local
			l_now: DATE_TIME
			l_next: detachable DATE_TIME
			l_trigger_next: detachable DATE_TIME
			i: INTEGER
		do
			create l_now.make_now
			from
				i := 1
			until
				i > triggers.count
			loop
				if triggers.i_th (i).is_enabled then
					l_trigger_next := triggers.i_th (i).next_fire_time (l_now)
					if attached l_trigger_next as tn then
						if not attached l_next or else tn < l_next then
							l_next := tn
						end
					end
				end
				i := i + 1
			end
			Result := l_next
		end

	poll_interval_ms: INTEGER
			-- Polling interval in milliseconds.

feature -- Status

	is_running: BOOLEAN
			-- Is scheduler running?

	is_paused: BOOLEAN
			-- Is scheduler paused?

feature -- Scheduling

	schedule (a_job: SIMPLE_JOB; a_trigger: SIMPLE_TRIGGER)
			-- Schedule job with given trigger.
		require
			job_not_void: a_job /= Void
			trigger_not_void: a_trigger /= Void
			not_duplicate: not has_job (a_job.id)
		do
			jobs.extend (a_job)
			triggers.extend (a_trigger)
			job_triggers.put (a_trigger, a_job.id)
			notify_job_scheduled (a_job, a_trigger)
		ensure
			job_added: has_job (a_job.id)
			count_increased: job_count = old job_count + 1
		end

	schedule_cron (a_job: SIMPLE_JOB; a_expression: READABLE_STRING_8)
			-- Schedule job with cron expression.
		require
			job_not_void: a_job /= Void
			expression_not_empty: not a_expression.is_empty
			not_duplicate: not has_job (a_job.id)
		local
			l_trigger: SIMPLE_CRON_TRIGGER
		do
			create l_trigger.make_with_id (a_job.id + "_trigger", a_expression)
			schedule (a_job, l_trigger)
		ensure
			job_added: has_job (a_job.id)
		end

	schedule_interval (a_job: SIMPLE_JOB; a_seconds: INTEGER)
			-- Schedule job to run every `a_seconds` seconds.
		require
			job_not_void: a_job /= Void
			positive: a_seconds > 0
			not_duplicate: not has_job (a_job.id)
		local
			l_trigger: SIMPLE_INTERVAL_TRIGGER
		do
			create l_trigger.make_with_id (a_job.id + "_trigger", a_seconds)
			schedule (a_job, l_trigger)
		ensure
			job_added: has_job (a_job.id)
		end

	schedule_at (a_job: SIMPLE_JOB; a_time: DATE_TIME)
			-- Schedule job to run once at specific time.
		require
			job_not_void: a_job /= Void
			future: a_time > create {DATE_TIME}.make_now
			not_duplicate: not has_job (a_job.id)
		local
			l_trigger: SIMPLE_DATE_TRIGGER
		do
			create l_trigger.make_with_id (a_job.id + "_trigger", a_time)
			schedule (a_job, l_trigger)
		ensure
			job_added: has_job (a_job.id)
		end

	unschedule (a_job_id: READABLE_STRING_8)
			-- Remove job from scheduler.
		require
			has_job: has_job (a_job_id)
		local
			l_job: detachable SIMPLE_JOB
			l_trigger: detachable SIMPLE_TRIGGER
			i: INTEGER
		do
			-- Find and remove job
			from
				i := 1
			until
				i > jobs.count or attached l_job
			loop
				if jobs.i_th (i).id.same_string (a_job_id) then
					l_job := jobs.i_th (i)
					jobs.go_i_th (i)
					jobs.remove
				else
					i := i + 1
				end
			end

			-- Find and remove trigger
			l_trigger := job_triggers.item (a_job_id.to_string_8)
			if attached l_trigger then
				from
					i := 1
				until
					i > triggers.count
				loop
					if triggers.i_th (i) = l_trigger then
						triggers.go_i_th (i)
						triggers.remove
					else
						i := i + 1
					end
				end
				job_triggers.remove (a_job_id.to_string_8)
			end

			if attached l_job as j then
				notify_job_unscheduled (j)
			end
		ensure
			removed: not has_job (a_job_id)
		end

feature -- Query

	has_job (a_job_id: READABLE_STRING_8): BOOLEAN
			-- Is job with given ID scheduled?
		local
			i: INTEGER
		do
			from
				i := 1
			until
				i > jobs.count or Result
			loop
				if jobs.i_th (i).id.same_string (a_job_id) then
					Result := True
				end
				i := i + 1
			end
		end

	job (a_job_id: READABLE_STRING_8): detachable SIMPLE_JOB
			-- Get job by ID.
		local
			i: INTEGER
		do
			from
				i := 1
			until
				i > jobs.count or attached Result
			loop
				if jobs.i_th (i).id.same_string (a_job_id) then
					Result := jobs.i_th (i)
				end
				i := i + 1
			end
		end

	trigger_for_job (a_job_id: READABLE_STRING_8): detachable SIMPLE_TRIGGER
			-- Get trigger for job.
		do
			Result := job_triggers.item (a_job_id.to_string_8)
		end

feature -- Control

	start
			-- Start the scheduler.
		require
			not_running: not is_running
		do
			is_running := True
			is_paused := False
			notify_scheduler_started
		ensure
			running: is_running
			not_paused: not is_paused
		end

	stop
			-- Stop the scheduler.
		require
			is_running: is_running
		do
			is_running := False
			is_paused := False
			notify_scheduler_stopped
		ensure
			not_running: not is_running
		end

	pause
			-- Pause the scheduler (jobs won't fire but state is preserved).
		require
			is_running: is_running
			not_paused: not is_paused
		do
			is_paused := True
			notify_scheduler_paused
		ensure
			paused: is_paused
		end

	resume
			-- Resume paused scheduler.
		require
			is_running: is_running
			is_paused: is_paused
		do
			is_paused := False
			notify_scheduler_resumed
		ensure
			not_paused: not is_paused
		end

	trigger_now (a_job_id: READABLE_STRING_8)
			-- Immediately execute job (outside of schedule).
		require
			has_job: has_job (a_job_id)
		local
			l_job: detachable SIMPLE_JOB
		do
			l_job := job (a_job_id)
			if attached l_job as j then
				execute_job (j)
			end
		end

	tick
			-- Process one scheduler tick.
			-- Call this from your main loop or timer.
		local
			l_now: DATE_TIME
		do
			if is_running and not is_paused then
				create l_now.make_now
				check_and_execute_jobs (l_now)
			end
		end

feature -- Options

	set_poll_interval (a_ms: INTEGER)
			-- Set polling interval.
		require
			positive: a_ms > 0
		do
			poll_interval_ms := a_ms
		ensure
			set: poll_interval_ms = a_ms
		end

feature -- Listeners

	add_listener (a_listener: SIMPLE_SCHEDULER_LISTENER)
			-- Add event listener.
		require
			listener_not_void: a_listener /= Void
		do
			listeners.extend (a_listener)
		end

	remove_listener (a_listener: SIMPLE_SCHEDULER_LISTENER)
			-- Remove event listener.
		do
			listeners.prune_all (a_listener)
		end

feature {NONE} -- Implementation

	jobs: ARRAYED_LIST [SIMPLE_JOB]
			-- Scheduled jobs.

	triggers: ARRAYED_LIST [SIMPLE_TRIGGER]
			-- Triggers for jobs.

	job_triggers: HASH_TABLE [SIMPLE_TRIGGER, STRING]
			-- Map of job ID to trigger.

	listeners: ARRAYED_LIST [SIMPLE_SCHEDULER_LISTENER]
			-- Event listeners.

	last_check: detachable DATE_TIME
			-- Last time we checked for jobs to run.

	check_and_execute_jobs (a_now: DATE_TIME)
			-- Check which jobs should run and execute them.
		local
			l_trigger: detachable SIMPLE_TRIGGER
			l_job: SIMPLE_JOB
			i: INTEGER
		do
			from
				i := 1
			until
				i > jobs.count
			loop
				l_job := jobs.i_th (i)
				if l_job.is_enabled then
					l_trigger := job_triggers.item (l_job.id)
					if attached l_trigger as t then
						if t.is_enabled and then not t.is_expired then
							if t.matches (a_now) then
								if should_execute (l_job, t, a_now) then
									execute_job (l_job)
									update_trigger_state (t)
								end
							end
						end
					end
				end
				i := i + 1
			end
			last_check := a_now
		end

	should_execute (a_job: SIMPLE_JOB; a_trigger: SIMPLE_TRIGGER; a_now: DATE_TIME): BOOLEAN
			-- Should job be executed now?
		do
			-- Check if we're past the next fire time
			if attached a_trigger.next_fire_time (a_now) as nft then
				Result := a_now >= nft
			else
				-- For interval triggers that always match
				if attached {SIMPLE_INTERVAL_TRIGGER} a_trigger as it then
					Result := True
				end
			end

			-- Check concurrent execution
			if Result and then a_job.is_running and then not a_job.allow_concurrent then
				Result := False
			end
		end

	update_trigger_state (a_trigger: SIMPLE_TRIGGER)
			-- Update trigger after job execution.
		do
			if attached {SIMPLE_INTERVAL_TRIGGER} a_trigger as it then
				it.record_fire
			elseif attached {SIMPLE_DATE_TRIGGER} a_trigger as dt then
				dt.record_fire
			end
		end

	execute_job (a_job: SIMPLE_JOB)
			-- Execute a job.
		require
			job_enabled: a_job.is_enabled
		do
			notify_job_starting (a_job)
			a_job.execute
			if attached a_job.last_result as lr then
				notify_job_completed (a_job, lr)
			end
		end

	notify_scheduler_started
			-- Notify listeners scheduler started.
		local
			i: INTEGER
		do
			from i := 1 until i > listeners.count loop
				listeners.i_th (i).on_scheduler_started (Current)
				i := i + 1
			end
		end

	notify_scheduler_stopped
			-- Notify listeners scheduler stopped.
		local
			i: INTEGER
		do
			from i := 1 until i > listeners.count loop
				listeners.i_th (i).on_scheduler_stopped (Current)
				i := i + 1
			end
		end

	notify_scheduler_paused
			-- Notify listeners scheduler paused.
		local
			i: INTEGER
		do
			from i := 1 until i > listeners.count loop
				listeners.i_th (i).on_scheduler_paused (Current)
				i := i + 1
			end
		end

	notify_scheduler_resumed
			-- Notify listeners scheduler resumed.
		local
			i: INTEGER
		do
			from i := 1 until i > listeners.count loop
				listeners.i_th (i).on_scheduler_resumed (Current)
				i := i + 1
			end
		end

	notify_job_scheduled (a_job: SIMPLE_JOB; a_trigger: SIMPLE_TRIGGER)
			-- Notify listeners job was scheduled.
		local
			i: INTEGER
		do
			from i := 1 until i > listeners.count loop
				listeners.i_th (i).on_job_scheduled (a_job, a_trigger)
				i := i + 1
			end
		end

	notify_job_unscheduled (a_job: SIMPLE_JOB)
			-- Notify listeners job was unscheduled.
		local
			i: INTEGER
		do
			from i := 1 until i > listeners.count loop
				listeners.i_th (i).on_job_unscheduled (a_job)
				i := i + 1
			end
		end

	notify_job_starting (a_job: SIMPLE_JOB)
			-- Notify listeners job is starting.
		local
			i: INTEGER
		do
			from i := 1 until i > listeners.count loop
				listeners.i_th (i).on_job_starting (a_job)
				i := i + 1
			end
		end

	notify_job_completed (a_job: SIMPLE_JOB; a_result: SIMPLE_JOB_RESULT)
			-- Notify listeners job completed.
		local
			i: INTEGER
		do
			from i := 1 until i > listeners.count loop
				listeners.i_th (i).on_job_completed (a_job, a_result)
				i := i + 1
			end
		end

invariant
	jobs_attached: jobs /= Void
	triggers_attached: triggers /= Void
	job_triggers_attached: job_triggers /= Void
	listeners_attached: listeners /= Void
	poll_interval_positive: poll_interval_ms > 0

note
	copyright: "Copyright (c) 2025, Larry Rix"
	license: "MIT License"

end
