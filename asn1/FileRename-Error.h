/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1A"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_FileRename_Error_H_
#define	_FileRename_Error_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FileRename_Error {
	FileRename_Error_source_file	= 0,
	FileRename_Error_destination_file	= 1
} e_FileRename_Error;

/* FileRename-Error */
typedef long	 FileRename_Error_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FileRename_Error;
asn_struct_free_f FileRename_Error_free;
asn_struct_print_f FileRename_Error_print;
asn_constr_check_f FileRename_Error_constraint;
ber_type_decoder_f FileRename_Error_decode_ber;
der_type_encoder_f FileRename_Error_encode_der;
xer_type_decoder_f FileRename_Error_decode_xer;
xer_type_encoder_f FileRename_Error_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _FileRename_Error_H_ */
