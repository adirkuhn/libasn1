/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1A"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_FileAttributes_H_
#define	_FileAttributes_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Unsigned32.h"
#include "GeneralizedTime.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FileAttributes */
typedef struct FileAttributes {
	Unsigned32_t	 sizeOfFile;
	GeneralizedTime_t	*lastModified	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FileAttributes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FileAttributes;

#ifdef __cplusplus
}
#endif

#endif	/* _FileAttributes_H_ */
