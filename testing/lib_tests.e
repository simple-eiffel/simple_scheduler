note
	description: "Tests for simple_scheduler library"
	author: "Larry Rix"

class
	LIB_TESTS

inherit
	TEST_SET_BASE

create
	default_create

feature -- Cron Expression Tests

	test_new_cron_expression
			-- Test creating cron expression.
		local
			cron: SIMPLE_CRON_EXPRESSION
		do
			create cron.make ("* * * * *")
			assert_true ("is_valid", cron.is_valid)
			assert_equal ("expression", "* * * * *", cron.expression)
		end

	test_cron_expression_every_5_minutes
			-- Test */5 * * * * expression.
		local
			cron: SIMPLE_CRON_EXPRESSION
		do
			create cron.make ("*/5 * * * *")
			assert_true ("is_valid", cron.is_valid)
			assert_equal ("description", "Every 5 minutes", cron.to_description)
		end

	test_cron_expression_hourly
			-- Test 0 * * * * expression.
		local
			cron: SIMPLE_CRON_EXPRESSION
		do
			create cron.make ("0 * * * *")
			assert_true ("is_valid", cron.is_valid)
			assert_equal ("description", "Every hour", cron.to_description)
		end

	test_cron_expression_daily_midnight
			-- Test 0 0 * * * expression.
		local
			cron: SIMPLE_CRON_EXPRESSION
		do
			create cron.make ("0 0 * * *")
			assert_true ("is_valid", cron.is_valid)
			assert_equal ("description", "Every day at midnight", cron.to_description)
		end

	test_cron_expression_extended
			-- Test 6-field extended format.
		local
			cron: SIMPLE_CRON_EXPRESSION
		do
			create cron.make_extended ("0 * * * * *")
			assert_true ("is_valid", cron.is_valid)
			assert_true ("is_extended", cron.is_extended)
		end

	test_cron_expression_invalid
			-- Test invalid expression.
		local
			cron: SIMPLE_CRON_EXPRESSION
		do
			create cron.make ("* * *")
			assert_false ("is_valid", cron.is_valid)
			assert_attached ("validation_error", cron.validation_error)
		end

	test_cron_matches_every_minute
			-- Test matching every minute.
		local
			cron: SIMPLE_CRON_EXPRESSION
			dt: SIMPLE_DATE_TIME
		do
			create cron.make ("* * * * *")
			create dt.make (2025, 12, 13, 10, 30, 0)
			assert_true ("matches", cron.matches (dt))
		end

	test_cron_matches_specific_minute
			-- Test matching specific minute.
		local
			cron: SIMPLE_CRON_EXPRESSION
			dt1, dt2: SIMPLE_DATE_TIME
		do
			create cron.make ("30 * * * *")
			create dt1.make (2025, 12, 13, 10, 30, 0)
			create dt2.make (2025, 12, 13, 10, 15, 0)
			assert_true ("matches_30", cron.matches (dt1))
			assert_false ("not_matches_15", cron.matches (dt2))
		end

	test_cron_matches_range
			-- Test matching range pattern.
		local
			cron: SIMPLE_CRON_EXPRESSION
			dt1, dt2, dt3: SIMPLE_DATE_TIME
		do
			create cron.make ("0-15 * * * *")
			create dt1.make (2025, 12, 13, 10, 5, 0)
			create dt2.make (2025, 12, 13, 10, 15, 0)
			create dt3.make (2025, 12, 13, 10, 20, 0)
			assert_true ("matches_5", cron.matches (dt1))
			assert_true ("matches_15", cron.matches (dt2))
			assert_false ("not_matches_20", cron.matches (dt3))
		end

	test_cron_matches_list
			-- Test matching list pattern.
		local
			cron: SIMPLE_CRON_EXPRESSION
			dt1, dt2, dt3: SIMPLE_DATE_TIME
		do
			create cron.make ("0,15,30,45 * * * *")
			create dt1.make (2025, 12, 13, 10, 0, 0)
			create dt2.make (2025, 12, 13, 10, 30, 0)
			create dt3.make (2025, 12, 13, 10, 20, 0)
			assert_true ("matches_0", cron.matches (dt1))
			assert_true ("matches_30", cron.matches (dt2))
			assert_false ("not_matches_20", cron.matches (dt3))
		end

	test_cron_matches_step
			-- Test matching step pattern.
		local
			cron: SIMPLE_CRON_EXPRESSION
			dt1, dt2, dt3: SIMPLE_DATE_TIME
		do
			create cron.make ("*/15 * * * *")
			create dt1.make (2025, 12, 13, 10, 0, 0)
			create dt2.make (2025, 12, 13, 10, 15, 0)
			create dt3.make (2025, 12, 13, 10, 10, 0)
			assert_true ("matches_0", cron.matches (dt1))
			assert_true ("matches_15", cron.matches (dt2))
			assert_false ("not_matches_10", cron.matches (dt3))
		end

	test_cron_next_fire_time
			-- Test calculating next fire time.
		local
			cron: SIMPLE_CRON_EXPRESSION
			after_time, next_time: SIMPLE_DATE_TIME
		do
			create cron.make ("0 * * * *")  -- Every hour at minute 0
			create after_time.make (2025, 12, 13, 10, 30, 0)
			next_time := cron.next_fire_time (after_time)
			assert_integers_equal ("next_hour", 11, next_time.hour)
			assert_integers_equal ("next_minute", 0, next_time.minute)
		end

