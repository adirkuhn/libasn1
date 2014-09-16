/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_Stop_Request_H_
#define	_Stop_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Identifier.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Stop-Request */
typedef struct Stop_Request {
	Identifier_t	 programInvocationName;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Stop_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Stop_Request;

#ifdef __cplusplus
}
#endif

#endif	/* _Stop_Request_H_ */
