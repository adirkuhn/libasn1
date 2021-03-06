/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-Object-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_EventTime_H_
#define	_EventTime_H_


#include "asn_application.h"

/* Including external dependencies */
#include "TimeOfDay.h"
#include "Unsigned32.h"
#include "NULL.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EventTime_PR {
	EventTime_PR_NOTHING,	/* No components present */
	EventTime_PR_timeOfDay,
	EventTime_PR_timeSequenceIdentifier,
	EventTime_PR_undefined
} EventTime_PR;

/* EventTime */
typedef struct EventTime {
	EventTime_PR present;
	union EventTime_u {
		TimeOfDay_t	 timeOfDay;
		Unsigned32_t	 timeSequenceIdentifier;
		NULL_t	 undefined;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EventTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EventTime;

#ifdef __cplusplus
}
#endif

#endif	/* _EventTime_H_ */
