/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_DeleteEventAction_Response_H_
#define	_DeleteEventAction_Response_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Unsigned32.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DeleteEventAction-Response */
typedef Unsigned32_t	 DeleteEventAction_Response_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DeleteEventAction_Response;
asn_struct_free_f DeleteEventAction_Response_free;
asn_struct_print_f DeleteEventAction_Response_print;
asn_constr_check_f DeleteEventAction_Response_constraint;
ber_type_decoder_f DeleteEventAction_Response_decode_ber;
der_type_encoder_f DeleteEventAction_Response_encode_der;
xer_type_decoder_f DeleteEventAction_Response_decode_xer;
xer_type_encoder_f DeleteEventAction_Response_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _DeleteEventAction_Response_H_ */