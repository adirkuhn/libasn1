/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-SCI-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_Unit_Control_instance_H_
#define	_Unit_Control_instance_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Identifier.h"
#include "OBJECT_IDENTIFIER.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Unit_Control_instance__definition_PR {
	Unit_Control_instance__definition_PR_NOTHING,	/* No components present */
	Unit_Control_instance__definition_PR_reference,
	Unit_Control_instance__definition_PR_details
} Unit_Control_instance__definition_PR;

/* Forward declarations */
struct Access_Control_List_instance;
struct Domain_instance;
struct Program_Invocation_instance;

/* Unit-Control-instance */
typedef struct Unit_Control_instance {
	Identifier_t	 name;
	struct Unit_Control_instance__definition {
		Unit_Control_instance__definition_PR present;
		union Unit_Control_instance__definition_u {
			OBJECT_IDENTIFIER_t	 reference;
			struct Unit_Control_instance__definition__details {
				struct Access_Control_List_instance	*accessControl;
				struct Unit_Control_instance__definition__details__domains {
					A_SEQUENCE_OF(struct Domain_instance) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} domains;
				struct Unit_Control_instance__definition__details__programInvocations {
					A_SEQUENCE_OF(struct Program_Invocation_instance) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} programInvocations;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} details;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} definition;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Unit_Control_instance_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Unit_Control_instance;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Access-Control-List-instance.h"
#include "Domain-instance.h"
#include "Program-Invocation-instance.h"

#endif	/* _Unit_Control_instance_H_ */