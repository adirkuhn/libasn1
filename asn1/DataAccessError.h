/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_DataAccessError_H_
#define	_DataAccessError_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DataAccessError {
	DataAccessError_object_invalidated	= 0,
	DataAccessError_hardware_fault	= 1,
	DataAccessError_temporarily_unavailable	= 2,
	DataAccessError_object_access_denied	= 3,
	DataAccessError_object_undefined	= 4,
	DataAccessError_invalid_address	= 5,
	DataAccessError_type_unsupported	= 6,
	DataAccessError_type_inconsistent	= 7,
	DataAccessError_object_attribute_inconsistent	= 8,
	DataAccessError_object_access_unsupported	= 9,
	DataAccessError_object_non_existent	= 10,
	DataAccessError_object_value_invalid	= 11
} e_DataAccessError;

/* DataAccessError */
typedef long	 DataAccessError_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DataAccessError;
asn_struct_free_f DataAccessError_free;
asn_struct_print_f DataAccessError_print;
asn_constr_check_f DataAccessError_constraint;
ber_type_decoder_f DataAccessError_decode_ber;
der_type_encoder_f DataAccessError_encode_der;
xer_type_decoder_f DataAccessError_decode_xer;
xer_type_encoder_f DataAccessError_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _DataAccessError_H_ */
