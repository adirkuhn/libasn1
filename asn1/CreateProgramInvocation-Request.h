/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_CreateProgramInvocation_Request_H_
#define	_CreateProgramInvocation_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Identifier.h"
#include "BOOLEAN.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CreateProgramInvocation-Request */
typedef struct CreateProgramInvocation_Request {
	Identifier_t	 programInvocationName;
	struct CreateProgramInvocation_Request__listOfDomainNames {
		A_SEQUENCE_OF(Identifier_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} listOfDomainNames;
	BOOLEAN_t	*reusable	/* DEFAULT TRUE */;
	BOOLEAN_t	*monitorType	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CreateProgramInvocation_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CreateProgramInvocation_Request;

#ifdef __cplusplus
}
#endif

#endif	/* _CreateProgramInvocation_Request_H_ */
