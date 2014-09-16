/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-Object-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_EC_Class_H_
#define	_EC_Class_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EC_Class {
	EC_Class_network_triggered	= 0,
	EC_Class_monitored	= 1
} e_EC_Class;

/* EC-Class */
typedef long	 EC_Class_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EC_Class;
asn_struct_free_f EC_Class_free;
asn_struct_print_f EC_Class_print;
asn_constr_check_f EC_Class_constraint;
ber_type_decoder_f EC_Class_decode_ber;
der_type_encoder_f EC_Class_encode_der;
xer_type_decoder_f EC_Class_decode_xer;
xer_type_encoder_f EC_Class_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _EC_Class_H_ */