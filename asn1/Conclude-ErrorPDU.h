/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_Conclude_ErrorPDU_H_
#define	_Conclude_ErrorPDU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ServiceError.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Conclude-ErrorPDU */
typedef ServiceError_t	 Conclude_ErrorPDU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Conclude_ErrorPDU;
asn_struct_free_f Conclude_ErrorPDU_free;
asn_struct_print_f Conclude_ErrorPDU_print;
asn_constr_check_f Conclude_ErrorPDU_constraint;
ber_type_decoder_f Conclude_ErrorPDU_decode_ber;
der_type_encoder_f Conclude_ErrorPDU_encode_der;
xer_type_decoder_f Conclude_ErrorPDU_decode_xer;
xer_type_encoder_f Conclude_ErrorPDU_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _Conclude_ErrorPDU_H_ */