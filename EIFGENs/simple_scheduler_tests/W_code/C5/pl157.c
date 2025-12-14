/*
 * Code for class PLATFORM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F157_2088(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2089(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2090(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2091(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2092(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2093(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2094(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2095(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2096(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2097(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2098(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2099(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2100(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2101(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2102(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2103(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2104(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2105(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2106(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2107(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2108(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2109(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2110(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2111(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2112(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2113(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2114(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2115(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2116(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2117(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2118(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2119(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2120(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2121(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2122(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2123(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2124(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2125(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2126(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2127(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2128(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2129(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2130(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2131(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2132(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2133(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2134(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2135(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2136(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2137(EIF_REFERENCE);
extern EIF_TYPED_VALUE F157_2138(EIF_REFERENCE);
extern void EIF_Minit157(void);

#ifdef __cplusplus
}
#endif

#include <string.h>
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PLATFORM}.is_thread_capable */
EIF_TYPED_VALUE F157_2088 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_thread_capable";
	RTEX;
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
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2109);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(156, Current, 2109);
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_thread_capable__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {PLATFORM}.is_scoop_capable */
EIF_TYPED_VALUE F157_2089 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_scoop_capable";
	RTEX;
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
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2110);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(156, Current, 2110);
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_scoop_capable__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {PLATFORM}.is_dotnet */
EIF_TYPED_VALUE F157_2090 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_dotnet";
	RTEX;
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
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2111);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(156, Current, 2111);
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_dotnet__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {PLATFORM}.is_windows */
EIF_TYPED_VALUE F157_2091 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_windows";
	RTEX;
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
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2112);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(156, Current, 2112);
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {PLATFORM}.is_unix */
EIF_TYPED_VALUE F157_2092 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_unix";
	RTEX;
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
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2113);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(156, Current, 2113);
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_unix__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {PLATFORM}.is_vms */
EIF_TYPED_VALUE F157_2093 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_vms";
	RTEX;
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
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2114);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(156, Current, 2114);
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_vms__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {PLATFORM}.is_mac */
EIF_TYPED_VALUE F157_2094 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_mac";
	RTEX;
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
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2115);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(156, Current, 2115);
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_mac__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {PLATFORM}.is_vxworks */
EIF_TYPED_VALUE F157_2095 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_vxworks";
	RTEX;
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
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2116);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(156, Current, 2116);
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_vxworks__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {PLATFORM}.is_little_endian */
RTOID (F157_2096)
EIF_TYPED_VALUE F157_2096 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_little_endian";
	RTEX;
	EIF_NATURAL_16 loc1 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_8 loc2 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_BOOLEAN)
	RTOTDB(EIF_BOOLEAN, F157_2096);
	dtype = Dtype(Current);

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT16, &loc1);
	RTLU(SK_UINT8, &loc2);
	RTLU(SK_UINT8, &loc3);
	
	RTEAA(l_feature_name, 156, Current, 3, 0, 2117);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(156, Current, 2117);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(1, 0x34000000, 1, 0); /* loc1 */
	loc1 = (EIF_NATURAL_16) (EIF_NATURAL_16) ((EIF_INTEGER_32) 17185L);
	RTHOOK(2);
	RTDBGAL(2, 0x30000000, 1, 0); /* loc2 */
	loc2 = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 33L);
	RTHOOK(3);
	up1 = (EIF_NATURAL_16 *) &(loc1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	memcpy((void *)(EIF_NATURAL_8 *) &(loc3), (const void *) up1, (size_t) ui4_1);
	RTHOOK(4);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc3 == loc2);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef Result
}

/* {PLATFORM}.is_64_bits */
EIF_TYPED_VALUE F157_2097 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_64_bits";
	RTEX;
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
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2118);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(156, Current, 2118);
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_64_bits__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {PLATFORM}.boolean_bytes */
EIF_TYPED_VALUE F157_2098 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "boolean_bytes";
	RTEX;
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
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2119);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(156, Current, 2119);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_boolean_bytes__i4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {PLATFORM}.character_8_bytes */
EIF_TYPED_VALUE F157_2099 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {PLATFORM}.character_32_bytes */
EIF_TYPED_VALUE F157_2100 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {PLATFORM}.natural_8_bytes */
EIF_TYPED_VALUE F157_2101 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {PLATFORM}.natural_16_bytes */
EIF_TYPED_VALUE F157_2102 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {PLATFORM}.natural_32_bytes */
EIF_TYPED_VALUE F157_2103 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {PLATFORM}.natural_64_bytes */
EIF_TYPED_VALUE F157_2104 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {PLATFORM}.integer_8_bytes */
EIF_TYPED_VALUE F157_2105 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {PLATFORM}.integer_16_bytes */
EIF_TYPED_VALUE F157_2106 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {PLATFORM}.integer_32_bytes */
EIF_TYPED_VALUE F157_2107 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {PLATFORM}.integer_64_bytes */
EIF_TYPED_VALUE F157_2108 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {PLATFORM}.real_32_bytes */
EIF_TYPED_VALUE F157_2109 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {PLATFORM}.real_64_bytes */
EIF_TYPED_VALUE F157_2110 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {PLATFORM}.pointer_bytes */
EIF_TYPED_VALUE F157_2111 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "pointer_bytes";
	RTEX;
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
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2132);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(156, Current, 2132);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_pointer_bytes__i4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {PLATFORM}.boolean_bits */
EIF_TYPED_VALUE F157_2112 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "boolean_bits";
	RTEX;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2133);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(156, Current, 2133);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1897, dtype))(Current)).it_i4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 8L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {PLATFORM}.character_8_bits */
