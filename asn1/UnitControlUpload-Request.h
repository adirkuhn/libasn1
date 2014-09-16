/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_UnitControlUpload_Request_H_
#define	_UnitControlUpload_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Identifier.h"
#include "NativeInteger.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UnitControlUpload_Request__continueAfter_PR {
	UnitControlUpload_Request__continueAfter_PR_NOTHING,	/* No components present */
	UnitControlUpload_Request__continueAfter_PR_domain,
	UnitControlUpload_Request__continueAfter_PR_ulsmID,
	UnitControlUpload_Request__continueAfter_PR_programInvocation
} UnitControlUpload_Request__continueAfter_PR;

/* UnitControlUpload-Request */
typedef struct UnitControlUpload_Request {
	Identifier_t	 unitControlName;
	struct UnitControlUpload_Request__continueAfter {
		UnitControlUpload_Request__continueAfter_PR present;
		union UnitControlUpload_Request__continueAfter_u {
			Identifier_t	 domain;
			long	 ulsmID;
			Identifier_t	 programInvocation;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *continueAfter;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UnitControlUpload_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UnitControlUpload_Request;

#ifdef __cplusplus
}
#endif

#endif	/* _UnitControlUpload_Request_H_ */