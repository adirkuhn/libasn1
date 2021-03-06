/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_CS_CreateProgramInvocation_Request_H_
#define	_CS_CreateProgramInvocation_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CS_CreateProgramInvocation_Request {
	CS_CreateProgramInvocation_Request_normal	= 0,
	CS_CreateProgramInvocation_Request_controlling	= 1,
	CS_CreateProgramInvocation_Request_controlled	= 2
} e_CS_CreateProgramInvocation_Request;

/* CS-CreateProgramInvocation-Request */
typedef long	 CS_CreateProgramInvocation_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CS_CreateProgramInvocation_Request;
asn_struct_free_f CS_CreateProgramInvocation_Request_free;
asn_struct_print_f CS_CreateProgramInvocation_Request_print;
asn_constr_check_f CS_CreateProgramInvocation_Request_constraint;
ber_type_decoder_f CS_CreateProgramInvocation_Request_decode_ber;
der_type_encoder_f CS_CreateProgramInvocation_Request_encode_der;
xer_type_decoder_f CS_CreateProgramInvocation_Request_decode_xer;
xer_type_encoder_f CS_CreateProgramInvocation_Request_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _CS_CreateProgramInvocation_Request_H_ */
