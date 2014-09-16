/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_AlterEventEnrollment_Request_H_
#define	_AlterEventEnrollment_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ObjectName.h"
#include "Transitions.h"
#include "AlarmAckRule.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AlterEventEnrollment-Request */
typedef struct AlterEventEnrollment_Request {
	ObjectName_t	 eventEnrollmentName;
	Transitions_t	*eventConditionTransitions	/* OPTIONAL */;
	AlarmAckRule_t	*alarmAcknowledgmentRule	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AlterEventEnrollment_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AlterEventEnrollment_Request;

#ifdef __cplusplus
}
#endif

#endif	/* _AlterEventEnrollment_Request_H_ */