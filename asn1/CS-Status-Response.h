/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_CS_Status_Response_H_
#define	_CS_Status_Response_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "OperationState.h"
#include "ExtendedStatus.h"
#include "Identifier.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CS_Status_Response_PR {
	CS_Status_Response_PR_NOTHING,	/* No components present */
	CS_Status_Response_PR_fullResponse,
	CS_Status_Response_PR_noExtraResponse
} CS_Status_Response_PR;
typedef enum CS_Status_Response__fullResponse__selectedProgramInvocation_PR {
	CS_Status_Response__fullResponse__selectedProgramInvocation_PR_NOTHING,	/* No components present */
	CS_Status_Response__fullResponse__selectedProgramInvocation_PR_programInvocation,
	CS_Status_Response__fullResponse__selectedProgramInvocation_PR_noneSelected
} CS_Status_Response__fullResponse__selectedProgramInvocation_PR;

/* CS-Status-Response */
typedef struct CS_Status_Response {
	CS_Status_Response_PR present;
	union CS_Status_Response_u {
		struct CS_Status_Response__fullResponse {
			OperationState_t	 operationState;
			ExtendedStatus_t	 extendedStatus;
			ExtendedStatus_t	*extendedStatusMask	/* DEFAULT '1111'BH */;
			struct CS_Status_Response__fullResponse__selectedProgramInvocation {
				CS_Status_Response__fullResponse__selectedProgramInvocation_PR present;
				union CS_Status_Response__fullResponse__selectedProgramInvocation_u {
					Identifier_t	 programInvocation;
					NULL_t	 noneSelected;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} selectedProgramInvocation;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} fullResponse;
		NULL_t	 noExtraResponse;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CS_Status_Response_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CS_Status_Response;

#ifdef __cplusplus
}
#endif

#endif	/* _CS_Status_Response_H_ */
