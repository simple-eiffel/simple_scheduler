note
	description: "[
		A scheduled job to be executed by the scheduler.

		Jobs wrap an action (procedure) with metadata and execution options.
		They track their execution history and can be configured for
		concurrency, retries, and timeouts.

		Model queries:
		- model_history: execution history as MML_SEQUENCE (bounded by Max_history_size)
	]"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	SIMPLE_JOB

create
	make,
	make_with_name

feature -- Constants

	Max_history_size: INTEGER = 100
			-- Maximum number of results kept in history.

feature {NONE} -- Initialization

	make (a_id: READABLE_STRING_8; a_action: PROCEDURE)
			-- Create job with ID and action.
		require
			id_not_empty: not a_id.is_empty
		do
			create id.make_from_string (a_id)
			create name.make_from_string (a_id)
			action := a_action
			is_enabled := True
			allow_concurrent := False
			retry_count := 0
			timeout_seconds := 0
			create results.make (Max_history_size)
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
		end

	make_with_name (a_id: READABLE_STRING_8; a_name: READABLE_STRING_8; a_action: PROCEDURE)
			-- Create job with ID, name, and action.
		require
			id_not_empty: not a_id.is_empty
			name_not_empty: not a_name.is_empty
		do
			create id.make_from_string (a_id)
			create name.make_from_string (a_name)
			action := a_action
			is_enabled := True
			allow_concurrent := False
			retry_count := 0
			timeout_seconds := 0
			create results.make (Max_history_size)
		ensure
			id_set: id.same_string (a_id)
			name_set: name.same_string (a_name)
			action_set: action = a_action
			enabled: is_enabled
			not_concurrent: not allow_concurrent
			no_retries: retry_count = 0
			no_timeout: timeout_seconds = 0
			no_runs: run_count = 0
			no_errors: error_count = 0
			not_running: not is_running
			empty_history: model_history.is_empty
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

	last_run: detachable SIMPLE_DATE_TIME
			-- When job last ran.

	last_result: detachable SIMPLE_JOB_RESULT
			-- Result of last execution.

	run_count: INTEGER
			-- Number of successful runs.

	error_count: INTEGER
			-- Number of failed runs.

	results: ARRAYED_LIST [SIMPLE_JOB_RESULT]
			-- History of results (limited).

feature -- Model queries

	model_history: MML_SEQUENCE [SIMPLE_JOB_RESULT]
			-- Execution history as mathematical model.
			-- Bounded by Max_history_size.
		do
			create Result
			across results as ic loop
				Result := Result & ic
			end
		ensure
			count_matches: Result.count = results.count
			bounded: Result.count <= Max_history_size
		end

	get_last_n_results (n: INTEGER): MML_SEQUENCE [SIMPLE_JOB_RESULT]
			-- Get last `n` results from history.
		require
			positive: n > 0
		local
			l_start: INTEGER
		do
			if n >= model_history.count then
				Result := model_history
			else
				l_start := model_history.count - n + 1
				Result := model_history.tail (l_start)
			end
		ensure
			bounded_by_request: Result.count <= n
			bounded_by_history: Result.count <= model_history.count
			returns_tail: Result.count > 0 implies Result.last = model_history.last
		end

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
			l_start, l_end: SIMPLE_DATE_TIME
			l_duration: INTEGER_64
			l_result: SIMPLE_JOB_RESULT
			l_old_run_count: INTEGER
			l_old_history_count: INTEGER
		do
			l_old_run_count := run_count
			l_old_history_count := model_history.count
			is_running := True
			create l_start.make_now

			action.call (Void)

			create l_end.make_now
			l_duration := time_difference_ms (l_start, l_end)
			create l_result.make_success (l_duration)
			run_count := run_count + 1

			last_result := l_result
			add_result (l_result)
			create last_run.make_now
			is_running := False
		ensure
			not_running: not is_running
			has_result: attached last_result
			run_count_incremented: run_count = old run_count + 1
			result_is_success: attached last_result as lr implies lr.is_success
			history_updated: model_history.count >= old model_history.count or model_history.count = Max_history_size
			last_in_history: model_history.count > 0 implies model_history.last = last_result
			last_run_set: attached last_run
		end

	clear_history
			-- Clear all execution history.
		do
			results.wipe_out
			run_count := 0
			error_count := 0
			last_result := Void
			last_run := Void
		ensure
			history_empty: model_history.is_empty
			run_count_reset: run_count = 0
			error_count_reset: error_count = 0
			no_last_result: last_result = Void
			no_last_run: last_run = Void
		end

feature {NONE} -- Implementation

	add_result (a_result: SIMPLE_JOB_RESULT)
			-- Add result to history (keep last Max_history_size).
		require
			result_attached: attached a_result
		do
			results.extend (a_result)
			if results.count > Max_history_size then
				results.start
				results.remove
			end
		ensure
			result_in_history: results.has (a_result)
			bounded: results.count <= Max_history_size
			at_end: results.last = a_result
		end

	time_difference_ms (a_start, a_end: SIMPLE_DATE_TIME): INTEGER_64
			-- Calculate milliseconds between two times.
		local
			l_seconds: INTEGER_64
		do
			l_seconds := a_end.to_timestamp - a_start.to_timestamp
			Result := l_seconds * 1000
		end

invariant
	-- Identity
	id_not_empty: not id.is_empty
	name_not_empty: not name.is_empty
	action_attached: attached action

	-- Counter constraints
	run_count_non_negative: run_count >= 0
	error_count_non_negative: error_count >= 0
	retry_count_non_negative: retry_count >= 0
	timeout_non_negative: timeout_seconds >= 0
	error_count_bounded: error_count <= run_count

	-- History constraints
	history_bounded: model_history.count <= Max_history_size

	-- State machine
	last_result_consistency: attached last_result implies run_count > 0
	last_run_consistency: attached last_run implies run_count > 0

note
	copyright: "Copyright (c) 2025, Larry Rix"
	license: "MIT License"

end
