/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-SCI-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_Event_Enrollment_instance_H_
#define	_Event_Enrollment_instance_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ObjectName.h"
#include "OBJECT_IDENTIFIER.h"
#include "EE-Class.h"
#include "Transitions.h"
#include "EE-Duration.h"
#include "AlarmAckRule.h"
#include "NativeInteger.h"
#include "NULL.h"
#include "constr_CHOICE.h"
#include "MMSString.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Event_Enrollment_instance__definition_PR {
	Event_Enrollment_instance__definition_PR_NOTHING,	/* No components present */
	Event_Enrollment_instance__definition_PR_reference,
	Event_Enrollment_instance__definition_PR_details
} Event_Enrollment_instance__definition_PR;
typedef enum Event_Enrollment_instance__definition__details__remainingDelay_PR {
	Event_Enrollment_instance__definition__details__remainingDelay_PR_NOTHING,	/* No components present */
	Event_Enrollment_instance__definition__details__remainingDelay_PR_time,
	Event_Enrollment_instance__definition__details__remainingDelay_PR_forever
} Event_Enrollment_instance__definition__details__remainingDelay_PR;
typedef enum Event_Enrollment_instance__definition__details__displayEnhancement_PR {
	Event_Enrollment_instance__definition__details__displayEnhancement_PR_NOTHING,	/* No components present */
	Event_Enrollment_instance__definition__details__displayEnhancement_PR_text,
	Event_Enrollment_instance__definition__details__displayEnhancement_PR_number,
	Event_Enrollment_instance__definition__details__displayEnhancement_PR_none
} Event_Enrollment_instance__definition__details__displayEnhancement_PR;

/* Forward declarations */
struct Access_Control_List_instance;
struct Event_Condition_instance;
struct Event_Action_instance;
struct ApplicationReference;

/* Event-Enrollment-instance */
typedef struct Event_Enrollment_instance {
	ObjectName_t	 name;
	struct Event_Enrollment_instance__definition {
		Event_Enrollment_instance__definition_PR present;
		union Event_Enrollment_instance__definition_u {
			OBJECT_IDENTIFIER_t	 reference;
			struct Event_Enrollment_instance__definition__details {
				struct Access_Control_List_instance	*accessControl;
				EE_Class_t	 eeClass;
				struct Event_Condition_instance	*eventCondition;
				Transitions_t	 ecTransitions;
				struct Event_Enrollment_instance__definition__details__remainingDelay {
					Event_Enrollment_instance__definition__details__remainingDelay_PR present;
					union Event_Enrollment_instance__definition__details__remainingDelay_u {
						long	 time;
						NULL_t	 forever;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *remainingDelay;
				struct Event_Action_instance	*eventAction	/* OPTIONAL */;
				EE_Duration_t	*duration	/* OPTIONAL */;
				struct ApplicationReference	*clientApplication	/* OPTIONAL */;
				AlarmAckRule_t	*aaRule	/* OPTIONAL */;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				struct Event_Enrollment_instance__definition__details__displayEnhancement {
					Event_Enrollment_instance__definition__details__displayEnhancement_PR present;
					union Event_Enrollment_instance__definition__details__displayEnhancement_u {
						MMSString_t	 text;
						long	 number;
						NULL_t	 none;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *displayEnhancement;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} details;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} definition;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Event_Enrollment_instance_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Event_Enrollment_instance;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Access-Control-List-instance.h"
#include "Event-Condition-instance.h"
#include "Event-Action-instance.h"
#include "ApplicationReference.h"

#endif	/* _Event_Enrollment_instance_H_ */
