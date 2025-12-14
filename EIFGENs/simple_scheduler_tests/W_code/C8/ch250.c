/*
 * Code for class CHARACTER_8_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F250_5750(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5751(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5752(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5753(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5754(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5755(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5756(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5757(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F250_5758(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F250_5759(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F250_5760(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F250_5761(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F250_5762(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5763(EIF_REFERENCE);
extern void F250_5764(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F250_5765(EIF_REFERENCE);
extern void F250_5766(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F250_5767(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5768(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5769(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5770(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5771(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5772(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5773(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5774(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5775(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5776(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5777(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5778(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5779(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5780(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5781(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5782(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5783(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5784(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5785(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5786(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F250_5787(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5788(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5789(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5790(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5791(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5792(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5793(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5794(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5795(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5796(EIF_REFERENCE);
extern EIF_TYPED_VALUE F250_5797(EIF_REFERENCE);
extern void EIF_Minit250(void);

#ifdef __cplusplus
}
#endif

#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CHARACTER_8_REF}.item */
EIF_TYPED_VALUE F250_5750 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422,Dtype(Current)));
	return r;
}


/* {CHARACTER_8_REF}.code */
EIF_TYPED_VALUE F250_5751 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "code";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12629);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12629);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("code_non_negatif", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("code_in_range", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4425, dtype))(Current)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4426, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (Result >= ti4_1) && (EIF_BOOLEAN) (Result <= ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {CHARACTER_8_REF}.natural_32_code */
EIF_TYPED_VALUE F250_5752 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "natural_32_code";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 tc1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12630);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12630);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu4_1 = (EIF_NATURAL_32) ti4_1;
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
}

/* {CHARACTER_8_REF}.hash_code */
EIF_TYPED_VALUE F250_5753 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "hash_code";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12631);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12631);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4424, dtype))(Current)).it_n4);
	RTNHOOK(1,1);
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu4_1)));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {CHARACTER_8_REF}.min_value */
EIF_TYPED_VALUE F250_5754 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {CHARACTER_8_REF}.max_value */
EIF_TYPED_VALUE F250_5755 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 255L);
	return r;
}

/* {CHARACTER_8_REF}.max_ascii_value */
EIF_TYPED_VALUE F250_5756 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 127L);
	return r;
}

/* {CHARACTER_8_REF}.is_less */
EIF_TYPED_VALUE F250_5757 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_less";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 1, 12635);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12635);
	RTCC(arg1, 249, l_feature_name, 1, eif_new_type(249, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4424, dtype))(Current)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4424, "natural_32_code", arg1))(arg1)).it_n4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 < tu4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("asymmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			ur1 = RTCCL(Current);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1951, "is_less", arg1))(arg1, ur1x)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("definition", EX_POST);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4424, dtype))(Current)).it_n4);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4424, "natural_32_code", arg1))(arg1)).it_n4);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (tu4_1 < tu4_2))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {CHARACTER_8_REF}.is_equal */
EIF_TYPED_VALUE F250_5758 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_equal";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 1, 12636);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12636);
	RTCC(arg1, 249, l_feature_name, 1, eif_new_type(249, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(arg1 + RTVA(4422, "item", arg1));
	tc2 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == tc2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12, dtype))(Current, ur1x)).it_b);
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("trichotomy", EX_POST);
		tb1 = '\0';
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1951, "is_less", Current))(Current, ur1x)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			ur1 = RTCCL(Current);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1951, "is_less", arg1))(arg1, ur1x)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {CHARACTER_8_REF}.plus */
EIF_TYPED_VALUE F250_5759 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "plus";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR8, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 1, 12637);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12637);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_increment", EX_PRE);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tr1 = RTLN(eif_new_type(223, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = (EIF_INTEGER_32) (ti4_1 + arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4003, "is_valid_character_8_code", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tc1 = (EIF_CHARACTER_8) (EIF_INTEGER_32) (ti4_1 + arg1);
	Result = (EIF_CHARACTER_8) tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
		uc1 = tc1;
		tr1 = RTLN(eif_new_type(250, 0x00).id);
		*(EIF_CHARACTER_8 *)tr1 = Result;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4430, "difference", tr1))(tr1, uc1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef uc1
#undef arg1
}

