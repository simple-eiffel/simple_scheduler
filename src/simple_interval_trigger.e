note
	description: "[
		Trigger that fires at fixed intervals.

		Simple interval-based scheduling. Can optionally have start/end times
		and a maximum number of fires.

		Examples:
		- Every 30 seconds
		- Every 5 minutes
		- Every hour for 24 hours
	]"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	SIMPLE_INTERVAL_TRIGGER

inherit
	SIMPLE_TRIGGER
		redefine
			is_expired
		end

create
	make_seconds,
	make_minutes,
	make_hours,
	make_with_id

feature {NONE} -- Initialization

	make_seconds (a_seconds: INTEGER)
			-- Create trigger that fires every `a_seconds` seconds.
		require
			positive: a_seconds > 0
		do
			create internal_id.make_from_string ("interval_" + generate_id.out)
			interval_seconds := a_seconds
			is_enabled := True
		ensure
			interval_set: interval_seconds = a_seconds
			enabled: is_enabled
		end

	make_minutes (a_minutes: INTEGER)
			-- Create trigger that fires every `a_minutes` minutes.
		require
			positive: a_minutes > 0
		do
			create internal_id.make_from_string ("interval_" + generate_id.out)
			interval_seconds := a_minutes * 60
			is_enabled := True
		ensure
			interval_set: interval_seconds = a_minutes * 60
			enabled: is_enabled
		end

	make_hours (a_hours: INTEGER)
			-- Create trigger that fires every `a_hours` hours.
		require
			positive: a_hours > 0
		do
			create internal_id.make_from_string ("interval_" + generate_id.out)
			interval_seconds := a_hours * 3600
			is_enabled := True
		ensure
			interval_set: interval_seconds = a_hours * 3600
			enabled: is_enabled
		end

	make_with_id (a_id: READABLE_STRING_8; a_seconds: INTEGER)
			-- Create trigger with specific ID.
		require
			id_not_empty: not a_id.is_empty
			positive: a_seconds > 0
		do
			create internal_id.make_from_string (a_id)
			interval_seconds := a_seconds
			is_enabled := True
		ensure
			id_set: id.same_string (a_id)
			interval_set: interval_seconds = a_seconds
			enabled: is_enabled
		end

feature -- Access

	id: STRING
			-- Unique trigger identifier.
		do
			Result := internal_id
		end

	description: STRING
			-- Human-readable description of schedule.
		do
			create Result.make (30)
			Result.append ("Every ")
			if interval_seconds >= 3600 and interval_seconds \\ 3600 = 0 then
				if interval_seconds = 3600 then
					Result.append ("hour")
				else
					Result.append ((interval_seconds // 3600).out)
					Result.append (" hours")
				end
			elseif interval_seconds >= 60 and interval_seconds \\ 60 = 0 then
				if interval_seconds = 60 then
					Result.append ("minute")
				else
					Result.append ((interval_seconds // 60).out)
					Result.append (" minutes")
				end
			else
				if interval_seconds = 1 then
					Result.append ("second")
				else
					Result.append (interval_seconds.out)
					Result.append (" seconds")
				end
			end
		end

	interval_seconds: INTEGER
			-- Interval between fires in seconds.

	start_time: detachable SIMPLE_DATE_TIME
			-- Optional start time (Void = start immediately).

	end_time: detachable SIMPLE_DATE_TIME
			-- Optional end time (Void = no end).

	max_fires: INTEGER
			-- Maximum number of fires (0 = unlimited).

	fire_count: INTEGER
			-- Number of times this trigger has fired.

feature -- Status

	is_expired: BOOLEAN
			-- Has trigger completed all its firings?
		do
			if max_fires > 0 then
				Result := fire_count >= max_fires
			end
			if not Result and attached end_time as l_end then
				Result := create {SIMPLE_DATE_TIME}.make_now > l_end
			end
		end

feature -- Calculation

	next_fire_time (a_after: SIMPLE_DATE_TIME): detachable SIMPLE_DATE_TIME
			-- Next time trigger should fire after given time.
		local
			l_base: SIMPLE_DATE_TIME
			l_next: SIMPLE_DATE_TIME
		do
			if not is_expired then
				-- Determine base time
				if attached start_time as l_start then
					if l_start > a_after then
						l_base := l_start
					else
						l_base := a_after
					end
				else
					l_base := a_after
				end

				-- Calculate next fire
				l_next := l_base
				l_next := l_next.plus_seconds (interval_seconds)

				-- Check end time
				if attached end_time as l_end then
					if l_next <= l_end then
						Result := l_next
					end
				else
					Result := l_next
				end
			end
		end

	matches (a_time: SIMPLE_DATE_TIME): BOOLEAN
			-- Does given time match this trigger?
			-- For interval triggers, we check if we're past a fire point.
		do
			-- Interval triggers match based on elapsed time, not specific times
			Result := True
		end

feature -- Element change

	set_start_time (a_time: SIMPLE_DATE_TIME)
			-- Set when trigger should start.
		do
			start_time := a_time
		ensure
			start_time_set: attached start_time as l_start implies l_start.is_equal (a_time)
		end

	set_end_time (a_time: SIMPLE_DATE_TIME)
			-- Set when trigger should end.
		do
			end_time := a_time
		ensure
			end_time_set: attached end_time as l_end implies l_end.is_equal (a_time)
		end

	set_max_fires (a_count: INTEGER)
			-- Set maximum number of fires.
		require
			non_negative: a_count >= 0
		do
			max_fires := a_count
		ensure
			max_fires_set: max_fires = a_count
		end

	record_fire
			-- Record that trigger has fired.
		do
			fire_count := fire_count + 1
		ensure
			count_incremented: fire_count = old fire_count + 1
		end

feature {NONE} -- Implementation

	internal_id: STRING
			-- Internal storage for ID.

	generate_id: INTEGER
			-- Generate unique ID number.
		do
			id_counter := id_counter + 1
			Result := id_counter
		end

	id_counter: INTEGER
			-- Counter for ID generation.

invariant
	interval_positive: interval_seconds > 0
	fire_count_non_negative: fire_count >= 0
	max_fires_non_negative: max_fires >= 0

note
	copyright: "Copyright (c) 2025, Larry Rix"
	license: "MIT License"

end
