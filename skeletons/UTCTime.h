/*-
 * Copyright (c) 2003-2017 Lev Walkin <vlm@lionet.info>. All rights reserved.
 * Redistribution and modifications are permitted subject to BSD license.
 */
#ifndef	_UTCTime_H_
#define	_UTCTime_H_

#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef OCTET_STRING_t UTCTime_t;  /* Implemented via OCTET STRING */

extern asn_TYPE_descriptor_t asn_DEF_UTCTime;
extern asn_TYPE_operation_t asn_OP_UTCTime;

#define UTCTime_free OCTET_STRING_free

#if !defined(ASN_DISABLE_PRINT_SUPPORT)
asn_struct_print_f UTCTime_print;
#endif  /* !defined(ASN_DISABLE_PRINT_SUPPORT) */

asn_struct_compare_f UTCTime_compare;
#define UTCTime_copy OCTET_STRING_copy

asn_constr_check_f UTCTime_constraint;

#if !defined(ASN_DISABLE_BER_SUPPORT)
#define UTCTime_decode_ber OCTET_STRING_decode_ber
#define UTCTime_encode_der OCTET_STRING_encode_der
#endif  /* !defined(ASN_DISABLE_BER_SUPPORT) */

#if !defined(ASN_DISABLE_XER_SUPPORT)
#define UTCTime_decode_xer OCTET_STRING_decode_xer_utf8
xer_type_encoder_f UTCTime_encode_xer;
#endif  /* !defined(ASN_DISABLE_XER_SUPPORT) */

#if !defined(ASN_DISABLE_JER_SUPPORT)
#define UTCTime_decode_jer OCTET_STRING_decode_jer_utf8
jer_type_encoder_f UTCTime_encode_jer;
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */

#if !defined(ASN_DISABLE_UPER_SUPPORT)
#define UTCTime_decode_uper OCTET_STRING_decode_uper
#define UTCTime_encode_uper OCTET_STRING_encode_uper
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) */
#if !defined(ASN_DISABLE_APER_SUPPORT)
#define UTCTime_decode_aper OCTET_STRING_decode_aper
#define UTCTime_encode_aper OCTET_STRING_encode_aper
#endif  /* !defined(ASN_DISABLE_APER_SUPPORT) */

#if !defined(ASN_DISABLE_RFILL_SUPPORT)
asn_random_fill_f UTCTime_random_fill;
#endif  /* !defined(ASN_DISABLE_RFILL_SUPPORT) */

/***********************
 * Some handy helpers. *
 ***********************/

struct tm;	/* <time.h> */

/* See asn_GT2time() in GeneralizedTime.h */
time_t asn_UT2time(const UTCTime_t *, struct tm *_optional_tm4fill, int as_gmt);

/* See asn_time2GT() in GeneralizedTime.h */
UTCTime_t *asn_time2UT(UTCTime_t *__opt_ut, const struct tm *, int force_gmt);

#ifdef __cplusplus
}
#endif

#endif	/* _UTCTime_H_ */