/* {CHARACTER_8_REF}.minus */
EIF_TYPED_VALUE F250_5760 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "minus";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR8, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 1, 12638);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12638);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_decrement", EX_PRE);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tr1 = RTLN(eif_new_type(223, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = (EIF_INTEGER_32) (ti4_1 - arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4003, "is_valid_character_8_code", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tc1 = (EIF_CHARACTER_8) (EIF_INTEGER_32) (ti4_1 - arg1);
	Result = (EIF_CHARACTER_8) tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
		uc1 = Result;
		tr1 = RTLN(eif_new_type(250, 0x00).id);
		*(EIF_CHARACTER_8 *)tr1 = tc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4430, "difference", tr1))(tr1, uc1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef uc1
#undef arg1
}

/* {CHARACTER_8_REF}.difference */
EIF_TYPED_VALUE F250_5761 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "difference";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 1, 12639);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12639);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ti4_2 = (EIF_INTEGER_32) (arg1);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("valid_result", EX_POST);
		ui4_1 = Result;
		tc1 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) arg1) + ui4_1);
		tc2 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
		if ((EIF_BOOLEAN)(tc1 == tc2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {CHARACTER_8_REF}.next */
EIF_TYPED_VALUE F250_5762 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "next";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12640);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12640);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tr1 = RTLN(eif_new_type(223, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4003, "is_valid_character_8_code", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tc2 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) tc1) + ui4_1);
	Result = (EIF_CHARACTER_8) tc2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
		uc1 = tc1;
		tr1 = RTLN(eif_new_type(250, 0x00).id);
		*(EIF_CHARACTER_8 *)tr1 = Result;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4430, "difference", tr1))(tr1, uc1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef ui4_1
#undef uc1
}

/* {CHARACTER_8_REF}.previous */
EIF_TYPED_VALUE F250_5763 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "previous";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12641);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12641);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tr1 = RTLN(eif_new_type(223, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4003, "is_valid_character_8_code", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tc2 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) tc1) - ui4_1);
	Result = (EIF_CHARACTER_8) tc2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
		uc1 = tc1;
		tr1 = RTLN(eif_new_type(250, 0x00).id);
		*(EIF_CHARACTER_8 *)tr1 = Result;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4430, "difference", tr1))(tr1, uc1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -1L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef ui4_1
#undef uc1
}

/* {CHARACTER_8_REF}.set_item */
void F250_5764 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_item";
	RTEX;
#define arg1 arg1x.it_c1
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 1, 12642);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12642);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4422, 0x08000000, 1); /* item */
	*(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype)) = (EIF_CHARACTER_8) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {CHARACTER_8_REF}.out */
EIF_TYPED_VALUE F250_5765 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "out";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12643);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12643);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800010A, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(266, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4601, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	uc1 = tc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4791, "append_character", Result))(Result, uc1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uc1
}

/* {CHARACTER_8_REF}.make_from_reference */
void F250_5766 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_reference";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 1, 12644);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12644);
	RTCC(arg1, 249, l_feature_name, 1, eif_new_type(249, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tc1 = *(EIF_CHARACTER_8 *)(arg1 + RTVA(4422, "item", arg1));
	uc1 = tc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4433, dtype))(Current, uc1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("item_set", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
		tc2 = *(EIF_CHARACTER_8 *)(arg1 + RTVA(4422, "item", arg1));
		if ((EIF_BOOLEAN)(tc1 == tc2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef uc1
#undef arg1
}

/* {CHARACTER_8_REF}.to_reference */
EIF_TYPED_VALUE F250_5767 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_reference";
	RTEX;
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12645);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12645);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000F9, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(249, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	uc1 = tc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4433, "set_item", Result))(Result, uc1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("to_reference_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef uc1
}

/* {CHARACTER_8_REF}.to_character_8 */
EIF_TYPED_VALUE F250_5768 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_character_8";
	RTEX;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12646);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12646);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
}

