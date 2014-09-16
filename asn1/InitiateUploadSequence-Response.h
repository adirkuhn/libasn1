/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_InitiateUploadSequence_Response_H_
#define	_InitiateUploadSequence_Response_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Integer32.h"
#include "MMSString.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* InitiateUploadSequence-Response */
typedef struct InitiateUploadSequence_Response {
	Integer32_t	 ulsmID;
	struct InitiateUploadSequence_Response__listOfCapabilities {
		A_SEQUENCE_OF(MMSString_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} listOfCapabilities;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InitiateUploadSequence_Response_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InitiateUploadSequence_Response;

#ifdef __cplusplus
}
#endif

#endif	/* _InitiateUploadSequence_Response_H_ */