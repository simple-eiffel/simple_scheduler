note
	description: "Test application for simple_scheduler"
	author: "Larry Rix"

class
	TEST_APP

create
	make

feature {NONE} -- Initialization

	make
			-- Run tests.
		local
			tests: LIB_TESTS
		do
			create tests
			io.put_string ("simple_scheduler test runner%N")
			io.put_string ("====================================%N%N")

			passed := 0
			failed := 0

			-- Cron Expression Tests
			io.put_string ("Cron Expression Tests%N")
			io.put_string ("---------------------%N")
			run_test (agent tests.test_new_cron_expression, "test_new_cron_expression")
			run_test (agent tests.test_cron_expression_every_5_minutes, "test_cron_expression_every_5_minutes")
			run_test (agent tests.test_cron_expression_hourly, "test_cron_expression_hourly")
			run_test (agent tests.test_cron_expression_daily_midnight, "test_cron_expression_daily_midnight")
			run_test (agent tests.test_cron_expression_extended, "test_cron_expression_extended")
			run_test (agent tests.test_cron_expression_invalid, "test_cron_expression_invalid")
			run_test (agent tests.test_cron_matches_every_minute, "test_cron_matches_every_minute")
			run_test (agent tests.test_cron_matches_specific_minute, "test_cron_matches_specific_minute")
			run_test (agent tests.test_cron_matches_range, "test_cron_matches_range")
			run_test (agent tests.test_cron_matches_list, "test_cron_matches_list")
			run_test (agent tests.test_cron_matches_step, "test_cron_matches_step")
			run_test (agent tests.test_cron_next_fire_time, "test_cron_next_fire_time")

			-- Trigger Tests
			io.put_string ("%NTrigger Tests%N")
			io.put_string ("--------------%N")
			run_test (agent tests.test_new_cron_trigger, "test_new_cron_trigger")
			run_test (agent tests.test_new_interval_trigger_seconds, "test_new_interval_trigger_seconds")
			run_test (agent tests.test_new_interval_trigger_minutes, "test_new_interval_trigger_minutes")
			run_test (agent tests.test_new_interval_trigger_hours, "test_new_interval_trigger_hours")
			run_test (agent tests.test_new_date_trigger, "test_new_date_trigger")
			run_test (agent tests.test_date_trigger_in_seconds, "test_date_trigger_in_seconds")
			run_test (agent tests.test_trigger_enable_disable, "test_trigger_enable_disable")
			run_test (agent tests.test_interval_trigger_max_fires, "test_interval_trigger_max_fires")

			-- Job Tests
			io.put_string ("%NJob Tests%N")
			io.put_string ("---------%N")
			run_test (agent tests.test_new_job, "test_new_job")
			run_test (agent tests.test_job_with_name, "test_job_with_name")
			run_test (agent tests.test_job_execute, "test_job_execute")
			run_test (agent tests.test_job_enable_disable, "test_job_enable_disable")
			run_test (agent tests.test_job_options, "test_job_options")

			-- Job Result Tests
			io.put_string ("%NJob Result Tests%N")
			io.put_string ("----------------%N")
			run_test (agent tests.test_new_job_result_success, "test_new_job_result_success")
			run_test (agent tests.test_new_job_result_failure, "test_new_job_result_failure")
			run_test (agent tests.test_job_result_to_string, "test_job_result_to_string")

			-- Scheduler Tests
			io.put_string ("%NScheduler Tests%N")
			io.put_string ("---------------%N")
			run_test (agent tests.test_new_scheduler, "test_new_scheduler")
			run_test (agent tests.test_scheduler_schedule_cron, "test_scheduler_schedule_cron")
			run_test (agent tests.test_scheduler_schedule_interval, "test_scheduler_schedule_interval")
			run_test (agent tests.test_scheduler_schedule_at, "test_scheduler_schedule_at")
			run_test (agent tests.test_scheduler_unschedule, "test_scheduler_unschedule")
			run_test (agent tests.test_scheduler_start_stop, "test_scheduler_start_stop")
			run_test (agent tests.test_scheduler_pause_resume, "test_scheduler_pause_resume")
			run_test (agent tests.test_scheduler_trigger_now, "test_scheduler_trigger_now")
			run_test (agent tests.test_scheduler_get_job, "test_scheduler_get_job")
			run_test (agent tests.test_scheduler_pending_jobs, "test_scheduler_pending_jobs")

			io.put_string ("%N====================================%N")
			io.put_string ("Results: " + passed.out + " passed, " + failed.out + " failed%N")

			if failed > 0 then
				io.put_string ("TESTS FAILED%N")
			else
				io.put_string ("ALL TESTS PASSED%N")
			end
		end

feature {NONE} -- Implementation

	passed: INTEGER
	failed: INTEGER

	run_test (a_test: PROCEDURE; a_name: STRING)
			-- Run a single test and update counters.
		local
			l_retried: BOOLEAN
		do
			if not l_retried then
				a_test.call (Void)
				io.put_string ("  PASS: " + a_name + "%N")
				passed := passed + 1
			end
		rescue
			io.put_string ("  FAIL: " + a_name + "%N")
			failed := failed + 1
			l_retried := True
			retry
		end

end
