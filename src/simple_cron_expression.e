note
	description: "[
		Parses and evaluates cron expressions.

		Standard 5-field format: minute hour day-of-month month day-of-week
		Extended 6-field format: second minute hour day-of-month month day-of-week

		Field values:
		- * : all values
		- n : specific value
		- n-m : range
		- n,m,o : list
		- */n : step (every n)

		Examples:
		- '* * * * *' : every minute
		- '0 * * * *' : every hour at minute 0
		- '0 9 * * 1-5' : 9 AM Monday through Friday
		- '*/5 * * * *' : every 5 minutes
		- '0 0 1 * *' : midnight on 1st of month
	]"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	SIMPLE_CRON_EXPRESSION

create
	make,
	make_extended

feature {NONE} -- Initialization

	make (a_expression: READABLE_STRING_8)
			-- Create from standard 5-field cron expression.
		require
			expression_not_empty: not a_expression.is_empty
		do
			create expression.make_from_string (a_expression)
			is_extended := False
			parse
		ensure
			expression_set: expression.same_string (a_expression)
		end

	make_extended (a_expression: READABLE_STRING_8)
			-- Create from extended 6-field cron expression (with seconds).
		require
			expression_not_empty: not a_expression.is_empty
		do
			create expression.make_from_string (a_expression)
			is_extended := True
			parse
		ensure
			expression_set: expression.same_string (a_expression)
		end

feature -- Access

	expression: STRING
			-- Original cron expression.

	is_extended: BOOLEAN
			-- Does expression include seconds field?

	second_field: STRING
			-- Seconds (0-59), only for extended format.

	minute_field: STRING
			-- Minutes (0-59).

	hour_field: STRING
			-- Hours (0-23).

	day_of_month_field: STRING
			-- Day of month (1-31).

	month_field: STRING
			-- Month (1-12 or JAN-DEC).

	day_of_week_field: STRING
			-- Day of week (0-6 or SUN-SAT, 0=Sunday).

feature -- Status

	is_valid: BOOLEAN
			-- Is expression valid?

	validation_error: detachable STRING
			-- Error message if not valid.

feature -- Calculation

	next_fire_time (a_after: SIMPLE_DATE_TIME): SIMPLE_DATE_TIME
			-- Next time cron should fire after given time.
		require
			is_valid: is_valid
		local
			l_time: SIMPLE_DATE_TIME
			l_found: BOOLEAN
			l_iterations: INTEGER
		do
			-- Start from next second/minute
			l_time := a_after
			if is_extended then
				l_time := l_time.plus_seconds (1)
			else
				l_time := l_time.plus_minutes (1)
				l_time := create {SIMPLE_DATE_TIME}.make (l_time.year, l_time.month, l_time.day, l_time.hour, l_time.minute, 0)
			end

			-- Search for matching time (limit iterations to prevent infinite loop)
			from
				l_iterations := 0
			until
				l_found or l_iterations > 525600  -- Max 1 year of minutes
			loop
				if matches (l_time) then
					l_found := True
				else
					if is_extended then
						l_time := l_time.plus_seconds (1)
					else
						l_time := l_time.plus_minutes (1)
					end
				end
				l_iterations := l_iterations + 1
			end

			Result := l_time
		end

	matches (a_time: SIMPLE_DATE_TIME): BOOLEAN
			-- Does given time match this cron expression?
		require
			is_valid: is_valid
		do
			Result := True

			-- Check seconds (extended only)
			if is_extended and then not field_matches (second_field, a_time.second, 0, 59) then
				Result := False
			end

			-- Check minutes
			if Result and then not field_matches (minute_field, a_time.minute, 0, 59) then
				Result := False
			end

			-- Check hours
			if Result and then not field_matches (hour_field, a_time.hour, 0, 23) then
				Result := False
			end

			-- Check day of month
			if Result and then not field_matches (day_of_month_field, a_time.day, 1, 31) then
				Result := False
			end

			-- Check month
			if Result and then not field_matches (month_field, a_time.month, 1, 12) then
				Result := False
			end

			-- Check day of week (Sunday = 0 or 7)
			if Result then
				Result := field_matches_day_of_week (day_of_week_field, a_time.date.day_of_week)
			end
		end

