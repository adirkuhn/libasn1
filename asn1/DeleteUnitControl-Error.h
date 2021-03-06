/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_DeleteUnitControl_Error_H_
#define	_DeleteUnitControl_Error_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Identifier.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DeleteUnitControl_Error_PR {
	DeleteUnitControl_Error_PR_NOTHING,	/* No components present */
	DeleteUnitControl_Error_PR_domain,
	DeleteUnitControl_Error_PR_programInvocation
} DeleteUnitControl_Error_PR;

/* DeleteUnitControl-Error */
typedef struct DeleteUnitControl_Error {
	DeleteUnitControl_Error_PR present;
	union DeleteUnitControl_Error_u {
		Identifier_t	 domain;
		Identifier_t	 programInvocation;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DeleteUnitControl_Error_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DeleteUnitControl_Error;

#ifdef __cplusplus
}
#endif

#endif	/* _DeleteUnitControl_Error_H_ */