/* {CHARACTER_8_REF}.to_character_32 */
EIF_TYPED_VALUE F250_5769 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_character_32";
	RTEX;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12647);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12647);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x1C000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	tw1 = (EIF_CHARACTER_32) tc1;
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR32; r.it_c4 = Result; return r; }
}

/* {CHARACTER_8_REF}.as_upper */
EIF_TYPED_VALUE F250_5770 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_upper";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12648);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12648);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4457, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4424, dtype))(Current)).it_n4);
	RTNHOOK(1,2);
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	ui4_1 = ti4_1;
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3271, "item", tr1))(tr1, ui4_1x)).it_c1);
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef up1
#undef ui4_1
}

/* {CHARACTER_8_REF}.upper */
EIF_TYPED_VALUE F250_5771 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "upper";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12649);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12649);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4457, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4424, dtype))(Current)).it_n4);
	RTNHOOK(1,2);
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	ui4_1 = ti4_1;
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3271, "item", tr1))(tr1, ui4_1x)).it_c1);
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef up1
#undef ui4_1
}

/* {CHARACTER_8_REF}.as_lower */
EIF_TYPED_VALUE F250_5772 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_lower";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12650);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12650);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4456, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4424, dtype))(Current)).it_n4);
	RTNHOOK(1,2);
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	ui4_1 = ti4_1;
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3271, "item", tr1))(tr1, ui4_1x)).it_c1);
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef up1
#undef ui4_1
}

/* {CHARACTER_8_REF}.lower */
EIF_TYPED_VALUE F250_5773 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "lower";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12651);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12651);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4456, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4424, dtype))(Current)).it_n4);
	RTNHOOK(1,2);
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	ui4_1 = ti4_1;
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3271, "item", tr1))(tr1, ui4_1x)).it_c1);
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef up1
#undef ui4_1
}

/* {CHARACTER_8_REF}.to_hexa_digit */
EIF_TYPED_VALUE F250_5774 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_hexa_digit";
	RTEX;
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_UINT8, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT8, &loc1);
	
	RTEAA(l_feature_name, 249, Current, 1, 0, 12652);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12652);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_hexa_digit", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4447, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x30000000, 1,0); /* Result */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4424, dtype))(Current)).it_n4);
	RTNHOOK(2,1);
	tu1_1 = (EIF_NATURAL_8) tu4_1;
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 79L);
	tu1_2 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_NATURAL_8) tu1_2;
	RTHOOK(3);
	RTDBGAL(1, 0x30000000, 1, 0); /* loc1 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tu1_1 = eif_bit_shift_left(Result,ui4_1);
	ti1_1 = (EIF_INTEGER_8) tu1_1;
	ui4_1 = ((EIF_INTEGER_32) 7L);
	ti1_2 = eif_bit_shift_right(ti1_1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) ti1_2;
	loc1 = (EIF_NATURAL_8) tu1_1;
	RTHOOK(4);
	RTDBGAL(0, 0x30000000, 1,0); /* Result */
	tu1_1 = eif_bit_not(loc1);
	uu1_1 = tu1_1;
	tu1_2 = eif_bit_and(Result,uu1_1);
	uu1_1 = loc1;
	tu1_1 = eif_bit_and(((EIF_NATURAL_8) (Result - (EIF_NATURAL_8) ((EIF_INTEGER_32) 55L))),uu1_1);
	uu1_1 = tu1_1;
	tu1_3 = eif_bit_or(tu1_2,uu1_1);
	Result = (EIF_NATURAL_8) tu1_3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("range", EX_POST);
		tb1 = '\0';
		ti4_1 = (EIF_INTEGER_32) Result;
		if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= ti4_1)) {
			tb1 = (EIF_BOOLEAN) (Result < (EIF_NATURAL_8) ((EIF_INTEGER_32) 16L));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("value", EX_POST);
		tr1 = RTMS_EX_H("0123456789ABCDEF",16,1319696198);
		ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) (Result + (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L)));
		ui4_1 = ti4_1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3271, "item", tr1))(tr1, ui4_1x)).it_c1);
		tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4438, dtype))(Current)).it_c1);
		if ((EIF_BOOLEAN)(tc1 == tc2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.is_alpha */
EIF_TYPED_VALUE F250_5775 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_alpha";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_NATURAL_8 tu1_4;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12653);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12653);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ui4_1 = ti4_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4454, dtype))(Current, ui4_1x)).it_n1);
	RTNHOOK(1,1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	tu1_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_3;
	tu1_4 = eif_bit_or(tu1_2,uu1_1);
	uu1_1 = tu1_4;
	tu1_2 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.is_upper */
EIF_TYPED_VALUE F250_5776 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_upper";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12654);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12654);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ui4_1 = ti4_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4454, dtype))(Current, ui4_1x)).it_n1);
	RTNHOOK(1,1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_3 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.is_lower */
EIF_TYPED_VALUE F250_5777 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_lower";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12655);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12655);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ui4_1 = ti4_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4454, dtype))(Current, ui4_1x)).it_n1);
	RTNHOOK(1,1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_3 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.is_digit */
EIF_TYPED_VALUE F250_5778 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_digit";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12656);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12656);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ui4_1 = ti4_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4454, dtype))(Current, ui4_1x)).it_n1);
	RTNHOOK(1,1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4460, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_3 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.is_hexa_digit */
EIF_TYPED_VALUE F250_5779 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_hexa_digit";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_NATURAL_8 tu1_4;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12657);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12657);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ui4_1 = ti4_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4454, dtype))(Current, ui4_1x)).it_n1);
	RTNHOOK(1,1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4464, dtype))(Current)).it_n1);
	tu1_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4460, dtype))(Current)).it_n1);
	uu1_1 = tu1_3;
	tu1_4 = eif_bit_or(tu1_2,uu1_1);
	uu1_1 = tu1_4;
	tu1_2 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.is_space */
