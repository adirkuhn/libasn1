/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-SCI-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_Operator_Station_instance_H_
#define	_Operator_Station_instance_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Identifier.h"
#include "OBJECT_IDENTIFIER.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Operator_Station_instance__definition_PR {
	Operator_Station_instance__definition_PR_NOTHING,	/* No components present */
	Operator_Station_instance__definition_PR_reference,
	Operator_Station_instance__definition_PR_details
} Operator_Station_instance__definition_PR;
typedef enum Operator_Station_instance__definition__details__stationType {
	Operator_Station_instance__definition__details__stationType_entry	= 0,
	Operator_Station_instance__definition__details__stationType_display	= 1,
	Operator_Station_instance__definition__details__stationType_entry_display	= 2
} e_Operator_Station_instance__definition__details__stationType;

/* Forward declarations */
struct Access_Control_List_instance;

/* Operator-Station-instance */
typedef struct Operator_Station_instance {
	Identifier_t	 name;
	struct Operator_Station_instance__definition {
		Operator_Station_instance__definition_PR present;
		union Operator_Station_instance__definition_u {
			OBJECT_IDENTIFIER_t	 reference;
			struct Operator_Station_instance__definition__details {
				struct Access_Control_List_instance	*accessControl;
				long	 stationType;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} details;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} definition;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Operator_Station_instance_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_stationType_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Operator_Station_instance;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Access-Control-List-instance.h"

#endif	/* _Operator_Station_instance_H_ */