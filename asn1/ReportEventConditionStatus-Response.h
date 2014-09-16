/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_ReportEventConditionStatus_Response_H_
#define	_ReportEventConditionStatus_Response_H_


#include "asn_application.h"

/* Including external dependencies */
#include "EC-State.h"
#include "Unsigned32.h"
#include "BOOLEAN.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EventTime;

/* ReportEventConditionStatus-Response */
typedef struct ReportEventConditionStatus_Response {
	EC_State_t	 currentState;
	Unsigned32_t	 numberOfEventEnrollments;
	BOOLEAN_t	*enabled	/* OPTIONAL */;
	struct EventTime	*timeOfLastTransitionToActive	/* OPTIONAL */;
	struct EventTime	*timeOfLastTransitionToIdle	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReportEventConditionStatus_Response_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReportEventConditionStatus_Response;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EventTime.h"

#endif	/* _ReportEventConditionStatus_Response_H_ */