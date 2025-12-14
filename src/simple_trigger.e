note
	description: "[
		Base class for all trigger types.

		A trigger determines when a job should fire. Different trigger types
		provide different scheduling mechanisms:
		- SIMPLE_CRON_TRIGGER: Cron expression based
		- SIMPLE_INTERVAL_TRIGGER: Fixed interval
		- SIMPLE_DATE_TRIGGER: One-time at specific date/time
	]"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	SIMPLE_TRIGGER

feature -- Access

	id: STRING
			-- Unique trigger identifier.
		deferred
		end

	description: STRING
			-- Human-readable description of schedule.
		deferred
		end

feature -- Status

	is_enabled: BOOLEAN
			-- Is trigger active?

	is_expired: BOOLEAN
			-- Has trigger completed all its firings?
		do
			Result := False
		end

feature -- Calculation

	next_fire_time (a_after: SIMPLE_DATE_TIME): detachable SIMPLE_DATE_TIME
			-- Next time trigger should fire after given time.
			-- Returns Void if trigger will not fire again.
		require
			is_enabled: is_enabled
		deferred
		end

	matches (a_time: SIMPLE_DATE_TIME): BOOLEAN
			-- Does given time match this trigger?
		deferred
		end

feature -- Element change

	enable
			-- Enable this trigger.
		do
			is_enabled := True
		ensure
			enabled: is_enabled
		end

	disable
			-- Disable this trigger.
		do
			is_enabled := False
		ensure
			disabled: not is_enabled
		end

invariant
	id_not_empty: not id.is_empty

note
	copyright: "Copyright (c) 2025, Larry Rix"
	license: "MIT License"

end
