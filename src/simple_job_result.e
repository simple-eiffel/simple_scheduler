note
	description: "[
		Result of a job execution.

		Contains information about whether the job succeeded or failed,
		execution time, and any error information.
	]"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	SIMPLE_JOB_RESULT

create
	make_success,
	make_failure

feature {NONE} -- Initialization

	make_success (a_duration_ms: INTEGER_64)
			-- Create successful result.
		require
			non_negative: a_duration_ms >= 0
		do
			is_success := True
			duration_ms := a_duration_ms
			create executed_at.make_now
		ensure
			success: is_success
			duration_set: duration_ms = a_duration_ms
		end

	make_failure (a_error: READABLE_STRING_8; a_duration_ms: INTEGER_64)
			-- Create failure result.
		require
			error_not_empty: not a_error.is_empty
			non_negative: a_duration_ms >= 0
		do
			is_success := False
			create error_message.make_from_string (a_error)
			duration_ms := a_duration_ms
			create executed_at.make_now
		ensure
			failure: not is_success
			error_set: attached error_message as e and then e.same_string (a_error)
			duration_set: duration_ms = a_duration_ms
		end

feature -- Access

	is_success: BOOLEAN
			-- Did job execute successfully?

	error_message: detachable STRING
			-- Error message if failed.

	duration_ms: INTEGER_64
			-- Execution duration in milliseconds.

	executed_at: SIMPLE_DATE_TIME
			-- When job was executed.

feature -- Status

	is_failure: BOOLEAN
			-- Did job fail?
		do
			Result := not is_success
		ensure
			opposite: Result = not is_success
		end

feature -- Conversion

	to_string: STRING
			-- String representation of result.
		do
			create Result.make (50)
			if is_success then
				Result.append ("SUCCESS")
			else
				Result.append ("FAILURE")
				if attached error_message as e then
					Result.append (": ")
					Result.append (e)
				end
			end
			Result.append (" (")
			Result.append (duration_ms.out)
			Result.append ("ms)")
		end

invariant
	failure_has_error: is_failure implies attached error_message
	executed_at_attached: executed_at /= Void

note
	copyright: "Copyright (c) 2025, Larry Rix"
	license: "MIT License"

end