feature -- Trigger Tests

	test_new_cron_trigger
			-- Test creating cron trigger.
		local
			trigger: SIMPLE_CRON_TRIGGER
		do
			create trigger.make ("*/5 * * * *")
			assert_true ("is_valid", trigger.is_valid)
			assert_true ("is_enabled", trigger.is_enabled)
			assert_equal ("description", "Every 5 minutes", trigger.description)
		end

	test_new_interval_trigger_seconds
			-- Test creating interval trigger with seconds.
		local
			trigger: SIMPLE_INTERVAL_TRIGGER
		do
			create trigger.make_seconds (30)
			assert_integers_equal ("interval", 30, trigger.interval_seconds)
			assert_equal ("description", "Every 30 seconds", trigger.description)
		end

	test_new_interval_trigger_minutes
			-- Test creating interval trigger with minutes.
		local
			trigger: SIMPLE_INTERVAL_TRIGGER
		do
			create trigger.make_minutes (5)
			assert_integers_equal ("interval", 300, trigger.interval_seconds)
			assert_equal ("description", "Every 5 minutes", trigger.description)
		end

	test_new_interval_trigger_hours
			-- Test creating interval trigger with hours.
		local
			trigger: SIMPLE_INTERVAL_TRIGGER
		do
			create trigger.make_hours (1)
			assert_integers_equal ("interval", 3600, trigger.interval_seconds)
			assert_equal ("description", "Every hour", trigger.description)
		end

	test_new_date_trigger
			-- Test creating date trigger.
		local
			trigger: SIMPLE_DATE_TRIGGER
			fire_time: SIMPLE_DATE_TIME
		do
			create fire_time.make (2025, 12, 25, 0, 0, 0)
			create trigger.make (fire_time)
			assert_true ("is_enabled", trigger.is_enabled)
			assert_false ("not_expired", trigger.is_expired)
			assert_false ("not_fired", trigger.has_fired)
		end

	test_date_trigger_in_seconds
			-- Test creating date trigger in N seconds.
		local
			trigger: SIMPLE_DATE_TRIGGER
			now: SIMPLE_DATE_TIME
		do
			create trigger.make_in_seconds (60)
			create now.make_now
			assert_true ("fire_in_future", trigger.fire_time > now)
		end

	test_trigger_enable_disable
			-- Test enabling/disabling triggers.
		local
			trigger: SIMPLE_INTERVAL_TRIGGER
		do
			create trigger.make_seconds (30)
			assert_true ("initially_enabled", trigger.is_enabled)
			trigger.disable
			assert_false ("now_disabled", trigger.is_enabled)
			trigger.enable
			assert_true ("re_enabled", trigger.is_enabled)
		end

	test_interval_trigger_max_fires
			-- Test interval trigger with max fires.
		local
			trigger: SIMPLE_INTERVAL_TRIGGER
		do
			create trigger.make_seconds (10)
			trigger.set_max_fires (3)
			assert_false ("not_expired_0", trigger.is_expired)
			trigger.record_fire
			assert_false ("not_expired_1", trigger.is_expired)
			trigger.record_fire
			assert_false ("not_expired_2", trigger.is_expired)
			trigger.record_fire
			assert_true ("expired_3", trigger.is_expired)
		end

