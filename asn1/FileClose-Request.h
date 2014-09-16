/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1A"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_FileClose_Request_H_
#define	_FileClose_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Integer32.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FileClose-Request */
typedef Integer32_t	 FileClose_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FileClose_Request;
asn_struct_free_f FileClose_Request_free;
asn_struct_print_f FileClose_Request_print;
asn_constr_check_f FileClose_Request_constraint;
ber_type_decoder_f FileClose_Request_decode_ber;
der_type_encoder_f FileClose_Request_encode_der;
xer_type_decoder_f FileClose_Request_decode_xer;
xer_type_encoder_f FileClose_Request_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _FileClose_Request_H_ */