EIF_TYPED_VALUE F250_5780 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_space";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12658);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12658);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ui4_1 = ti4_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4454, dtype))(Current, ui4_1x)).it_n1);
	RTNHOOK(1,1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4461, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_3 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.is_punctuation */
EIF_TYPED_VALUE F250_5781 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_punctuation";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12659);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12659);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ui4_1 = ti4_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4454, dtype))(Current, ui4_1x)).it_n1);
	RTNHOOK(1,1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_3 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.is_alpha_numeric */
EIF_TYPED_VALUE F250_5782 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_alpha_numeric";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_NATURAL_8 tu1_4;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12660);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12660);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ui4_1 = ti4_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4454, dtype))(Current, ui4_1x)).it_n1);
	RTNHOOK(1,1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	tu1_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_3;
	tu1_4 = eif_bit_or(tu1_2,uu1_1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4460, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_4,uu1_1);
	uu1_1 = tu1_3;
	tu1_2 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.is_printable */
EIF_TYPED_VALUE F250_5783 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_printable";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_NATURAL_8 tu1_4;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12661);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12661);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ui4_1 = ti4_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4454, dtype))(Current, ui4_1x)).it_n1);
	RTNHOOK(1,1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	tu1_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_3;
	tu1_4 = eif_bit_or(tu1_2,uu1_1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4460, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_4,uu1_1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_4 = eif_bit_or(tu1_3,uu1_1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4465, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_4,uu1_1);
	uu1_1 = tu1_3;
	tu1_2 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.is_graph */
EIF_TYPED_VALUE F250_5784 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_graph";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_NATURAL_8 tu1_4;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12662);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12662);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ui4_1 = ti4_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4454, dtype))(Current, ui4_1x)).it_n1);
	RTNHOOK(1,1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	tu1_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_3;
	tu1_4 = eif_bit_or(tu1_2,uu1_1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4460, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_4,uu1_1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_4 = eif_bit_or(tu1_3,uu1_1);
	uu1_1 = tu1_4;
	tu1_2 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.is_control */
EIF_TYPED_VALUE F250_5785 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_control";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12663);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12663);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(4422, dtype));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ui4_1 = ti4_1;
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4454, dtype))(Current, ui4_1x)).it_n1);
	RTNHOOK(1,1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_and(tu1_1,uu1_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_3 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef uu1_1
}

/* {CHARACTER_8_REF}.character_types */
EIF_TYPED_VALUE F250_5786 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "character_types";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_UINT8, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 1, 12664);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12664);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 256L))) {
		RTHOOK(2);
		RTDBGAL(0, 0x30000000, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4455, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ui4_1 = arg1;
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3271, "item", tr1))(tr1, ui4_1x)).it_n1);
		Result = (EIF_NATURAL_8) tu1_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {CHARACTER_8_REF}.internal_character_types */
