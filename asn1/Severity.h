/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-Object-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_Severity_H_
#define	_Severity_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Severity */
typedef long	 Severity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Severity;
asn_struct_free_f Severity_free;
asn_struct_print_f Severity_print;
asn_constr_check_f Severity_constraint;
ber_type_decoder_f Severity_decode_ber;
der_type_encoder_f Severity_encode_der;
xer_type_decoder_f Severity_decode_xer;
xer_type_encoder_f Severity_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _Severity_H_ */