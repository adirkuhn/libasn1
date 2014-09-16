/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "IEC61850"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_GSEMngtPdu_H_
#define	_GSEMngtPdu_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "OCTET_STRING.h"
#include "GSEMngtRequests.h"
#include "GSEMngtResponses.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GSEMngtPdu__req_or_resp_PR {
	GSEMngtPdu__req_or_resp_PR_NOTHING,	/* No components present */
	GSEMngtPdu__req_or_resp_PR_requests,
	GSEMngtPdu__req_or_resp_PR_responses
} GSEMngtPdu__req_or_resp_PR;

/* GSEMngtPdu */
typedef struct GSEMngtPdu {
	long	 stateID;
	OCTET_STRING_t	*security	/* OPTIONAL */;
	struct GSEMngtPdu__req_or_resp {
		GSEMngtPdu__req_or_resp_PR present;
		union GSEMngtPdu__req_or_resp_u {
			GSEMngtRequests_t	 requests;
			GSEMngtResponses_t	 responses;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} req_or_resp;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GSEMngtPdu_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GSEMngtPdu;

#ifdef __cplusplus
}
#endif

#endif	/* _GSEMngtPdu_H_ */