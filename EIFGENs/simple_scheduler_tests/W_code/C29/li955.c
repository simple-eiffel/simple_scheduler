/*
 * Code for class LINKED_LIST_CURSOR [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F955_1914(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F955_1915(EIF_REFERENCE);
extern EIF_TYPED_VALUE F955_1916(EIF_REFERENCE);
extern EIF_TYPED_VALUE F955_1917(EIF_REFERENCE);
extern void F955_6949(EIF_REFERENCE, int);
extern void EIF_Minit955(void);

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

/* {LINKED_LIST_CURSOR}.make */
void F955_1914 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_b
#define arg3 arg3x.it_b
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_b = * (EIF_BOOLEAN *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU(SK_BOOL,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 954, Current, 0, 3, 1925);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(954, Current, 1925);
	RTCC(arg1, 954, l_feature_name, 1, RTWCT(1716, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 1716, 0xF80003B9, 0); /* active */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1716, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1717, 0x04000000, 1); /* after */
	*(EIF_BOOLEAN *)(Current + RTWA(1717, dtype)) = (EIF_BOOLEAN) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 1718, 0x04000000, 1); /* before */
	*(EIF_BOOLEAN *)(Current + RTWA(1718, dtype)) = (EIF_BOOLEAN) arg3;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {LINKED_LIST_CURSOR}.active */
EIF_TYPED_VALUE F955_1915 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(1716,Dtype(Current)));
	return r;
}


/* {LINKED_LIST_CURSOR}.after */
EIF_TYPED_VALUE F955_1916 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(1717,Dtype(Current)));
	return r;
}


/* {LINKED_LIST_CURSOR}.before */
EIF_TYPED_VALUE F955_1917 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(1718,Dtype(Current)));
	return r;
}


/* {LINKED_LIST_CURSOR}._invariant */
void F955_6949 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 954, Current, 0, 6948);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("not_both", Current);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1718, dtype));
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(1717, dtype));
	if ((EIF_BOOLEAN) !(EIF_BOOLEAN) (tb1 && tb2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("no_active_not_on", Current);
	tb1 = '\01';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1716, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(1718, dtype));
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(1717, dtype));
		tb1 = (EIF_BOOLEAN) (tb2 || tb3);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
}

void EIF_Minit955 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
