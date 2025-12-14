/*
 * Code for class LIB_TESTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F53_1044(EIF_REFERENCE);
extern void F53_1045(EIF_REFERENCE);
extern void F53_1046(EIF_REFERENCE);
extern void F53_1047(EIF_REFERENCE);
extern void F53_1048(EIF_REFERENCE);
extern void F53_1049(EIF_REFERENCE);
extern void F53_1050(EIF_REFERENCE);
extern void F53_1051(EIF_REFERENCE);
extern void F53_1052(EIF_REFERENCE);
extern void F53_1053(EIF_REFERENCE);
extern void F53_1054(EIF_REFERENCE);
extern void F53_1055(EIF_REFERENCE);
extern void F53_1056(EIF_REFERENCE);
extern void F53_1057(EIF_REFERENCE);
extern void F53_1058(EIF_REFERENCE);
extern void F53_1059(EIF_REFERENCE);
extern void F53_1060(EIF_REFERENCE);
extern void F53_1061(EIF_REFERENCE);
extern void F53_1062(EIF_REFERENCE);
extern void F53_1063(EIF_REFERENCE);
extern void F53_1064(EIF_REFERENCE);
extern void F53_1065(EIF_REFERENCE);
extern void F53_1066(EIF_REFERENCE);
extern void F53_1067(EIF_REFERENCE);
extern void F53_1068(EIF_REFERENCE);
extern void F53_1069(EIF_REFERENCE);
extern void F53_1070(EIF_REFERENCE);
extern void F53_1071(EIF_REFERENCE);
extern void F53_1072(EIF_REFERENCE);
extern void F53_1073(EIF_REFERENCE);
extern void F53_1074(EIF_REFERENCE);
extern void F53_1075(EIF_REFERENCE);
extern void F53_1076(EIF_REFERENCE);
extern void F53_1077(EIF_REFERENCE);
extern void F53_1078(EIF_REFERENCE);
extern void F53_1079(EIF_REFERENCE);
extern void F53_1080(EIF_REFERENCE);
extern void F53_1081(EIF_REFERENCE);
extern EIF_TYPED_VALUE F53_1082(EIF_REFERENCE);
extern void F53_1083(EIF_REFERENCE);
extern void F53_1084(EIF_REFERENCE);
extern void EIF_Minit53(void);
extern EIF_REFERENCE _A53_156();
extern EIF_REFERENCE _A53_155();

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LIB_TESTS}.test_new_cron_expression */
void F53_1044 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_new_cron_expression";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,ur2);
	RTLR(6,tr3);
	RTLR(7,ur3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1108);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1108);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000013, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(19, 0x01).id);
	tr2 = RTMS_EX_H("* * * * *",9,604516650);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(360, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("is_valid",8,1745811044);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(370, "is_valid", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("expression",10,383915118);
	ur1 = tr1;
	tr2 = RTMS_EX_H("* * * * *",9,604516650);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(362, "expression", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(908, dtype))(Current, ur1x, ur2x, ur3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_cron_expression_every_5_minutes */
void F53_1045 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_cron_expression_every_5_minutes";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,ur2);
	RTLR(6,tr3);
	RTLR(7,ur3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1109);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1109);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000013, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(19, 0x01).id);
	tr2 = RTMS_EX_H("*/5 * * * *",11,404047402);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(360, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("is_valid",8,1745811044);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(370, "is_valid", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("description",11,801826414);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Every 5 minutes",15,200681587);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(374, "to_description", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(908, dtype))(Current, ur1x, ur2x, ur3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_cron_expression_hourly */
void F53_1046 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_cron_expression_hourly";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,ur2);
	RTLR(6,tr3);
	RTLR(7,ur3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1110);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1110);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000013, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(19, 0x01).id);
	tr2 = RTMS_EX_H("0 * * * *",9,958411050);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(360, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("is_valid",8,1745811044);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(370, "is_valid", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("description",11,801826414);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Every hour",10,117081458);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(374, "to_description", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(908, dtype))(Current, ur1x, ur2x, ur3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_cron_expression_daily_midnight */
void F53_1047 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_cron_expression_daily_midnight";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,ur2);
	RTLR(6,tr3);
	RTLR(7,ur3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1111);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1111);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000013, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(19, 0x01).id);
	tr2 = RTMS_EX_H("0 0 * * *",9,1830830122);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(360, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("is_valid",8,1745811044);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(370, "is_valid", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("description",11,801826414);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Every day at midnight",21,938809716);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(374, "to_description", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(908, dtype))(Current, ur1x, ur2x, ur3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_cron_expression_extended */
void F53_1048 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_cron_expression_extended";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1112);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1112);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000013, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(19, 0x01).id);
	tr2 = RTMS_EX_H("0 * * * * *",11,937156650);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(361, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("is_valid",8,1745811044);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(370, "is_valid", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("is_extended",11,1390067556);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(363, "is_extended", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ub1
}

/* {LIB_TESTS}.test_cron_expression_invalid */
void F53_1049 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_cron_expression_invalid";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1113);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1113);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000013, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(19, 0x01).id);
	tr2 = RTMS_EX_H("* * *",5,539954218);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(360, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("is_valid",8,1745811044);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(370, "is_valid", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("validation_error",16,1623592306);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(371, "validation_error", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(921, dtype))(Current, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ub1
}

/* {LIB_TESTS}.test_cron_matches_every_minute */
void F53_1050 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_cron_matches_every_minute";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,loc2);
	RTLR(5,ur2);
	RTLR(6,Current);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 52, Current, 2, 0, 1114);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1114);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000013, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(19, 0x01).id);
	tr2 = RTMS_EX_H("* * * * *",9,604516650);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(360, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF800011D, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(285, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2025L);
	ui4_2 = ((EIF_INTEGER_32) 12L);
	ui4_3 = ((EIF_INTEGER_32) 13L);
	ui4_4 = ((EIF_INTEGER_32) 10L);
	ui4_5 = ((EIF_INTEGER_32) 30L);
	ui4_6 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5175, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("matches",7,886408051);
	ur1 = tr1;
	ur2 = RTCCL(loc2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(373, "matches", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef ub1
}

/* {LIB_TESTS}.test_cron_matches_specific_minute */
void F53_1051 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_cron_matches_specific_minute";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,ur2);
	RTLR(7,Current);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 52, Current, 3, 0, 1115);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1115);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000013, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(19, 0x01).id);
	tr2 = RTMS_EX_H("30 * * * *",10,87374378);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(360, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF800011D, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(285, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2025L);
	ui4_2 = ((EIF_INTEGER_32) 12L);
	ui4_3 = ((EIF_INTEGER_32) 13L);
	ui4_4 = ((EIF_INTEGER_32) 10L);
	ui4_5 = ((EIF_INTEGER_32) 30L);
	ui4_6 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5175, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF800011D, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(285, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2025L);
	ui4_2 = ((EIF_INTEGER_32) 12L);
	ui4_3 = ((EIF_INTEGER_32) 13L);
	ui4_4 = ((EIF_INTEGER_32) 10L);
	ui4_5 = ((EIF_INTEGER_32) 15L);
	ui4_6 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5175, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
	RTNHOOK(3,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("matches_30",10,610619440);
	ur1 = tr1;
	ur2 = RTCCL(loc2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(373, "matches", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("not_matches_15",14,1926878773);
	ur1 = tr1;
	ur2 = RTCCL(loc3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(373, "matches", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef ub1
}

/* {LIB_TESTS}.test_cron_matches_range */
void F53_1052 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_cron_matches_range";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,ur2);
	RTLR(8,Current);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 52, Current, 4, 0, 1116);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1116);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000013, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(19, 0x01).id);
	tr2 = RTMS_EX_H("0-15 * * * *",12,1741998378);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(360, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF800011D, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(285, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2025L);
	ui4_2 = ((EIF_INTEGER_32) 12L);
	ui4_3 = ((EIF_INTEGER_32) 13L);
	ui4_4 = ((EIF_INTEGER_32) 10L);
	ui4_5 = ((EIF_INTEGER_32) 5L);
	ui4_6 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5175, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF800011D, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(285, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2025L);
	ui4_2 = ((EIF_INTEGER_32) 12L);
	ui4_3 = ((EIF_INTEGER_32) 13L);
	ui4_4 = ((EIF_INTEGER_32) 10L);
	ui4_5 = ((EIF_INTEGER_32) 15L);
	ui4_6 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5175, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
	RTNHOOK(3,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(4, 0xF800011D, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(285, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2025L);
	ui4_2 = ((EIF_INTEGER_32) 12L);
	ui4_3 = ((EIF_INTEGER_32) 13L);
	ui4_4 = ((EIF_INTEGER_32) 10L);
	ui4_5 = ((EIF_INTEGER_32) 20L);
	ui4_6 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5175, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
	RTNHOOK(4,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	tr1 = RTMS_EX_H("matches_5",9,161768501);
	ur1 = tr1;
	ur2 = RTCCL(loc2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(373, "matches", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("matches_15",10,610618933);
	ur1 = tr1;
	ur2 = RTCCL(loc3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(373, "matches", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("not_matches_20",14,1926879024);
	ur1 = tr1;
	ur2 = RTCCL(loc4);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(373, "matches", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef ub1
}

/* {LIB_TESTS}.test_cron_matches_list */
void F53_1053 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_cron_matches_list";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,ur2);
	RTLR(8,Current);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 52, Current, 4, 0, 1117);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1117);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000013, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(19, 0x01).id);
	tr2 = RTMS_EX_H("0,15,30,45 * * * *",18,19597610);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(360, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF800011D, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(285, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2025L);
	ui4_2 = ((EIF_INTEGER_32) 12L);
	ui4_3 = ((EIF_INTEGER_32) 13L);
	ui4_4 = ((EIF_INTEGER_32) 10L);
	ui4_5 = ((EIF_INTEGER_32) 0L);
	ui4_6 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5175, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF800011D, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(285, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2025L);
	ui4_2 = ((EIF_INTEGER_32) 12L);
	ui4_3 = ((EIF_INTEGER_32) 13L);
	ui4_4 = ((EIF_INTEGER_32) 10L);
	ui4_5 = ((EIF_INTEGER_32) 30L);
	ui4_6 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5175, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
	RTNHOOK(3,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(4, 0xF800011D, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(285, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2025L);
	ui4_2 = ((EIF_INTEGER_32) 12L);
	ui4_3 = ((EIF_INTEGER_32) 13L);
	ui4_4 = ((EIF_INTEGER_32) 10L);
	ui4_5 = ((EIF_INTEGER_32) 20L);
	ui4_6 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5175, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
	RTNHOOK(4,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	tr1 = RTMS_EX_H("matches_0",9,161768496);
	ur1 = tr1;
	ur2 = RTCCL(loc2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(373, "matches", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("matches_30",10,610619440);
	ur1 = tr1;
	ur2 = RTCCL(loc3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(373, "matches", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("not_matches_20",14,1926879024);
	ur1 = tr1;
	ur2 = RTCCL(loc4);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(373, "matches", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef ub1
}

/* {LIB_TESTS}.test_cron_matches_step */
void F53_1054 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_cron_matches_step";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,ur2);
	RTLR(8,Current);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 52, Current, 4, 0, 1118);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1118);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000013, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(19, 0x01).id);
	tr2 = RTMS_EX_H("*/15 * * * *",12,1876389418);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(360, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF800011D, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(285, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2025L);
	ui4_2 = ((EIF_INTEGER_32) 12L);
	ui4_3 = ((EIF_INTEGER_32) 13L);
	ui4_4 = ((EIF_INTEGER_32) 10L);
	ui4_5 = ((EIF_INTEGER_32) 0L);
	ui4_6 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5175, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF800011D, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(285, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2025L);
	ui4_2 = ((EIF_INTEGER_32) 12L);
	ui4_3 = ((EIF_INTEGER_32) 13L);
	ui4_4 = ((EIF_INTEGER_32) 10L);
	ui4_5 = ((EIF_INTEGER_32) 15L);
	ui4_6 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5175, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
	RTNHOOK(3,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(4, 0xF800011D, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(285, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2025L);
	ui4_2 = ((EIF_INTEGER_32) 12L);
	ui4_3 = ((EIF_INTEGER_32) 13L);
	ui4_4 = ((EIF_INTEGER_32) 10L);
	ui4_5 = ((EIF_INTEGER_32) 10L);
	ui4_6 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5175, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
	RTNHOOK(4,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	tr1 = RTMS_EX_H("matches_0",9,161768496);
	ur1 = tr1;
	ur2 = RTCCL(loc2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(373, "matches", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("matches_15",10,610618933);
	ur1 = tr1;
	ur2 = RTCCL(loc3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(373, "matches", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("not_matches_10",14,1926878768);
	ur1 = tr1;
	ur2 = RTCCL(loc4);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(373, "matches", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef ub1
}

/* {LIB_TESTS}.test_cron_next_fire_time */
void F53_1055 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_cron_next_fire_time";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,Current);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 52, Current, 3, 0, 1119);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1119);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000013, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(19, 0x01).id);
	tr2 = RTMS_EX_H("0 * * * *",9,958411050);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(360, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF800011D, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(285, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2025L);
	ui4_2 = ((EIF_INTEGER_32) 12L);
	ui4_3 = ((EIF_INTEGER_32) 13L);
	ui4_4 = ((EIF_INTEGER_32) 10L);
	ui4_5 = ((EIF_INTEGER_32) 30L);
	ui4_6 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5175, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF800011D, 0, 0); /* loc3 */
	ur1 = RTCCL(loc2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(372, "next_fire_time", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("next_hour",9,170888050);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 11L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1087, "hour", loc3))(loc3)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(912, dtype))(Current, ur1x, ui4_1x, ui4_2x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("next_minute",11,104616293);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1088, "minute", loc3))(loc3)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(912, dtype))(Current, ur1x, ui4_1x, ui4_2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
}

/* {LIB_TESTS}.test_new_cron_trigger */
void F53_1056 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_new_cron_trigger";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,ur2);
	RTLR(6,tr3);
	RTLR(7,ur3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1120);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1120);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000091, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(145, 0x01).id);
	tr2 = RTMS_EX_H("*/5 * * * *",11,404047402);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1681, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("is_valid",8,1745811044);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1684, "is_valid", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("is_enabled",10,2132972132);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(1675, "is_enabled", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("description",11,801826414);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Every 5 minutes",15,200681587);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1674, "description", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(908, dtype))(Current, ur1x, ur2x, ur3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_new_interval_trigger_seconds */
void F53_1057 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_new_interval_trigger_seconds";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLR(6,tr3);
	RTLR(7,ur3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1121);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1121);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000093, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(147, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 30L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1699, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("interval",8,1703731564);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 30L);
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(1703, "interval_seconds", loc1));
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(912, dtype))(Current, ur1x, ui4_1x, ui4_2x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("description",11,801826414);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Every 30 seconds",16,1263749235);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1674, "description", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(908, dtype))(Current, ur1x, ur2x, ur3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
}

/* {LIB_TESTS}.test_new_interval_trigger_minutes */
void F53_1058 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_new_interval_trigger_minutes";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLR(6,tr3);
	RTLR(7,ur3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1122);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1122);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000093, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(147, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1700, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("interval",8,1703731564);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 300L);
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(1703, "interval_seconds", loc1));
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(912, dtype))(Current, ur1x, ui4_1x, ui4_2x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("description",11,801826414);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Every 5 minutes",15,200681587);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1674, "description", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(908, dtype))(Current, ur1x, ur2x, ur3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
}

/* {LIB_TESTS}.test_new_interval_trigger_hours */
void F53_1059 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_new_interval_trigger_hours";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLR(6,tr3);
	RTLR(7,ur3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1123);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1123);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000093, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(147, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1701, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("interval",8,1703731564);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 3600L);
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(1703, "interval_seconds", loc1));
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(912, dtype))(Current, ur1x, ui4_1x, ui4_2x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("description",11,801826414);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Every hour",10,117081458);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1674, "description", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(908, dtype))(Current, ur1x, ur2x, ur3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
}

/* {LIB_TESTS}.test_new_date_trigger */
void F53_1060 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_new_date_trigger";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 52, Current, 2, 0, 1124);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1124);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0xF800011D, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(285, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2025L);
	ui4_2 = ((EIF_INTEGER_32) 12L);
	ui4_3 = ((EIF_INTEGER_32) 25L);
	ui4_4 = ((EIF_INTEGER_32) 0L);
	ui4_5 = ((EIF_INTEGER_32) 0L);
	ui4_6 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5175, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
	RTNHOOK(1,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(1, 0xF8000092, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(146, 0x01).id);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1689, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("is_enabled",10,2132972132);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(1675, "is_enabled", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("not_expired",11,1345218916);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1676, "is_expired", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("not_fired",9,283141732);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(1694, "has_fired", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef ub1
}

/* {LIB_TESTS}.test_date_trigger_in_seconds */
void F53_1061 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_date_trigger_in_seconds";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLR(6,Current);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 52, Current, 2, 0, 1125);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1125);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000092, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(146, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 60L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1691, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF800011D, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(285, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5179, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("fire_in_future",14,1545148005);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1693, "fire_time", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(loc2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1953, "is_greater", tr2))(tr2, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ub1
}

/* {LIB_TESTS}.test_trigger_enable_disable */
void F53_1062 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_trigger_enable_disable";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1126);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1126);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000093, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(147, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 30L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1699, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("initially_enabled",17,1901750884);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(1675, "is_enabled", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1680, "disable", loc1))(loc1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("now_disabled",12,1758482532);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(1675, "is_enabled", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1679, "enable", loc1))(loc1);
	RTHOOK(6);
	tr1 = RTMS_EX_H("re_enabled",10,1911440228);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(1675, "is_enabled", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ui4_1
#undef ub1
}

/* {LIB_TESTS}.test_interval_trigger_max_fires */
void F53_1063 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_interval_trigger_max_fires";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1127);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1127);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000093, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(147, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1699, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1710, "set_max_fires", loc1))(loc1, ui4_1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("not_expired_0",13,1925825328);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1676, "is_expired", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1711, "record_fire", loc1))(loc1);
	RTHOOK(5);
	tr1 = RTMS_EX_H("not_expired_1",13,1925825329);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1676, "is_expired", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1711, "record_fire", loc1))(loc1);
	RTHOOK(7);
	tr1 = RTMS_EX_H("not_expired_2",13,1925825330);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1676, "is_expired", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur1x, ub1x);
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1711, "record_fire", loc1))(loc1);
	RTHOOK(9);
	tr1 = RTMS_EX_H("expired_3",9,1987792435);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1676, "is_expired", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ui4_1
#undef ub1
}

/* {LIB_TESTS}.test_new_job */
void F53_1064 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_new_job";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,ur2);
	RTLR(8,ur3);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1128);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1128);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000011, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(17, 0x01).id);
	tr2 = RTMS_EX_H("test_job",8,1149976418);
	ur1 = tr2;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr3 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr3+1)->it_r = Current;
	RTAR(tr3,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_155, (EIF_POINTER)(0),1041, 0, 0, 1, -1, tr3, 0);
	}
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(325, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("id",2,26980);
	ur1 = tr1;
	tr2 = RTMS_EX_H("test_job",8,1149976418);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(327, "id", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(908, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("name",4,1851878757);
	ur1 = tr1;
	tr2 = RTMS_EX_H("test_job",8,1149976418);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(328, "name", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(908, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("is_enabled",10,2132972132);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(331, "is_enabled", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("not_running",11,1523278695);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(332, "is_running", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_job_with_name */
void F53_1065 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_job_with_name";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,Current);
	RTLR(7,tr4);
	RTLR(8,tr5);
	RTLR(9,ur3);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1088);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1088);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000011, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(17, 0x01).id);
	tr2 = RTMS_EX_H("job1",4,1785684529);
	ur1 = tr2;
	tr3 = RTMS_EX_H("My Test Job",11,2036708450);
	ur2 = tr3;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr4 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr4+1)->it_r = Current;
	RTAR(tr4,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_155, (EIF_POINTER)(0),1041, 0, 0, 1, -1, tr4, 0);
	}
	ur3 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(326, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("id",2,26980);
	ur1 = tr1;
	tr2 = RTMS_EX_H("job1",4,1785684529);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(327, "id", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(908, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("name",4,1851878757);
	ur1 = tr1;
	tr2 = RTMS_EX_H("My Test Job",11,2036708450);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(328, "name", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(908, dtype))(Current, ur1x, ur2x, ur3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
}

/* {LIB_TESTS}.test_job_execute */
void F53_1066 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_job_execute";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,ur2);
	RTLR(8,loc2);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 52, Current, 2, 0, 1089);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1089);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 1040, 0x04000000, 1); /* executed */
	*(EIF_BOOLEAN *)(Current + RTWA(1040, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAL(1, 0xF8000011, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(17, 0x01).id);
	tr2 = RTMS_EX_H("test_job",8,1149976418);
	ur1 = tr2;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr3 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr3+1)->it_r = Current;
	RTAR(tr3,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_156, (EIF_POINTER)(0),1042, 0, 0, 1, -1, tr3, 0);
	}
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(325, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(348, "execute", loc1))(loc1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("executed",8,314230372);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1040, dtype));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("run_count",9,1896353652);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(335, "run_count", loc1));
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(912, dtype))(Current, ur1x, ui4_1x, ui4_2x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("last_result",11,1768500852);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(334, "last_result", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(921, dtype))(Current, ur1x, ur2x);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(334, "last_result", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		RTHOOK(8);
		tr1 = RTMS_EX_H("success",7,1797825139);
		ur1 = tr1;
		tb1 = *(EIF_BOOLEAN *)(loc2 + RTVA(354, "is_success", loc2));
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {LIB_TESTS}.test_job_enable_disable */
void F53_1067 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_job_enable_disable";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1090);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1090);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000011, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(17, 0x01).id);
	tr2 = RTMS_EX_H("test_job",8,1149976418);
	ur1 = tr2;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr3 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr3+1)->it_r = Current;
	RTAR(tr3,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_155, (EIF_POINTER)(0),1041, 0, 0, 1, -1, tr3, 0);
	}
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(325, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("initially_enabled",17,1901750884);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(331, "is_enabled", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(347, "disable", loc1))(loc1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("now_disabled",12,1758482532);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(331, "is_enabled", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(346, "enable", loc1))(loc1);
	RTHOOK(6);
	tr1 = RTMS_EX_H("re_enabled",10,1911440228);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(331, "is_enabled", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
#undef ub1
}

/* {LIB_TESTS}.test_job_options */
void F53_1068 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_job_options";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1091);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1091);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000011, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(17, 0x01).id);
	tr2 = RTMS_EX_H("test_job",8,1149976418);
	ur1 = tr2;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr3 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr3+1)->it_r = Current;
	RTAR(tr3,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_155, (EIF_POINTER)(0),1041, 0, 0, 1, -1, tr3, 0);
	}
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(325, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(343, "set_allow_concurrent", loc1))(loc1, ub1x);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(344, "set_retry_count", loc1))(loc1, ui4_1x);
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 60L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(345, "set_timeout", loc1))(loc1, ui4_1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("allow_concurrent",16,336687476);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(338, "allow_concurrent", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("retry_count",11,86428020);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 3L);
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(339, "retry_count", loc1));
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(912, dtype))(Current, ur1x, ui4_1x, ui4_2x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("timeout",7,164355956);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 60L);
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(340, "timeout_seconds", loc1));
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(912, dtype))(Current, ur1x, ui4_1x, ui4_2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {LIB_TESTS}.test_new_job_result_success */
void F53_1069 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_new_job_result_success";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1092);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1092);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000012, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(18, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 100L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(352, Dtype(tr1)))(tr1, ui8_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("is_success",10,619583603);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(354, "is_success", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("not_failure",11,1853793381);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(358, "is_failure", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("duration",8,959578478);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 100L);
	ti8_1 = *(EIF_INTEGER_64 *)(loc1 + RTVA(356, "duration_ms", loc1));
	ti4_1 = (EIF_INTEGER_32) ti8_1;
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(912, dtype))(Current, ur1x, ui4_1x, ui4_2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ui8_1
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {LIB_TESTS}.test_new_job_result_failure */
void F53_1070 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_new_job_result_failure";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1093);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1093);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000012, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(18, 0x01).id);
	tr2 = RTMS_EX_H("Something went wrong",20,178397287);
	ur1 = tr2;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 50L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(353, Dtype(tr1)))(tr1, ur1x, ui8_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("not_success",11,1841700467);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(354, "is_success", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("is_failure",10,631676517);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(358, "is_failure", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("error_message",13,383229029);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(355, "error_message", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(921, dtype))(Current, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui8_1
#undef ub1
}

/* {LIB_TESTS}.test_job_result_to_string */
void F53_1071 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_job_result_to_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,Current);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1094);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1094);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000012, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(18, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 100L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(352, Dtype(tr1)))(tr1, ui8_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("contains_success",16,986525811);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(359, "to_string", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr3 = RTMS_EX_H("SUCCESS",7,121919827);
	ur2 = tr3;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4645, "has_substring", tr2))(tr2, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("contains_duration",17,1572491886);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(359, "to_string", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr3 = RTMS_EX_H("100ms",5,808856435);
	ur2 = tr3;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4645, "has_substring", tr2))(tr2, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui8_1
#undef ub1
}

