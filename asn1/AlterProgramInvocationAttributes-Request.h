/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_AlterProgramInvocationAttributes_Request_H_
#define	_AlterProgramInvocationAttributes_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Identifier.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct StartCount;

/* AlterProgramInvocationAttributes-Request */
typedef struct AlterProgramInvocationAttributes_Request {
	Identifier_t	 programInvocation;
	struct StartCount	*startCount	/* DEFAULT cycleCount: 1 */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AlterProgramInvocationAttributes_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AlterProgramInvocationAttributes_Request;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "StartCount.h"

#endif	/* _AlterProgramInvocationAttributes_Request_H_ */
