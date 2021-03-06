/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-SCI-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_Named_Type_instance_H_
#define	_Named_Type_instance_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ObjectName.h"
#include "OBJECT_IDENTIFIER.h"
#include "TypeDescription.h"
#include "VisibleString.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Named_Type_instance__definition_PR {
	Named_Type_instance__definition_PR_NOTHING,	/* No components present */
	Named_Type_instance__definition_PR_reference,
	Named_Type_instance__definition_PR_details
} Named_Type_instance__definition_PR;

/* Forward declarations */
struct Access_Control_List_instance;

/* Named-Type-instance */
typedef struct Named_Type_instance {
	ObjectName_t	 name;
	struct Named_Type_instance__definition {
		Named_Type_instance__definition_PR present;
		union Named_Type_instance__definition_u {
			OBJECT_IDENTIFIER_t	 reference;
			struct Named_Type_instance__definition__details {
				struct Access_Control_List_instance	*accessControl;
				TypeDescription_t	 typeDescription;
				VisibleString_t	*meaning	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} details;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} definition;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Named_Type_instance_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Named_Type_instance;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Access-Control-List-instance.h"

#endif	/* _Named_Type_instance_H_ */
