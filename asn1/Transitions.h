/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-Object-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_Transitions_H_
#define	_Transitions_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Transitions {
	Transitions_idle_to_disabled	= 0,
	Transitions_active_to_disabled	= 1,
	Transitions_disabled_to_idle	= 2,
	Transitions_active_to_idle	= 3,
	Transitions_disabled_to_active	= 4,
	Transitions_idle_to_active	= 5,
	Transitions_any_to_deleted	= 6
} e_Transitions;

/* Transitions */
typedef BIT_STRING_t	 Transitions_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Transitions;
asn_struct_free_f Transitions_free;
asn_struct_print_f Transitions_print;
asn_constr_check_f Transitions_constraint;
ber_type_decoder_f Transitions_decode_ber;
der_type_encoder_f Transitions_encode_der;
xer_type_decoder_f Transitions_decode_xer;
xer_type_encoder_f Transitions_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _Transitions_H_ */