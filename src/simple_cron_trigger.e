note
	description: "[
		Trigger based on cron expression.

		Fires according to a cron schedule. Supports both standard 5-field
		and extended 6-field (with seconds) cron expressions.

		Examples:
		- '* * * * *' : every minute
		- '0 9 * * 1-5' : 9 AM Monday through Friday
		- '*/5 * * * *' : every 5 minutes
	]"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

class
	SIMPLE_CRON_TRIGGER

inherit
	SIMPLE_TRIGGER

create
	make,
	make_with_id

feature {NONE} -- Initialization

	make (a_expression: READABLE_STRING_8)
			-- Create trigger from cron expression.
		require
			expression_not_empty: not a_expression.is_empty
		do
			create internal_id.make_from_string ("cron_" + generate_id.out)
			create cron_expression.make (a_expression)
			is_enabled := True
		ensure
			enabled: is_enabled
		end

	make_with_id (a_id: READABLE_STRING_8; a_expression: READABLE_STRING_8)
			-- Create trigger with specific ID from cron expression.
		require
			id_not_empty: not a_id.is_empty
			expression_not_empty: not a_expression.is_empty
		do
			create internal_id.make_from_string (a_id)
			create cron_expression.make (a_expression)
			is_enabled := True
		ensure
			id_set: id.same_string (a_id)
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
			if cron_expression.is_valid then
				Result := cron_expression.to_description
			else
				create Result.make_from_string ("Invalid: " + cron_expression.expression)
			end
		end

	cron_expression: SIMPLE_CRON_EXPRESSION
			-- The cron expression for this trigger.

feature -- Status

	is_valid: BOOLEAN
			-- Is the cron expression valid?
		do
			Result := cron_expression.is_valid
		end

	validation_error: detachable STRING
			-- Error message if not valid.
		do
			Result := cron_expression.validation_error
		end

feature -- Calculation

	next_fire_time (a_after: SIMPLE_DATE_TIME): detachable SIMPLE_DATE_TIME
			-- Next time trigger should fire after given time.
		do
			if cron_expression.is_valid then
				Result := cron_expression.next_fire_time (a_after)
			end
		end

	matches (a_time: SIMPLE_DATE_TIME): BOOLEAN
			-- Does given time match this trigger?
		do
			if cron_expression.is_valid then
				Result := cron_expression.matches (a_time)
			end
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
	cron_expression_attached: cron_expression /= Void

note
	copyright: "Copyright (c) 2025, Larry Rix"
	license: "MIT License"

end