/* {LIB_TESTS}.test_new_scheduler */
void F53_1072 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_new_scheduler";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1095);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1095);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000014, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(20, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(386, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("not_running",11,1523278695);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(391, "is_running", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("no_jobs",7,1534986867);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(387, "job_count", loc1))(loc1)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(912, dtype))(Current, ur1x, ui4_1x, ui4_2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {LIB_TESTS}.test_scheduler_schedule_cron */
void F53_1073 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_scheduler_schedule_cron";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,ur2);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 52, Current, 2, 0, 1096);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1096);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000014, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(20, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(386, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000011, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(17, 0x01).id);
	tr2 = RTMS_EX_H("job1",4,1785684529);
	ur1 = tr2;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr3 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr3+1)->it_r = Current;
	RTAR(tr3,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_155, (EIF_POINTER)(0),1041, 0, 0, 1, -1, tr3, 0);
	}
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(325, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(loc2);
	tr1 = RTMS_EX_H("*/5 * * * *",11,404047402);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(394, "schedule_cron", loc1))(loc1, ur1x, ur2x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("has_job",7,450322530);
	ur1 = tr1;
	tr2 = RTMS_EX_H("job1",4,1785684529);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(398, "has_job", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("job_count",9,1825753716);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(387, "job_count", loc1))(loc1)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(912, dtype))(Current, ur1x, ui4_1x, ui4_2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {LIB_TESTS}.test_scheduler_schedule_interval */
void F53_1074 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_scheduler_schedule_interval";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,ur2);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 52, Current, 2, 0, 1097);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1097);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000014, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(20, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(386, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000011, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(17, 0x01).id);
	tr2 = RTMS_EX_H("job1",4,1785684529);
	ur1 = tr2;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr3 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr3+1)->it_r = Current;
	RTAR(tr3,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_155, (EIF_POINTER)(0),1041, 0, 0, 1, -1, tr3, 0);
	}
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(325, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(loc2);
	ui4_1 = ((EIF_INTEGER_32) 30L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(395, "schedule_interval", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("has_job",7,450322530);
	ur1 = tr1;
	tr2 = RTMS_EX_H("job1",4,1785684529);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(398, "has_job", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ub1
}

/* {LIB_TESTS}.test_scheduler_schedule_at */
void F53_1075 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_scheduler_schedule_at";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,ur2);
	RTLR(9,loc3);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 52, Current, 3, 0, 1098);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1098);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000014, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(20, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(386, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000011, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(17, 0x01).id);
	tr2 = RTMS_EX_H("job1",4,1785684529);
	ur1 = tr2;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr3 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr3+1)->it_r = Current;
	RTAR(tr3,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_155, (EIF_POINTER)(0),1041, 0, 0, 1, -1, tr3, 0);
	}
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(325, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF800011D, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(285, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5179, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5195, "day_add", loc3))(loc3, ui4_1x);
	RTHOOK(5);
	ur1 = RTCCL(loc2);
	ur2 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(396, "schedule_at", loc1))(loc1, ur1x, ur2x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("has_job",7,450322530);
	ur1 = tr1;
	tr2 = RTMS_EX_H("job1",4,1785684529);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(398, "has_job", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ub1
}

/* {LIB_TESTS}.test_scheduler_unschedule */
void F53_1076 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_scheduler_unschedule";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,ur2);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 52, Current, 2, 0, 1099);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1099);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000014, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(20, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(386, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000011, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(17, 0x01).id);
	tr2 = RTMS_EX_H("job1",4,1785684529);
	ur1 = tr2;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr3 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr3+1)->it_r = Current;
	RTAR(tr3,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_155, (EIF_POINTER)(0),1041, 0, 0, 1, -1, tr3, 0);
	}
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(325, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(loc2);
	ui4_1 = ((EIF_INTEGER_32) 30L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(395, "schedule_interval", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("has_job",7,450322530);
	ur1 = tr1;
	tr2 = RTMS_EX_H("job1",4,1785684529);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(398, "has_job", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("job1",4,1785684529);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(397, "unschedule", loc1))(loc1, ur1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("no_job",6,1817932130);
	ur1 = tr1;
	tr2 = RTMS_EX_H("job1",4,1785684529);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(398, "has_job", loc1))(loc1, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ub1
}

/* {LIB_TESTS}.test_scheduler_start_stop */
void F53_1077 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_scheduler_start_stop";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1100);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1100);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000014, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(20, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(386, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("not_running",11,1523278695);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(391, "is_running", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(401, "start", loc1))(loc1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("running",7,1479403367);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(391, "is_running", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(402, "stop", loc1))(loc1);
	RTHOOK(6);
	tr1 = RTMS_EX_H("stopped",7,2014772324);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(391, "is_running", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ub1
}

/* {LIB_TESTS}.test_scheduler_pause_resume */
void F53_1078 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_scheduler_pause_resume";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 52, Current, 1, 0, 1101);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1101);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000014, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(20, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(386, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(401, "start", loc1))(loc1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("not_paused",10,1688298596);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(392, "is_paused", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(403, "pause", loc1))(loc1);
	RTHOOK(5);
	tr1 = RTMS_EX_H("paused",6,43962980);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(392, "is_paused", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(404, "resume", loc1))(loc1);
	RTHOOK(7);
	tr1 = RTMS_EX_H("resumed",7,1565684836);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(392, "is_paused", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(966, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ub1
}

/* {LIB_TESTS}.test_scheduler_trigger_now */
void F53_1079 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_scheduler_trigger_now";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,ur2);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 52, Current, 2, 0, 1102);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1102);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 1040, 0x04000000, 1); /* executed */
	*(EIF_BOOLEAN *)(Current + RTWA(1040, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAL(1, 0xF8000014, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(20, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(386, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0xF8000011, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(17, 0x01).id);
	tr2 = RTMS_EX_H("job1",4,1785684529);
	ur1 = tr2;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr3 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr3+1)->it_r = Current;
	RTAR(tr3,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_156, (EIF_POINTER)(0),1042, 0, 0, 1, -1, tr3, 0);
	}
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(325, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(3,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ur1 = RTCCL(loc2);
	ui4_1 = ((EIF_INTEGER_32) 3600L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(395, "schedule_interval", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("job1",4,1785684529);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(405, "trigger_now", loc1))(loc1, ur1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("executed",8,314230372);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1040, dtype));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(965, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ub1
}

/* {LIB_TESTS}.test_scheduler_get_job */
void F53_1080 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_scheduler_get_job";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,ur2);
	RTLR(9,loc3);
	RTLR(10,ur3);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 52, Current, 3, 0, 1103);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1103);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000014, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(20, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(386, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000011, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(17, 0x01).id);
	tr2 = RTMS_EX_H("job1",4,1785684529);
	ur1 = tr2;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr3 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr3+1)->it_r = Current;
	RTAR(tr3,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_155, (EIF_POINTER)(0),1041, 0, 0, 1, -1, tr3, 0);
	}
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(325, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(loc2);
	ui4_1 = ((EIF_INTEGER_32) 30L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(395, "schedule_interval", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("job_found",9,1825776740);
	ur1 = tr1;
	tr2 = RTMS_EX_H("job1",4,1785684529);
	ur2 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(399, "job", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(921, dtype))(Current, ur1x, ur2x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("job1",4,1785684529);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(399, "job", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = RTCCL(tr1);
	if (EIF_TEST(loc3)) {
		RTHOOK(6);
		tr1 = RTMS_EX_H("job_id",6,1859677028);
		ur1 = tr1;
		tr2 = RTMS_EX_H("job1",4,1785684529);
		ur2 = tr2;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(327, "id", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur3 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(908, dtype))(Current, ur1x, ur2x, ur3x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
}

/* {LIB_TESTS}.test_scheduler_pending_jobs */
void F53_1081 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_scheduler_pending_jobs";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,ur2);
	RTLR(9,loc3);
	RTLR(10,loc4);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 52, Current, 4, 0, 1104);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1104);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000014, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(20, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(386, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000011, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(17, 0x01).id);
	tr2 = RTMS_EX_H("job1",4,1785684529);
	ur1 = tr2;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr3 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr3+1)->it_r = Current;
	RTAR(tr3,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_155, (EIF_POINTER)(0),1041, 0, 0, 1, -1, tr3, 0);
	}
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(325, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF8000011, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(17, 0x01).id);
	tr2 = RTMS_EX_H("job2",4,1785684530);
	ur1 = tr2;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr3 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr3+1)->it_r = Current;
	RTAR(tr3,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_155, (EIF_POINTER)(0),1041, 0, 0, 1, -1, tr3, 0);
	}
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(325, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(3,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ur1 = RTCCL(loc2);
	ui4_1 = ((EIF_INTEGER_32) 30L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(395, "schedule_interval", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(5);
	ur1 = RTCCL(loc3);
	ui4_1 = ((EIF_INTEGER_32) 60L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(395, "schedule_interval", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(6);
	RTDBGAL(4, 0xF800015B, 0, 0); /* loc4 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(388, "pending_jobs", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	tr1 = RTMS_EX_H("pending_count",13,1586186612);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 2L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3049, "count", loc4))(loc4)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(912, dtype))(Current, ur1x, ui4_1x, ui4_2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
}

/* {LIB_TESTS}.executed */
EIF_TYPED_VALUE F53_1082 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(1040,Dtype(Current)));
	return r;
}


/* {LIB_TESTS}.empty_action */
void F53_1083 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "empty_action";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 52, Current, 0, 0, 1106);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1106);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {LIB_TESTS}.mark_executed */
void F53_1084 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "mark_executed";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 52, Current, 0, 0, 1107);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(52, Current, 1107);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 1040, 0x04000000, 1); /* executed */
	*(EIF_BOOLEAN *)(Current + RTWA(1040, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit53 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
