/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_DeleteNamedType_Request_H_
#define	_DeleteNamedType_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "Identifier.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DeleteNamedType_Request__scopeOfDelete {
	DeleteNamedType_Request__scopeOfDelete_specific	= 0,
	DeleteNamedType_Request__scopeOfDelete_aa_specific	= 1,
	DeleteNamedType_Request__scopeOfDelete_domain	= 2,
	DeleteNamedType_Request__scopeOfDelete_vmd	= 3
} e_DeleteNamedType_Request__scopeOfDelete;

/* Forward declarations */
struct ObjectName;

/* DeleteNamedType-Request */
typedef struct DeleteNamedType_Request {
	long	 scopeOfDelete	/* DEFAULT 0 */;
	struct DeleteNamedType_Request__listOfTypeName {
		A_SEQUENCE_OF(struct ObjectName) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *listOfTypeName;
	Identifier_t	*domainName	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DeleteNamedType_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DeleteNamedType_Request;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ObjectName.h"

#endif	/* _DeleteNamedType_Request_H_ */