EIF_TYPED_VALUE F157_2113 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {PLATFORM}.character_32_bits */
EIF_TYPED_VALUE F157_2114 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	return r;
}

/* {PLATFORM}.natural_8_bits */
EIF_TYPED_VALUE F157_2115 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {PLATFORM}.natural_16_bits */
EIF_TYPED_VALUE F157_2116 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	return r;
}

/* {PLATFORM}.natural_32_bits */
EIF_TYPED_VALUE F157_2117 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	return r;
}

/* {PLATFORM}.natural_64_bits */
EIF_TYPED_VALUE F157_2118 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	return r;
}

/* {PLATFORM}.integer_8_bits */
EIF_TYPED_VALUE F157_2119 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {PLATFORM}.integer_16_bits */
EIF_TYPED_VALUE F157_2120 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	return r;
}

/* {PLATFORM}.integer_32_bits */
EIF_TYPED_VALUE F157_2121 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	return r;
}

/* {PLATFORM}.integer_64_bits */
EIF_TYPED_VALUE F157_2122 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	return r;
}

/* {PLATFORM}.real_32_bits */
EIF_TYPED_VALUE F157_2123 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	return r;
}

/* {PLATFORM}.real_64_bits */
EIF_TYPED_VALUE F157_2124 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	return r;
}

/* {PLATFORM}.pointer_bits */
EIF_TYPED_VALUE F157_2125 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "pointer_bits";
	RTEX;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2146);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(156, Current, 2146);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1910, dtype))(Current)).it_i4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 8L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {PLATFORM}.character_bytes */
EIF_TYPED_VALUE F157_2126 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "character_bytes";
	RTEX;
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
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2147);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(156, Current, 2147);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_character_bytes__i4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {PLATFORM}.wide_character_bytes */
EIF_TYPED_VALUE F157_2127 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "wide_character_bytes";
	RTEX;
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
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2148);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(156, Current, 2148);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_wide_character_bytes__i4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {PLATFORM}.integer_bytes */
EIF_TYPED_VALUE F157_2128 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "integer_bytes";
	RTEX;
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
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2149);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(156, Current, 2149);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_integer_bytes__i4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {PLATFORM}.real_bytes */
EIF_TYPED_VALUE F157_2129 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "real_bytes";
	RTEX;
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
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2150);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(156, Current, 2150);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_real_bytes__i4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {PLATFORM}.double_bytes */
EIF_TYPED_VALUE F157_2130 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "double_bytes";
	RTEX;
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
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2100);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(156, Current, 2100);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_double_bytes__i4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {PLATFORM}.character_bits */
EIF_TYPED_VALUE F157_2131 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "character_bits";
	RTEX;
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
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2101);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(156, Current, 2101);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {PLATFORM}.integer_bits */
EIF_TYPED_VALUE F157_2132 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "integer_bits";
	RTEX;
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
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2102);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(156, Current, 2102);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {PLATFORM}.real_bits */
EIF_TYPED_VALUE F157_2133 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "real_bits";
	RTEX;
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
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2103);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(156, Current, 2103);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {PLATFORM}.double_bits */
EIF_TYPED_VALUE F157_2134 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "double_bits";
	RTEX;
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
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2104);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(156, Current, 2104);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {PLATFORM}.maximum_character_code */
EIF_TYPED_VALUE F157_2135 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "maximum_character_code";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2105);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(156, Current, 2105);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4426, 250))(Current)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 127L))) {
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

/* {PLATFORM}.maximum_integer */
EIF_TYPED_VALUE F157_2136 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "maximum_integer";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2106);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(156, Current, 2106);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4000, 223))(Current)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
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

/* {PLATFORM}.minimum_character_code */
EIF_TYPED_VALUE F157_2137 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "minimum_character_code";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2107);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(156, Current, 2107);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4425, 250))(Current)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 0L))) {
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

/* {PLATFORM}.minimum_integer */
EIF_TYPED_VALUE F157_2138 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "minimum_integer";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 156, Current, 0, 0, 2108);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(156, Current, 2108);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3999, 223))(Current)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 0L))) {
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

void EIF_Minit157 (void)
{
	GTCX
	RTOTS (2096,F157_2096)
}


#ifdef __cplusplus
}
#endif
