/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_GetNameList_Request_H_
#define	_GetNameList_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ObjectClass.h"
#include "Identifier.h"
#include "NULL.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GetNameList_Request__objectScope_PR {
	GetNameList_Request__objectScope_PR_NOTHING,	/* No components present */
	GetNameList_Request__objectScope_PR_vmdSpecific,
	GetNameList_Request__objectScope_PR_domainSpecific,
	GetNameList_Request__objectScope_PR_aaSpecific
} GetNameList_Request__objectScope_PR;

/* GetNameList-Request */
typedef struct GetNameList_Request {
	ObjectClass_t	 objectClass;
	struct GetNameList_Request__objectScope {
		GetNameList_Request__objectScope_PR present;
		union GetNameList_Request__objectScope_u {
			NULL_t	 vmdSpecific;
			Identifier_t	 domainSpecific;
			NULL_t	 aaSpecific;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} objectScope;
	Identifier_t	*continueAfter	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GetNameList_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GetNameList_Request;

#ifdef __cplusplus
}
#endif

#endif	/* _GetNameList_Request_H_ */
