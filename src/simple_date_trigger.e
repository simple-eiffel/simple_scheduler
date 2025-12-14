note
	description: "[
		Trigger that fires once at a specific date/time.

		One-time scheduling. After it fires, is_expired returns True.

		Examples:
		- Fire at 2025-12-25 00:00:00
		- Fire in 30 minutes from now
	]"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	SIMPLE_DATE_TRIGGER

inherit
	SIMPLE_TRIGGER
		redefine
			is_expired
		end

create
	make,
	make_with_id,
	make_in_seconds,
	make_in_minutes

feature {NONE} -- Initialization

	make (a_fire_time: DATE_TIME)
			-- Create trigger that fires at specific time.
		do
			create internal_id.make_from_string ("date_" + generate_id.out)
			create fire_time.make_by_date_time (a_fire_time.date, a_fire_time.time)
			is_enabled := True
		ensure
			fire_time_set: fire_time.is_equal (a_fire_time)
			enabled: is_enabled
		end

	make_with_id (a_id: READABLE_STRING_8; a_fire_time: DATE_TIME)
			-- Create trigger with specific ID.
		require
			id_not_empty: not a_id.is_empty
		do
			create internal_id.make_from_string (a_id)
			create fire_time.make_by_date_time (a_fire_time.date, a_fire_time.time)
			is_enabled := True
		ensure
			id_set: id.same_string (a_id)
			fire_time_set: fire_time.is_equal (a_fire_time)
			enabled: is_enabled
		end

	make_in_seconds (a_seconds: INTEGER)
			-- Create trigger that fires in `a_seconds` seconds from now.
		require
			positive: a_seconds > 0
		local
			l_now: DATE_TIME
		do
			create internal_id.make_from_string ("date_" + generate_id.out)
			create l_now.make_now
			l_now.second_add (a_seconds)
			fire_time := l_now
			is_enabled := True
		ensure
			enabled: is_enabled
		end

	make_in_minutes (a_minutes: INTEGER)
			-- Create trigger that fires in `a_minutes` minutes from now.
		require
			positive: a_minutes > 0
		local
			l_now: DATE_TIME
		do
			create internal_id.make_from_string ("date_" + generate_id.out)
			create l_now.make_now
			l_now.minute_add (a_minutes)
			fire_time := l_now
			is_enabled := True
		ensure
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
			create Result.make (40)
			Result.append ("Once at ")
			Result.append (fire_time.formatted_out ("yyyy-mm-dd hh:mi:ss"))
		end

	fire_time: DATE_TIME
			-- When this trigger should fire.

feature -- Status

	has_fired: BOOLEAN
			-- Has trigger already fired?

	is_expired: BOOLEAN
			-- Has trigger completed all its firings?
		do
			Result := has_fired
		end

feature -- Calculation

	next_fire_time (a_after: DATE_TIME): detachable DATE_TIME
			-- Next time trigger should fire after given time.
		do
			if not has_fired and fire_time > a_after then
				Result := fire_time
			end
		end

	matches (a_time: DATE_TIME): BOOLEAN
			-- Does given time match this trigger?
		do
			if not has_fired then
				Result := a_time >= fire_time
			end
		end

feature -- Element change

	record_fire
			-- Record that trigger has fired.
		do
			has_fired := True
		ensure
			fired: has_fired
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
	fire_time_attached: fire_time /= Void

note
	copyright: "Copyright (c) 2025, Larry Rix"
	license: "MIT License"

end
