/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_OperationState_H_
#define	_OperationState_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum OperationState {
	OperationState_idle	= 0,
	OperationState_loaded	= 1,
	OperationState_ready	= 2,
	OperationState_executing	= 3,
	OperationState_motion_paused	= 4,
	OperationState_manualInterventionRequired	= 5
} e_OperationState;

/* OperationState */
typedef long	 OperationState_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OperationState;
asn_struct_free_f OperationState_free;
asn_struct_print_f OperationState_print;
asn_constr_check_f OperationState_constraint;
ber_type_decoder_f OperationState_decode_ber;
der_type_encoder_f OperationState_encode_der;
xer_type_decoder_f OperationState_decode_xer;
xer_type_encoder_f OperationState_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _OperationState_H_ */
