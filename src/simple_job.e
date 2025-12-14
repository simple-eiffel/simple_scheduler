note
	description: "[
		A scheduled job to be executed by the scheduler.

		Jobs wrap an action (procedure) with metadata and execution options.
		They track their execution history and can be configured for
		concurrency, retries, and timeouts.
	]"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	SIMPLE_JOB

create
	make,
	make_with_name

feature {NONE} -- Initialization

	make (a_id: READABLE_STRING_8; a_action: PROCEDURE)
			-- Create job with ID and action.
		require
			id_not_empty: not a_id.is_empty
			action_not_void: a_action /= Void
		do
			create id.make_from_string (a_id)
			create name.make_from_string (a_id)
			action := a_action
			is_enabled := True
			allow_concurrent := False
			retry_count := 0
			timeout_seconds := 0
			create results.make (10)
		ensure
			id_set: id.same_string (a_id)
			name_set: name.same_string (a_id)
			action_set: action = a_action
			enabled: is_enabled
		end

	make_with_name (a_id: READABLE_STRING_8; a_name: READABLE_STRING_8; a_action: PROCEDURE)
			-- Create job with ID, name, and action.
		require
			id_not_empty: not a_id.is_empty
			name_not_empty: not a_name.is_empty
			action_not_void: a_action /= Void
		do
			create id.make_from_string (a_id)
			create name.make_from_string (a_name)
			action := a_action
			is_enabled := True
			allow_concurrent := False
			retry_count := 0
			timeout_seconds := 0
			create results.make (10)
		ensure
			id_set: id.same_string (a_id)
			name_set: name.same_string (a_name)
			action_set: action = a_action
			enabled: is_enabled
		end

feature -- Access

	id: STRING
			-- Unique job identifier.

	name: STRING
			-- Human-readable job name.

	action: PROCEDURE
			-- The procedure to execute.

	context: detachable ANY
			-- Optional context data for the job.

feature -- State

	is_enabled: BOOLEAN
			-- Is job active?

	is_running: BOOLEAN
			-- Is job currently executing?

	last_run: detachable DATE_TIME
			-- When job last ran.

	last_result: detachable SIMPLE_JOB_RESULT
			-- Result of last execution.

	run_count: INTEGER
			-- Number of successful runs.

	error_count: INTEGER
			-- Number of failed runs.

	results: ARRAYED_LIST [SIMPLE_JOB_RESULT]
			-- History of results (limited).

feature -- Options

	allow_concurrent: BOOLEAN
			-- Allow multiple concurrent executions? (default False)

	retry_count: INTEGER
			-- Number of retries on failure (default 0).

	timeout_seconds: INTEGER
			-- Maximum execution time in seconds (0 = no limit).

feature -- Element change

	set_name (a_name: READABLE_STRING_8)
			-- Set job name.
		require
			not_empty: not a_name.is_empty
		do
			name := a_name.to_string_8
		ensure
			name_set: name.same_string (a_name)
		end

	set_context (a_context: ANY)
			-- Set job context.
		do
			context := a_context
		ensure
			context_set: context = a_context
		end

	set_allow_concurrent (a_value: BOOLEAN)
			-- Set whether concurrent executions are allowed.
		do
			allow_concurrent := a_value
		ensure
			set: allow_concurrent = a_value
		end

	set_retry_count (a_count: INTEGER)
			-- Set number of retries on failure.
		require
			non_negative: a_count >= 0
		do
			retry_count := a_count
		ensure
			set: retry_count = a_count
		end

	set_timeout (a_seconds: INTEGER)
			-- Set maximum execution time.
		require
			non_negative: a_seconds >= 0
		do
			timeout_seconds := a_seconds
		ensure
			set: timeout_seconds = a_seconds
		end

	enable
			-- Enable this job.
		do
			is_enabled := True
		ensure
			enabled: is_enabled
		end

	disable
			-- Disable this job.
		do
			is_enabled := False
		ensure
			disabled: not is_enabled
		end

feature -- Execution

	execute
			-- Execute the job action.
		require
			is_enabled: is_enabled
			not_running_or_concurrent: not is_running or allow_concurrent
		local
			l_end: DATE_TIME
			l_duration: INTEGER_64
			l_result: SIMPLE_JOB_RESULT
			l_retried: BOOLEAN
		do
			is_running := True
			create execution_start_time.make_now

			if not l_retried then
				action.call (Void)
				create l_end.make_now
				if attached execution_start_time as l_start then
					l_duration := time_difference_ms (l_start, l_end)
				end
				create l_result.make_success (l_duration)
				run_count := run_count + 1
			end

			if attached l_result as lr then
				last_result := lr
				add_result (lr)
			end
			create last_run.make_now
			is_running := False
		rescue
			l_retried := True
			create l_end.make_now
			if attached execution_start_time as l_start then
				l_duration := time_difference_ms (l_start, l_end)
			end
			create l_result.make_failure ("Exception during execution", l_duration)
			last_result := l_result
			create last_run.make_now
			add_result (l_result)
			error_count := error_count + 1
			is_running := False
		end

	execution_start_time: detachable DATE_TIME
			-- Start time of current execution (for rescue access).

feature {NONE} -- Implementation

	add_result (a_result: SIMPLE_JOB_RESULT)
			-- Add result to history (keep last 100).
		do
			results.extend (a_result)
			if results.count > 100 then
				results.start
				results.remove
			end
		end

	time_difference_ms (a_start, a_end: DATE_TIME): INTEGER_64
			-- Calculate milliseconds between two times.
		local
			l_seconds: INTEGER_64
		do
			l_seconds := a_end.relative_duration (a_start).seconds_count
			Result := l_seconds * 1000
		end

invariant
	id_not_empty: not id.is_empty
	name_not_empty: not name.is_empty
	action_attached: action /= Void
	run_count_non_negative: run_count >= 0
	error_count_non_negative: error_count >= 0
	retry_count_non_negative: retry_count >= 0
	timeout_non_negative: timeout_seconds >= 0

note
	copyright: "Copyright (c) 2025, Larry Rix"
	license: "MIT License"

end
