/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_UnsolicitedStatus_H_
#define	_UnsolicitedStatus_H_


#include "asn_application.h"

/* Including external dependencies */
#include "StatusResponse.h"

#ifdef __cplusplus
extern "C" {
#endif

/* UnsolicitedStatus */
typedef StatusResponse_t	 UnsolicitedStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UnsolicitedStatus;
asn_struct_free_f UnsolicitedStatus_free;
asn_struct_print_f UnsolicitedStatus_print;
asn_constr_check_f UnsolicitedStatus_constraint;
ber_type_decoder_f UnsolicitedStatus_decode_ber;
der_type_encoder_f UnsolicitedStatus_encode_der;
xer_type_decoder_f UnsolicitedStatus_decode_xer;
xer_type_encoder_f UnsolicitedStatus_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _UnsolicitedStatus_H_ */
