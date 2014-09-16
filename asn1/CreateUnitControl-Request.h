/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_CreateUnitControl_Request_H_
#define	_CreateUnitControl_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Identifier.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CreateUnitControl-Request */
typedef struct CreateUnitControl_Request {
	Identifier_t	 unitControl;
	struct CreateUnitControl_Request__domains {
		A_SEQUENCE_OF(Identifier_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} domains;
	struct CreateUnitControl_Request__programInvocations {
		A_SEQUENCE_OF(Identifier_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} programInvocations;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CreateUnitControl_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CreateUnitControl_Request;

#ifdef __cplusplus
}
#endif

#endif	/* _CreateUnitControl_Request_H_ */
