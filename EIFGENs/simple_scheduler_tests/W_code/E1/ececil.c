#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* EQA_SYSTEM_PATH extend */
void _A6_43_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(81, "extend", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* LIB_TESTS test_new_cron_expression */
void _A53_116 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1002, "test_new_cron_expression", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_cron_expression_every_5_minutes */
void _A53_117 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1003, "test_cron_expression_every_5_minutes", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_cron_expression_hourly */
void _A53_118 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1004, "test_cron_expression_hourly", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_cron_expression_daily_midnight */
void _A53_119 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1005, "test_cron_expression_daily_midnight", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_cron_expression_extended */
void _A53_120 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1006, "test_cron_expression_extended", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_cron_expression_invalid */
void _A53_121 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1007, "test_cron_expression_invalid", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_cron_matches_every_minute */
void _A53_122 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1008, "test_cron_matches_every_minute", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_cron_matches_specific_minute */
void _A53_123 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1009, "test_cron_matches_specific_minute", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_cron_matches_range */
void _A53_124 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1010, "test_cron_matches_range", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_cron_matches_list */
void _A53_125 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1011, "test_cron_matches_list", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_cron_matches_step */
void _A53_126 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1012, "test_cron_matches_step", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_cron_next_fire_time */
void _A53_127 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1013, "test_cron_next_fire_time", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_new_cron_trigger */
void _A53_128 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1014, "test_new_cron_trigger", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_new_interval_trigger_seconds */
void _A53_129 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1015, "test_new_interval_trigger_seconds", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_new_interval_trigger_minutes */
void _A53_130 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1016, "test_new_interval_trigger_minutes", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_new_interval_trigger_hours */
void _A53_131 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1017, "test_new_interval_trigger_hours", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_new_date_trigger */
void _A53_132 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1018, "test_new_date_trigger", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_date_trigger_in_seconds */
void _A53_133 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1019, "test_date_trigger_in_seconds", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_trigger_enable_disable */
void _A53_134 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1020, "test_trigger_enable_disable", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_interval_trigger_max_fires */
void _A53_135 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1021, "test_interval_trigger_max_fires", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_new_job */
void _A53_136 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1022, "test_new_job", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_job_with_name */
void _A53_137 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1023, "test_job_with_name", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_job_execute */
void _A53_138 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1024, "test_job_execute", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_job_enable_disable */
void _A53_139 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1025, "test_job_enable_disable", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_job_options */
void _A53_140 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1026, "test_job_options", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_new_job_result_success */
void _A53_141 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1027, "test_new_job_result_success", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_new_job_result_failure */
void _A53_142 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1028, "test_new_job_result_failure", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_job_result_to_string */
void _A53_143 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1029, "test_job_result_to_string", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_new_scheduler */
void _A53_144 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1030, "test_new_scheduler", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_scheduler_schedule_cron */
void _A53_145 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1031, "test_scheduler_schedule_cron", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_scheduler_schedule_interval */
void _A53_146 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1032, "test_scheduler_schedule_interval", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_scheduler_schedule_at */
void _A53_147 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1033, "test_scheduler_schedule_at", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_scheduler_unschedule */
void _A53_148 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1034, "test_scheduler_unschedule", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_scheduler_start_stop */
void _A53_149 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1035, "test_scheduler_start_stop", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_scheduler_pause_resume */
void _A53_150 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1036, "test_scheduler_pause_resume", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_scheduler_trigger_now */
void _A53_151 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1037, "test_scheduler_trigger_now", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_scheduler_get_job */
void _A53_152 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1038, "test_scheduler_get_job", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS test_scheduler_pending_jobs */
void _A53_153 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1039, "test_scheduler_pending_jobs", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS empty_action */
void _A53_155 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1041, "empty_action", closed [1].it_r))(closed [1].it_r);
}

	/* LIB_TESTS mark_executed */
void _A53_156 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1042, "mark_executed", closed [1].it_r))(closed [1].it_r);
}

	/* EQA_TEST_EVALUATOR [G#1] inline-agent#1 of execute */
EIF_TYPED_VALUE _A987_271 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) F987_6962)(closed [1].it_r);
}

	/* PROCEDURE [G#1] call */
void _A320_140 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4570, "call", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EQA_TEST_SET clean */
void _A51_39 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(952, "clean", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EQA_EVALUATOR invoke_routine */
void _A190_208_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1666, "invoke_routine", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void _A205_159_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) F205_6986)(closed [1].it_r, open [1]);
}

	/* MISMATCH_INFORMATION wipe_out */
void A215_98 (EIF_REFERENCE Current)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3019, "wipe_out", Current))(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A215_162 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3725, "internal_put", Current))(Current, ((u [0].type = SK_REF), (u [0].it_r = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* MISMATCH_INFORMATION set_string_versions */
void A215_163 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3726, "set_string_versions", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}


static fnptr feif_address_table[] = {
(fnptr)0,
(fnptr)A215_98,
(fnptr)A215_162,
(fnptr)A215_163,
};

fnptr *egc_address_table_init = feif_address_table;



#ifdef __cplusplus
}
#endif
