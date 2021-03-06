/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_GetAlarmEnrollmentSummary_Response_H_
#define	_GetAlarmEnrollmentSummary_Response_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BOOLEAN.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AlarmEnrollmentSummary;

/* GetAlarmEnrollmentSummary-Response */
typedef struct GetAlarmEnrollmentSummary_Response {
	struct GetAlarmEnrollmentSummary_Response__listOfAlarmEnrollmentSummary {
		A_SEQUENCE_OF(struct AlarmEnrollmentSummary) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} listOfAlarmEnrollmentSummary;
	BOOLEAN_t	*moreFollows	/* DEFAULT FALSE */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GetAlarmEnrollmentSummary_Response_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GetAlarmEnrollmentSummary_Response;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AlarmEnrollmentSummary.h"

#endif	/* _GetAlarmEnrollmentSummary_Response_H_ */
