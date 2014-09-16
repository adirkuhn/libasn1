/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-Object-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_PhysicalStatus_H_
#define	_PhysicalStatus_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhysicalStatus {
	PhysicalStatus_operational	= 0,
	PhysicalStatus_partially_operational	= 1,
	PhysicalStatus_inoperable	= 2,
	PhysicalStatus_needs_commissioning	= 3
} e_PhysicalStatus;

/* PhysicalStatus */
typedef long	 PhysicalStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalStatus;
asn_struct_free_f PhysicalStatus_free;
asn_struct_print_f PhysicalStatus_print;
asn_constr_check_f PhysicalStatus_constraint;
ber_type_decoder_f PhysicalStatus_decode_ber;
der_type_encoder_f PhysicalStatus_encode_der;
xer_type_decoder_f PhysicalStatus_decode_xer;
xer_type_encoder_f PhysicalStatus_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _PhysicalStatus_H_ */
