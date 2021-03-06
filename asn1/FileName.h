/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_FileName_H_
#define	_FileName_H_


#include "asn_application.h"

/* Including external dependencies */
#include "GraphicString.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FileName */
typedef struct FileName {
	A_SEQUENCE_OF(GraphicString_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FileName_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FileName;

#ifdef __cplusplus
}
#endif

#endif	/* _FileName_H_ */
