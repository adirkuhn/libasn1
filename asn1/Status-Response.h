/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_Status_Response_H_
#define	_Status_Response_H_


#include "asn_application.h"

/* Including external dependencies */
#include "StatusResponse.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Status-Response */
typedef StatusResponse_t	 Status_Response_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Status_Response;
asn_struct_free_f Status_Response_free;
asn_struct_print_f Status_Response_print;
asn_constr_check_f Status_Response_constraint;
ber_type_decoder_f Status_Response_decode_ber;
der_type_encoder_f Status_Response_encode_der;
xer_type_decoder_f Status_Response_decode_xer;
xer_type_encoder_f Status_Response_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _Status_Response_H_ */
