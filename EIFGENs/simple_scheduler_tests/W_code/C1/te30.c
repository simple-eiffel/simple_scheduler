/*
 * Code for class TEST_APP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F30_723(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_724(EIF_REFERENCE);
extern EIF_TYPED_VALUE F30_725(EIF_REFERENCE);
extern void F30_726(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit30(void);
extern EIF_REFERENCE _A53_131();
extern EIF_REFERENCE _A53_145();
extern EIF_REFERENCE _A53_142();
extern EIF_REFERENCE _A53_125();
extern EIF_REFERENCE _A53_146();
extern EIF_REFERENCE _A53_136();
extern EIF_REFERENCE _A53_152();
extern EIF_REFERENCE _A53_119();
extern EIF_REFERENCE _A53_130();
extern EIF_REFERENCE _A53_141();
extern EIF_REFERENCE _A53_124();
extern EIF_REFERENCE _A53_135();
extern EIF_REFERENCE _A53_118();
extern EIF_REFERENCE _A53_129();
extern EIF_REFERENCE _A53_140();
extern EIF_REFERENCE _A53_144();
extern EIF_REFERENCE _A53_123();
extern EIF_REFERENCE _A53_153();
extern EIF_REFERENCE _A53_134();
extern EIF_REFERENCE _A53_117();
extern EIF_REFERENCE _A53_128();
extern EIF_REFERENCE _A53_139();
extern EIF_REFERENCE _A53_122();
extern EIF_REFERENCE _A53_133();
extern EIF_REFERENCE _A53_116();
extern EIF_REFERENCE _A53_147();
extern EIF_REFERENCE _A53_127();
extern EIF_REFERENCE _A53_151();
extern EIF_REFERENCE _A53_138();
extern EIF_REFERENCE _A53_121();
extern EIF_REFERENCE _A53_149();
extern EIF_REFERENCE _A53_132();
extern EIF_REFERENCE _A53_143();
extern EIF_REFERENCE _A53_126();
extern EIF_REFERENCE _A53_150();
extern EIF_REFERENCE _A53_137();
extern EIF_REFERENCE _A53_120();
extern EIF_REFERENCE _A53_148();

#ifdef __cplusplus
}
#endif

#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TEST_APP}.make */
void F30_723 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,tr3);
	RTLR(6,ur2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 29, Current, 1, 0, 804);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 804);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000034, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(52, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = RTMS_EX_H("simple_scheduler test runner\012",29,759048714);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(476, "put_string", tr1))(tr1, ur1x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = RTMS_EX_H("====================================\012\012",38,1415107850);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(476, "put_string", tr1))(tr1, ur1x);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 724, 0x10000000, 1); /* passed */
	*(EIF_INTEGER_32 *)(Current + RTWA(724, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 725, 0x10000000, 1); /* failed */
	*(EIF_INTEGER_32 *)(Current + RTWA(725, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	tr2 = RTMS_EX_H("Cron Expression Tests\012",22,769641226);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(476, "put_string", tr1))(tr1, ur1x);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(7,1);
	tr2 = RTMS_EX_H("---------------------\012",22,1431923466);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(476, "put_string", tr1))(tr1, ur1x);
	RTHOOK(8);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_116, (EIF_POINTER)(0),1002, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_new_cron_expression",24,37903726);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(9);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_117, (EIF_POINTER)(0),1003, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_cron_expression_every_5_minutes",36,2141532787);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(10);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_118, (EIF_POINTER)(0),1004, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_cron_expression_hourly",27,777264249);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(11);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_119, (EIF_POINTER)(0),1005, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_cron_expression_daily_midnight",35,380694900);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(12);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_120, (EIF_POINTER)(0),1006, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_cron_expression_extended",29,833112420);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(13);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_121, (EIF_POINTER)(0),1007, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_cron_expression_invalid",28,1627646820);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(14);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_122, (EIF_POINTER)(0),1008, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_cron_matches_every_minute",30,1726573925);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(15);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_123, (EIF_POINTER)(0),1009, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_cron_matches_specific_minute",33,1391039845);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(16);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_124, (EIF_POINTER)(0),1010, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_cron_matches_range",23,746437477);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(17);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_125, (EIF_POINTER)(0),1011, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_cron_matches_list",22,808746100);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(18);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_126, (EIF_POINTER)(0),1012, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_cron_matches_step",22,926903920);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(19);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_127, (EIF_POINTER)(0),1013, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_cron_next_fire_time",24,889746533);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(20);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(20,1);
	tr2 = RTMS_EX_H("\012Trigger Tests\012",15,1194964234);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(476, "put_string", tr1))(tr1, ur1x);
	RTHOOK(21);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(21,1);
	tr2 = RTMS_EX_H("--------------\012",15,1567527178);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(476, "put_string", tr1))(tr1, ur1x);
	RTHOOK(22);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_128, (EIF_POINTER)(0),1014, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_new_cron_trigger",21,1563582834);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(23);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_129, (EIF_POINTER)(0),1015, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_new_interval_trigger_seconds",33,364521587);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(24);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_130, (EIF_POINTER)(0),1016, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_new_interval_trigger_minutes",33,1748587891);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(25);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_131, (EIF_POINTER)(0),1017, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_new_interval_trigger_hours",31,68079475);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(26);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_132, (EIF_POINTER)(0),1018, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_new_date_trigger",21,872908146);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(27);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_133, (EIF_POINTER)(0),1019, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_date_trigger_in_seconds",28,1659790451);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(28);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_134, (EIF_POINTER)(0),1020, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_trigger_enable_disable",27,1410558309);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(29);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_135, (EIF_POINTER)(0),1021, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_interval_trigger_max_fires",31,1562423923);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(30);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(30,1);
	tr2 = RTMS_EX_H("\012Job Tests\012",11,1898618378);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(476, "put_string", tr1))(tr1, ur1x);
	RTHOOK(31);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(31,1);
	tr2 = RTMS_EX_H("---------\012",10,1264443146);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(476, "put_string", tr1))(tr1, ur1x);
	RTHOOK(32);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_136, (EIF_POINTER)(0),1022, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_new_job",12,681537378);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(33);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_137, (EIF_POINTER)(0),1023, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_job_with_name",18,1185432933);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(34);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_138, (EIF_POINTER)(0),1024, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_job_execute",16,1521107045);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(35);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_139, (EIF_POINTER)(0),1025, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_job_enable_disable",23,635610469);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(36);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_140, (EIF_POINTER)(0),1026, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_job_options",16,196487539);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(37);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(37,1);
	tr2 = RTMS_EX_H("\012Job Result Tests\012",18,1012124682);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(476, "put_string", tr1))(tr1, ur1x);
	RTHOOK(38);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(38,1);
	tr2 = RTMS_EX_H("----------------\012",17,471867402);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(476, "put_string", tr1))(tr1, ur1x);
	RTHOOK(39);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_141, (EIF_POINTER)(0),1027, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_new_job_result_success",27,145404531);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(40);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_142, (EIF_POINTER)(0),1028, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_new_job_result_failure",27,157497445);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(41);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_143, (EIF_POINTER)(0),1029, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_job_result_to_string",25,102122599);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(42);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(42,1);
	tr2 = RTMS_EX_H("\012Scheduler Tests\012",17,1449501194);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(476, "put_string", tr1))(tr1, ur1x);
	RTHOOK(43);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(43,1);
	tr2 = RTMS_EX_H("---------------\012",16,1855722250);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(476, "put_string", tr1))(tr1, ur1x);
	RTHOOK(44);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_144, (EIF_POINTER)(0),1030, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_new_scheduler",18,559702642);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(45);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_145, (EIF_POINTER)(0),1031, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_scheduler_schedule_cron",28,1019920750);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(46);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_146, (EIF_POINTER)(0),1032, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_scheduler_schedule_interval",32,1050738796);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(47);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_147, (EIF_POINTER)(0),1033, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_scheduler_schedule_at",26,1481060468);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(48);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_148, (EIF_POINTER)(0),1034, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_scheduler_unschedule",25,204598885);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(49);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_149, (EIF_POINTER)(0),1035, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_scheduler_start_stop",25,1802522736);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(50);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_150, (EIF_POINTER)(0),1036, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_scheduler_pause_resume",27,1879588197);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(51);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_151, (EIF_POINTER)(0),1037, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_scheduler_trigger_now",26,1785833591);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(52);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_152, (EIF_POINTER)(0),1038, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_scheduler_get_job",22,836804450);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(53);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,218,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A53_153, (EIF_POINTER)(0),1039, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("test_scheduler_pending_jobs",27,1487715443);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(726, dtype))(Current, ur1x, ur2x);
	RTHOOK(54);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(54,1);
	tr2 = RTMS_EX_H("\012====================================\012",38,1591847690);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(476, "put_string", tr1))(tr1, ur1x);
	RTHOOK(55);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(55,1);
	tr2 = RTMS_EX_H("Results: ",9,501397536);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(724, dtype));
	tr3 = eif_out__i4_s1(ti4_1);
	ur1 = RTCCL(tr3);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4753, "plus", tr2))(tr2, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr2 = RTMS_EX_H(" passed, ",9,1123470880);
	ur1 = tr2;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4753, "plus", tr3))(tr3, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(725, dtype));
	tr3 = eif_out__i4_s1(ti4_1);
	ur1 = RTCCL(tr3);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4753, "plus", tr2))(tr2, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr2 = RTMS_EX_H(" failed\012",8,1816238602);
	ur1 = tr2;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4753, "plus", tr3))(tr3, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(476, "put_string", tr1))(tr1, ur1x);
	RTHOOK(56);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(725, dtype));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(57);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(57,1);
		tr2 = RTMS_EX_H("TESTS FAILED\012",13,1877440778);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(476, "put_string", tr1))(tr1, ur1x);
	} else {
		RTHOOK(58);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(58,1);
		tr2 = RTMS_EX_H("ALL TESTS PASSED\012",17,1459221002);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(476, "put_string", tr1))(tr1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(59);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
}

