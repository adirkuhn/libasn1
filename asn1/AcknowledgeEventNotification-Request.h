/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_AcknowledgeEventNotification_Request_H_
#define	_AcknowledgeEventNotification_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ObjectName.h"
#include "EC-State.h"
#include "EventTime.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AcknowledgeEventNotification-Request */
typedef struct AcknowledgeEventNotification_Request {
	ObjectName_t	 eventEnrollmentName;
	EC_State_t	 acknowledgedState;
	EventTime_t	 timeOfAcknowledgedTransition;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AcknowledgeEventNotification_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AcknowledgeEventNotification_Request;

#ifdef __cplusplus
}
#endif

#endif	/* _AcknowledgeEventNotification_Request_H_ */