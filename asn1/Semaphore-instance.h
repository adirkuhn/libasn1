/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-SCI-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_Semaphore_instance_H_
#define	_Semaphore_instance_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Identifier.h"
#include "OBJECT_IDENTIFIER.h"
#include "NativeEnumerated.h"
#include "NativeInteger.h"
#include "VisibleString.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Semaphore_instance__definition_PR {
	Semaphore_instance__definition_PR_NOTHING,	/* No components present */
	Semaphore_instance__definition_PR_reference,
	Semaphore_instance__definition_PR_details
} Semaphore_instance__definition_PR;
typedef enum Semaphore_instance__definition__details__Class {
	Semaphore_instance__definition__details__class_token	= 0,
	Semaphore_instance__definition__details__class_pool	= 1
} e_Semaphore_instance__definition__details__class;

/* Forward declarations */
struct Access_Control_List_instance;
struct Event_Condition_instance;

/* Semaphore-instance */
typedef struct Semaphore_instance {
	Identifier_t	 name;
	struct Semaphore_instance__definition {
		Semaphore_instance__definition_PR present;
		union Semaphore_instance__definition_u {
			OBJECT_IDENTIFIER_t	 reference;
			struct Semaphore_instance__definition__details {
				struct Access_Control_List_instance	*accessControl;
				long	 Class;
				long	*numberOfTokens	/* OPTIONAL */;
				struct Semaphore_instance__definition__details__namedTokens {
					A_SEQUENCE_OF(VisibleString_t) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *namedTokens;
				struct Event_Condition_instance	*eventCondition;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} details;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} definition;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Semaphore_instance_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_class_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Semaphore_instance;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Access-Control-List-instance.h"
#include "Event-Condition-instance.h"

#endif	/* _Semaphore_instance_H_ */
