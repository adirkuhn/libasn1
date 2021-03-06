/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_DownloadSegment_Request_H_
#define	_DownloadSegment_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Identifier.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DownloadSegment-Request */
typedef Identifier_t	 DownloadSegment_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DownloadSegment_Request;
asn_struct_free_f DownloadSegment_Request_free;
asn_struct_print_f DownloadSegment_Request_print;
asn_constr_check_f DownloadSegment_Request_constraint;
ber_type_decoder_f DownloadSegment_Request_decode_ber;
der_type_encoder_f DownloadSegment_Request_encode_der;
xer_type_decoder_f DownloadSegment_Request_decode_xer;
xer_type_encoder_f DownloadSegment_Request_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _DownloadSegment_Request_H_ */