feature -- Conversion

	to_description: STRING
			-- Human-readable description of schedule.
		require
			is_valid: is_valid
		do
			create Result.make (50)

			-- Simple pattern matching for common expressions
			if expression.same_string ("* * * * *") then
				Result.append ("Every minute")
			elseif expression.same_string ("*/5 * * * *") then
				Result.append ("Every 5 minutes")
			elseif expression.same_string ("*/15 * * * *") then
				Result.append ("Every 15 minutes")
			elseif expression.same_string ("*/30 * * * *") then
				Result.append ("Every 30 minutes")
			elseif expression.same_string ("0 * * * *") then
				Result.append ("Every hour")
			elseif expression.same_string ("0 0 * * *") then
				Result.append ("Every day at midnight")
			elseif expression.same_string ("0 0 * * 0") then
				Result.append ("Every Sunday at midnight")
			elseif expression.same_string ("0 0 1 * *") then
				Result.append ("First day of every month at midnight")
			else
				Result.append ("Cron: ")
				Result.append (expression)
			end
		end

feature {NONE} -- Implementation

	parse
			-- Parse the expression into fields.
		local
			l_parts: LIST [READABLE_STRING_8]
		do
			l_parts := expression.split (' ')
			l_parts.compare_objects

			if is_extended then
				if l_parts.count = 6 then
					second_field := l_parts.i_th (1).to_string_8
					minute_field := l_parts.i_th (2).to_string_8
					hour_field := l_parts.i_th (3).to_string_8
					day_of_month_field := l_parts.i_th (4).to_string_8
					month_field := l_parts.i_th (5).to_string_8
					day_of_week_field := l_parts.i_th (6).to_string_8
					validate
				else
					is_valid := False
					validation_error := "Extended cron expression must have 6 fields"
					create second_field.make_empty
					create minute_field.make_empty
					create hour_field.make_empty
					create day_of_month_field.make_empty
					create month_field.make_empty
					create day_of_week_field.make_empty
				end
			else
				if l_parts.count = 5 then
					second_field := "0"
					minute_field := l_parts.i_th (1).to_string_8
					hour_field := l_parts.i_th (2).to_string_8
					day_of_month_field := l_parts.i_th (3).to_string_8
					month_field := l_parts.i_th (4).to_string_8
					day_of_week_field := l_parts.i_th (5).to_string_8
					validate
				else
					is_valid := False
					validation_error := "Cron expression must have 5 fields"
					create second_field.make_empty
					create minute_field.make_empty
					create hour_field.make_empty
					create day_of_month_field.make_empty
					create month_field.make_empty
					create day_of_week_field.make_empty
				end
			end
		end

	validate
			-- Validate parsed fields.
		do
			is_valid := True
			validation_error := Void

			if not is_valid_field (minute_field, 0, 59) then
				is_valid := False
				validation_error := "Invalid minute field"
			elseif not is_valid_field (hour_field, 0, 23) then
				is_valid := False
				validation_error := "Invalid hour field"
			elseif not is_valid_field (day_of_month_field, 1, 31) then
				is_valid := False
				validation_error := "Invalid day of month field"
			elseif not is_valid_field (month_field, 1, 12) then
				is_valid := False
				validation_error := "Invalid month field"
			elseif not is_valid_field (day_of_week_field, 0, 7) then
				is_valid := False
				validation_error := "Invalid day of week field"
			end

			if is_extended and is_valid then
				if not is_valid_field (second_field, 0, 59) then
					is_valid := False
					validation_error := "Invalid second field"
				end
			end
		end

	is_valid_field (a_field: STRING; a_min, a_max: INTEGER): BOOLEAN
			-- Is field value valid for given range?
		do
			if a_field.same_string ("*") then
				Result := True
			elseif a_field.has ('/') then
				-- Step value like */5
				Result := is_valid_step_field (a_field, a_min, a_max)
			elseif a_field.has (',') then
				-- List like 1,5,10
				Result := is_valid_list_field (a_field, a_min, a_max)
			elseif a_field.has ('-') then
				-- Range like 1-5
				Result := is_valid_range_field (a_field, a_min, a_max)
			elseif a_field.is_integer then
				Result := a_field.to_integer >= a_min and a_field.to_integer <= a_max
			end
		end

	is_valid_step_field (a_field: STRING; a_min, a_max: INTEGER): BOOLEAN
			-- Is step field valid (e.g., */5)?
		local
			l_parts: LIST [READABLE_STRING_8]
		do
			l_parts := a_field.split ('/')
			if l_parts.count = 2 then
				if l_parts.i_th (1).same_string ("*") then
					if l_parts.i_th (2).is_integer then
						Result := l_parts.i_th (2).to_integer > 0 and
						          l_parts.i_th (2).to_integer <= (a_max - a_min + 1)
					end
				end
			end
		end

	is_valid_range_field (a_field: STRING; a_min, a_max: INTEGER): BOOLEAN
			-- Is range field valid (e.g., 1-5)?
		local
			l_parts: LIST [READABLE_STRING_8]
			l_start, l_end: INTEGER
		do
			l_parts := a_field.split ('-')
			if l_parts.count = 2 then
				if l_parts.i_th (1).is_integer and l_parts.i_th (2).is_integer then
					l_start := l_parts.i_th (1).to_integer
					l_end := l_parts.i_th (2).to_integer
					Result := l_start >= a_min and l_end <= a_max and l_start <= l_end
				end
			end
		end

	is_valid_list_field (a_field: STRING; a_min, a_max: INTEGER): BOOLEAN
			-- Is list field valid (e.g., 1,5,10)?
		local
			l_parts: LIST [READABLE_STRING_8]
			l_val: INTEGER
			i: INTEGER
		do
			Result := True
			l_parts := a_field.split (',')
			from
				i := 1
			until
				i > l_parts.count or not Result
			loop
				if l_parts.i_th (i).is_integer then
					l_val := l_parts.i_th (i).to_integer
					if l_val < a_min or l_val > a_max then
						Result := False
					end
				else
					Result := False
				end
				i := i + 1
			end
		end

	field_matches (a_field: STRING; a_value, a_min, a_max: INTEGER): BOOLEAN
			-- Does value match field pattern?
		do
			if a_field.same_string ("*") then
				Result := True
			elseif a_field.has ('/') then
				Result := step_matches (a_field, a_value, a_min)
			elseif a_field.has (',') then
				Result := list_matches (a_field, a_value)
			elseif a_field.has ('-') then
				Result := range_matches (a_field, a_value)
			elseif a_field.is_integer then
				Result := a_field.to_integer = a_value
			end
		end

	step_matches (a_field: STRING; a_value, a_min: INTEGER): BOOLEAN
			-- Does value match step pattern (e.g., */5)?
		local
			l_parts: LIST [READABLE_STRING_8]
			l_step: INTEGER
		do
			l_parts := a_field.split ('/')
			if l_parts.count = 2 and then l_parts.i_th (2).is_integer then
				l_step := l_parts.i_th (2).to_integer
				if l_step > 0 then
					Result := ((a_value - a_min) \\ l_step) = 0
				end
			end
		end

	range_matches (a_field: STRING; a_value: INTEGER): BOOLEAN
			-- Does value match range pattern (e.g., 1-5)?
		local
			l_parts: LIST [READABLE_STRING_8]
		do
			l_parts := a_field.split ('-')
			if l_parts.count = 2 then
				if l_parts.i_th (1).is_integer and l_parts.i_th (2).is_integer then
					Result := a_value >= l_parts.i_th (1).to_integer and
					          a_value <= l_parts.i_th (2).to_integer
				end
			end
		end

	list_matches (a_field: STRING; a_value: INTEGER): BOOLEAN
			-- Does value match list pattern (e.g., 1,5,10)?
		local
			l_parts: LIST [READABLE_STRING_8]
			i: INTEGER
		do
			l_parts := a_field.split (',')
			from
				i := 1
			until
				i > l_parts.count or Result
			loop
				if l_parts.i_th (i).is_integer and then l_parts.i_th (i).to_integer = a_value then
					Result := True
				end
				i := i + 1
			end
		end

	field_matches_day_of_week (a_field: STRING; a_dow: INTEGER): BOOLEAN
			-- Does day of week match? (Eiffel: 1=Sunday, cron: 0=Sunday)
		local
			l_cron_dow: INTEGER
		do
			-- Convert Eiffel day_of_week (1=Sunday) to cron (0=Sunday)
			l_cron_dow := a_dow - 1

			if a_field.same_string ("*") then
				Result := True
			elseif a_field.same_string ("7") then
				-- 7 also means Sunday
				Result := l_cron_dow = 0
			else
				Result := field_matches (a_field, l_cron_dow, 0, 6)
			end
		end

invariant
	expression_attached: expression /= Void

note
	copyright: "Copyright (c) 2025, Larry Rix"
	license: "MIT License"

end
