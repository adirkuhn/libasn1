/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_ReportAccessControlledObjects_Request_H_
#define	_ReportAccessControlledObjects_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Identifier.h"
#include "ObjectClass.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ObjectName;

/* ReportAccessControlledObjects-Request */
typedef struct ReportAccessControlledObjects_Request {
	Identifier_t	 accessControlList;
	ObjectClass_t	 objectClass;
	struct ObjectName	*continueAfter	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReportAccessControlledObjects_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReportAccessControlledObjects_Request;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ObjectName.h"

#endif	/* _ReportAccessControlledObjects_Request_H_ */