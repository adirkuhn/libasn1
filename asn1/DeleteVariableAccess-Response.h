/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_DeleteVariableAccess_Response_H_
#define	_DeleteVariableAccess_Response_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Unsigned32.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DeleteVariableAccess-Response */
typedef struct DeleteVariableAccess_Response {
	Unsigned32_t	 numberMatched;
	Unsigned32_t	 numberDeleted;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DeleteVariableAccess_Response_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DeleteVariableAccess_Response;

#ifdef __cplusplus
}
#endif

#endif	/* _DeleteVariableAccess_Response_H_ */