/* {TEST_APP}.passed */
EIF_TYPED_VALUE F30_724 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(724,Dtype(Current)));
	return r;
}


/* {TEST_APP}.failed */
EIF_TYPED_VALUE F30_725 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(725,Dtype(Current)));
	return r;
}


/* {TEST_APP}.run_test */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F30_726 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "run_test";
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,saved_except);
	RTLIU(8);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLXL;
	
	RTEAA(l_feature_name, 29, Current, 1, 2, 807);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(29, Current, 807);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,319,0xFF01,0xFFF9,0,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 29, l_feature_name, 1, typres0, 0x01);
	}
	RTCC(arg2, 29, l_feature_name, 2, eif_new_type(266, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(2);
		ur1 = NULL;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4570, "call", arg1))(arg1, ur1x);
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = RTMS_EX_H("  PASS: ",8,489410592);
		ur1 = RTCCL(arg2);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4753, "plus", tr2))(tr2, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr2 = RTMS_EX_H("\012",1,10);
		ur1 = tr2;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4753, "plus", tr3))(tr3, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(476, "put_string", tr1))(tr1, ur1x);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 724, 0x10000000, 1); /* passed */
		(*(EIF_INTEGER_32 *)(Current + RTWA(724, dtype)))++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	tr2 = RTMS_EX_H("  FAIL: ",8,301518880);
	ur1 = RTCCL(arg2);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4753, "plus", tr2))(tr2, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr2 = RTMS_EX_H("\012",1,10);
	ur1 = tr2;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4753, "plus", tr3))(tr3, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(476, "put_string", tr1))(tr1, ur1x);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 725, 0x10000000, 1); /* failed */
	(*(EIF_INTEGER_32 *)(Current + RTWA(725, dtype)))++;
	RTHOOK(7);
	RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(8);
	RTTS;
	RTPS;
	RTER;
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(5);
#undef up1
#undef up2
#undef ur1
#undef arg2
#undef arg1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

void EIF_Minit30 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
