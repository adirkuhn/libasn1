/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_Start_Error_H_
#define	_Start_Error_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ProgramInvocationState.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Start-Error */
typedef ProgramInvocationState_t	 Start_Error_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Start_Error;
asn_struct_free_f Start_Error_free;
asn_struct_print_f Start_Error_print;
asn_constr_check_f Start_Error_constraint;
ber_type_decoder_f Start_Error_decode_ber;
der_type_encoder_f Start_Error_encode_der;
xer_type_decoder_f Start_Error_decode_xer;
xer_type_encoder_f Start_Error_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _Start_Error_H_ */