RTOID (F250_5787)
EIF_TYPED_VALUE F250_5787 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "internal_character_types";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F250_5787);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12665);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12665);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF8000234, 0,0); /* Result */
	ui4_1 = ((EIF_INTEGER_32) 256L);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,564,238,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(3);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(4);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(5);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(6);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(7);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(8);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(9);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(10);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(11);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4461, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(12);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4461, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(13);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4461, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(14);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4461, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(15);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4461, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(16);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(17);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(18);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(19);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(20);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(21);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(22);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(23);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(24);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(25);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(26);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(27);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(28);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(29);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(30);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4461, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(31);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4461, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(32);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4461, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(33);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4461, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(34);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4465, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4461, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(35);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(36);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(37);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(38);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(39);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(40);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(41);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(42);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(43);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(44);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(45);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(46);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(47);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(48);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(49);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(50);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4460, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(51);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4460, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(52);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4460, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(53);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4460, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(54);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4460, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(55);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4460, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(56);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4460, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(57);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4460, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(58);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4460, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(59);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4460, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(60);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(61);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(62);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(63);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(64);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(65);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(66);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(67);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4464, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(68);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4464, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(69);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4464, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(70);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4464, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(71);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4464, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(72);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4464, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(73);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(74);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(75);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(76);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(77);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(78);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(79);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(80);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(81);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(82);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(83);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(84);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(85);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(86);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(87);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(88);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(89);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(90);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(91);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(92);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(93);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(94);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(95);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(96);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(97);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(98);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(99);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4464, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(100);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4464, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(101);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4464, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(102);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4464, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(103);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4464, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(104);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4464, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(105);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(106);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(107);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(108);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(109);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(110);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(111);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(112);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(113);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(114);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(115);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(116);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(117);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(118);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(119);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(120);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(121);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(122);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(123);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(124);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(125);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(126);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(127);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(128);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(129);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(130);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(131);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(132);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(133);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(134);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(135);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4465, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4461, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	tu1_2 = eif_bit_or(tu1_3,uu1_1);
	uu1_1 = tu1_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(136);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(137);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(138);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(139);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(140);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(141);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(142);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(143);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(144);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(145);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(146);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(147);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(148);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(149);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(150);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(151);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(152);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(153);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(154);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(155);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(156);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(157);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(158);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(159);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(160);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(161);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4463, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(162);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4465, dtype))(Current)).it_n1);
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4461, dtype))(Current)).it_n1);
	uu1_1 = tu1_2;
	tu1_3 = eif_bit_or(tu1_1,uu1_1);
	uu1_1 = tu1_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(163);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(164);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(165);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(166);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(167);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(168);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(169);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(170);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(171);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(172);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(173);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(174);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(175);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(176);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(177);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(178);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(179);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(180);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(181);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(182);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(183);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(184);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(185);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(186);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(187);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(188);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(189);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(190);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(191);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(192);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(193);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4462, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(194);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(195);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(196);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(197);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(198);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(199);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(200);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(201);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(202);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(203);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(204);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(205);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(206);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(207);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(208);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(209);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(210);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(211);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(212);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(213);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(214);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(215);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(216);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(217);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(218);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(219);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(220);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(221);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(222);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(223);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(224);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4458, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(225);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(226);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(227);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(228);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(229);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(230);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(231);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(232);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(233);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(234);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(235);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(236);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(237);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(238);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(239);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(240);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(241);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(242);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(243);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(244);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(245);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(246);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(247);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(248);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(249);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(250);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(251);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(252);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(253);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(254);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(255);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(256);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	RTHOOK(257);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4459, dtype))(Current)).it_n1);
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3472, "extend", Result))(Result, uu1_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(258);
		RTCT("internal_character_types_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(259);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uu1_1
#undef Result
}

/* {CHARACTER_8_REF}.lower_value */
RTOID (F250_5788)
EIF_TYPED_VALUE F250_5788 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "lower_value";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F250_5788);
	dtype = Dtype(Current);

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12666);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12666);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF8000204, 0,0); /* Result */
	tr1 = RTMS_EX_H("\000\001\002\003\004\005\006\007\010\011\012\013\014\015\016\017\020\021\022\023\024\025\026\027\030\031\032\033\034\035\036\037 !\"#$%&\'()*+,-./0123456789:;<=>\?@abcdefghijklmnopqrstuvwxyz[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\200\201\202\203\204\205\206\207\210\211\212\213\214\215\216\217\220\221\222\223\224\225\226\227\230\231\232\233\234\235\236\237\240\241\242\243\244\245\246\247\250\251\252\253\254\255\256\257\260\261\262\263\264\265\266\267\270\271\272\273\274\275\276\277\340\341\342\343\344\345\346\347\350\351\352\353\354\355\356\357\360\361\362\363\364\365\366\327\370\371\372\373\374\375\376\337\340\341\342\343\344\345\346\347\350\351\352\353\354\355\356\357\360\361\362\363\364\365\366\367\370\371\372\373\374\375\376\377",256,531798015);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4760, "area", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef Result
}

