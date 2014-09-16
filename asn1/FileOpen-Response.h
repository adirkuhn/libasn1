/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1A"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_FileOpen_Response_H_
#define	_FileOpen_Response_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Integer32.h"
#include "FileAttributes.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FileOpen-Response */
typedef struct FileOpen_Response {
	Integer32_t	 frsmID;
	FileAttributes_t	 fileAttributes;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FileOpen_Response_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FileOpen_Response;

#ifdef __cplusplus
}
#endif

#endif	/* _FileOpen_Response_H_ */