feature -- Job Tests

	test_new_job
			-- Test creating a job.
		local
			job: SIMPLE_JOB
		do
			create job.make ("test_job", agent empty_action)
			assert_equal ("id", "test_job", job.id)
			assert_equal ("name", "test_job", job.name)
			assert_true ("is_enabled", job.is_enabled)
			assert_false ("not_running", job.is_running)
		end

	test_job_with_name
			-- Test creating a job with custom name.
		local
			job: SIMPLE_JOB
		do
			create job.make_with_name ("job1", "My Test Job", agent empty_action)
			assert_equal ("id", "job1", job.id)
			assert_equal ("name", "My Test Job", job.name)
		end

	test_job_execute
			-- Test executing a job.
		local
			job: SIMPLE_JOB
		do
			executed := False
			create job.make ("test_job", agent mark_executed)
			job.execute
			assert_true ("executed", executed)
			assert_integers_equal ("run_count", 1, job.run_count)
			assert_attached ("last_result", job.last_result)
			if attached job.last_result as r then
				assert_true ("success", r.is_success)
			end
		end

	test_job_enable_disable
			-- Test enabling/disabling jobs.
		local
			job: SIMPLE_JOB
		do
			create job.make ("test_job", agent empty_action)
			assert_true ("initially_enabled", job.is_enabled)
			job.disable
			assert_false ("now_disabled", job.is_enabled)
			job.enable
			assert_true ("re_enabled", job.is_enabled)
		end

	test_job_options
			-- Test setting job options.
		local
			job: SIMPLE_JOB
		do
			create job.make ("test_job", agent empty_action)
			job.set_allow_concurrent (True)
			job.set_retry_count (3)
			job.set_timeout (60)
			assert_true ("allow_concurrent", job.allow_concurrent)
			assert_integers_equal ("retry_count", 3, job.retry_count)
			assert_integers_equal ("timeout", 60, job.timeout_seconds)
		end

feature -- Job Result Tests

	test_new_job_result_success
			-- Test creating success result.
		local
			l_result: SIMPLE_JOB_RESULT
		do
			create l_result.make_success (100)
			assert_true ("is_success", l_result.is_success)
			assert_false ("not_failure", l_result.is_failure)
			assert_integers_equal ("duration", 100, l_result.duration_ms.to_integer_32)
		end

	test_new_job_result_failure
			-- Test creating failure result.
		local
			l_result: SIMPLE_JOB_RESULT
		do
			create l_result.make_failure ("Something went wrong", 50)
			assert_false ("not_success", l_result.is_success)
			assert_true ("is_failure", l_result.is_failure)
			assert_attached ("error_message", l_result.error_message)
		end

	test_job_result_to_string
			-- Test result string representation.
		local
			l_result: SIMPLE_JOB_RESULT
		do
			create l_result.make_success (100)
			assert_true ("contains_success", l_result.to_string.has_substring ("SUCCESS"))
			assert_true ("contains_duration", l_result.to_string.has_substring ("100ms"))
		end

