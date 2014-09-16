/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_DefineSemaphore_Request_H_
#define	_DefineSemaphore_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ObjectName.h"
#include "Unsigned16.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DefineSemaphore-Request */
typedef struct DefineSemaphore_Request {
	ObjectName_t	 semaphoreName;
	Unsigned16_t	 numberOfTokens;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DefineSemaphore_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DefineSemaphore_Request;

#ifdef __cplusplus
}
#endif

#endif	/* _DefineSemaphore_Request_H_ */