/* {CHARACTER_8_REF}.upper_value */
RTOID (F250_5789)
EIF_TYPED_VALUE F250_5789 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "upper_value";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F250_5789);
	dtype = Dtype(Current);

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 249, Current, 0, 0, 12667);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(249, Current, 12667);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF8000204, 0,0); /* Result */
	tr1 = RTMS_EX_H("\000\001\002\003\004\005\006\007\010\011\012\013\014\015\016\017\020\021\022\023\024\025\026\027\030\031\032\033\034\035\036\037 !\"#$%&\'()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~\200\201\202\203\204\205\206\207\210\211\212\213\214\215\216\217\220\221\222\223\224\225\226\227\230\231\232\233\234\235\236\237\240\241\242\243\244\245\246\247\250\251\252\253\254\255\256\257\260\261\262\263\264\265\266\267\270\271\272\273\274\275\276\277\300\301\302\303\304\305\306\307\310\311\312\313\314\315\316\317\320\321\322\323\324\325\326\327\330\331\332\333\334\335\336\337\300\301\302\303\304\305\306\307\310\311\312\313\314\315\316\317\320\321\322\323\324\325\326\367\330\331\332\333\334\335\336\377",256,1143811327);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4760, "area", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef Result
}

/* {CHARACTER_8_REF}.is_upper_flag */
EIF_TYPED_VALUE F250_5790 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 1U);
	return r;
}

/* {CHARACTER_8_REF}.is_lower_flag */
EIF_TYPED_VALUE F250_5791 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 2U);
	return r;
}

/* {CHARACTER_8_REF}.is_digit_flag */
EIF_TYPED_VALUE F250_5792 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 4U);
	return r;
}

/* {CHARACTER_8_REF}.is_white_space_flag */
EIF_TYPED_VALUE F250_5793 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 8U);
	return r;
}

/* {CHARACTER_8_REF}.is_punctuation_flag */
EIF_TYPED_VALUE F250_5794 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 16U);
	return r;
}

/* {CHARACTER_8_REF}.is_control_flag */
EIF_TYPED_VALUE F250_5795 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 32U);
	return r;
}

/* {CHARACTER_8_REF}.is_hexa_digit_flag */
EIF_TYPED_VALUE F250_5796 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 64U);
	return r;
}

/* {CHARACTER_8_REF}.is_space_flag */
EIF_TYPED_VALUE F250_5797 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 128U);
	return r;
}

void EIF_Minit250 (void)
{
	GTCX
	RTOTS (5787,F250_5787)
	RTOTS (5788,F250_5788)
	RTOTS (5789,F250_5789)
}


#ifdef __cplusplus
}
#endif