feature -- Scheduler Tests

	test_new_scheduler
			-- Test creating scheduler.
		local
			scheduler: SIMPLE_SCHEDULER
		do
			create scheduler.make
			assert_false ("not_running", scheduler.is_running)
			assert_integers_equal ("no_jobs", 0, scheduler.job_count)
		end

	test_scheduler_schedule_cron
			-- Test scheduling with cron expression.
		local
			scheduler: SIMPLE_SCHEDULER
			job: SIMPLE_JOB
		do
			create scheduler.make
			create job.make ("job1", agent empty_action)
			scheduler.schedule_cron (job, "*/5 * * * *")
			assert_true ("has_job", scheduler.has_job ("job1"))
			assert_integers_equal ("job_count", 1, scheduler.job_count)
		end

	test_scheduler_schedule_interval
			-- Test scheduling with interval.
		local
			scheduler: SIMPLE_SCHEDULER
			job: SIMPLE_JOB
		do
			create scheduler.make
			create job.make ("job1", agent empty_action)
			scheduler.schedule_interval (job, 30)
			assert_true ("has_job", scheduler.has_job ("job1"))
		end

	test_scheduler_schedule_at
			-- Test scheduling at specific time.
		local
			scheduler: SIMPLE_SCHEDULER
			job: SIMPLE_JOB
			fire_time: SIMPLE_DATE_TIME
		do
			create scheduler.make
			create job.make ("job1", agent empty_action)
			create fire_time.make_now
			fire_time := fire_time.plus_days (1)
			scheduler.schedule_at (job, fire_time)
			assert_true ("has_job", scheduler.has_job ("job1"))
		end

	test_scheduler_unschedule
			-- Test unscheduling a job.
		local
			scheduler: SIMPLE_SCHEDULER
			job: SIMPLE_JOB
		do
			create scheduler.make
			create job.make ("job1", agent empty_action)
			scheduler.schedule_interval (job, 30)
			assert_true ("has_job", scheduler.has_job ("job1"))
			scheduler.unschedule ("job1")
			assert_false ("no_job", scheduler.has_job ("job1"))
		end

	test_scheduler_start_stop
			-- Test starting and stopping scheduler.
		local
			scheduler: SIMPLE_SCHEDULER
		do
			create scheduler.make
			assert_false ("not_running", scheduler.is_running)
			scheduler.start
			assert_true ("running", scheduler.is_running)
			scheduler.stop
			assert_false ("stopped", scheduler.is_running)
		end

	test_scheduler_pause_resume
			-- Test pausing and resuming scheduler.
		local
			scheduler: SIMPLE_SCHEDULER
		do
			create scheduler.make
			scheduler.start
			assert_false ("not_paused", scheduler.is_paused)
			scheduler.pause
			assert_true ("paused", scheduler.is_paused)
			scheduler.resume
			assert_false ("resumed", scheduler.is_paused)
		end

	test_scheduler_trigger_now
			-- Test manually triggering a job.
		local
			scheduler: SIMPLE_SCHEDULER
			job: SIMPLE_JOB
		do
			executed := False
			create scheduler.make
			create job.make ("job1", agent mark_executed)
			scheduler.schedule_interval (job, 3600)  -- Every hour
			scheduler.trigger_now ("job1")
			assert_true ("executed", executed)
		end

	test_scheduler_get_job
			-- Test getting job by ID.
		local
			scheduler: SIMPLE_SCHEDULER
			job: SIMPLE_JOB
		do
			create scheduler.make
			create job.make ("job1", agent empty_action)
			scheduler.schedule_interval (job, 30)
			assert_attached ("job_found", scheduler.job ("job1"))
			if attached scheduler.job ("job1") as j then
				assert_equal ("job_id", "job1", j.id)
			end
		end

	test_scheduler_pending_jobs
			-- Test getting list of pending jobs.
		local
			scheduler: SIMPLE_SCHEDULER
			job1, job2: SIMPLE_JOB
			pending: ARRAYED_LIST [SIMPLE_JOB]
		do
			create scheduler.make
			create job1.make ("job1", agent empty_action)
			create job2.make ("job2", agent empty_action)
			scheduler.schedule_interval (job1, 30)
			scheduler.schedule_interval (job2, 60)
			pending := scheduler.pending_jobs
			assert_integers_equal ("pending_count", 2, pending.count)
		end

feature {NONE} -- Helpers

	executed: BOOLEAN
			-- Flag for execution tests.

	empty_action
			-- Empty procedure for testing.
		do
			-- Nothing
		end

	mark_executed
			-- Mark as executed.
		do
			executed := True
		end

end
