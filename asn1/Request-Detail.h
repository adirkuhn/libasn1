/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_Request_Detail_H_
#define	_Request_Detail_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "CS-CreateProgramInvocation-Request.h"
#include "CS-Start-Request.h"
#include "CS-Resume-Request.h"
#include "CS-DefineEventCondition-Request.h"
#include "CS-AlterEventConditionMonitoring-Request.h"
#include "CS-DefineEventEnrollment-Request.h"
#include "CS-AlterEventEnrollment-Request.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Request_Detail_PR {
	Request_Detail_PR_NOTHING,	/* No components present */
	Request_Detail_PR_otherRequests,
	Request_Detail_PR_createProgramInvocation,
	Request_Detail_PR_start,
	Request_Detail_PR_resume,
	Request_Detail_PR_defineEventCondition,
	Request_Detail_PR_alterEventConditionMonitoring,
	Request_Detail_PR_defineEventEnrollment,
	Request_Detail_PR_alterEventEnrollment
} Request_Detail_PR;

/* Request-Detail */
typedef struct Request_Detail {
	Request_Detail_PR present;
	union Request_Detail_u {
		NULL_t	 otherRequests;
		CS_CreateProgramInvocation_Request_t	 createProgramInvocation;
		CS_Start_Request_t	 start;
		CS_Resume_Request_t	 resume;
		CS_DefineEventCondition_Request_t	 defineEventCondition;
		CS_AlterEventConditionMonitoring_Request_t	 alterEventConditionMonitoring;
		CS_DefineEventEnrollment_Request_t	 defineEventEnrollment;
		CS_AlterEventEnrollment_Request_t	 alterEventEnrollment;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Request_Detail_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Request_Detail;

#ifdef __cplusplus
}
#endif

#endif	/* _Request_Detail_H_ */
