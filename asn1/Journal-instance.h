/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-SCI-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_Journal_instance_H_
#define	_Journal_instance_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ObjectName.h"
#include "OBJECT_IDENTIFIER.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Journal_instance__definition_PR {
	Journal_instance__definition_PR_NOTHING,	/* No components present */
	Journal_instance__definition_PR_reference,
	Journal_instance__definition_PR_details
} Journal_instance__definition_PR;

/* Forward declarations */
struct Access_Control_List_instance;
struct Journal_Entry_instance;

/* Journal-instance */
typedef struct Journal_instance {
	ObjectName_t	 name;
	struct Journal_instance__definition {
		Journal_instance__definition_PR present;
		union Journal_instance__definition_u {
			OBJECT_IDENTIFIER_t	 reference;
			struct Journal_instance__definition__details {
				struct Access_Control_List_instance	*accessControl;
				struct Journal_instance__definition__details__entries {
					A_SEQUENCE_OF(struct Journal_Entry_instance) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} entries;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} details;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} definition;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Journal_instance_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Journal_instance;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Access-Control-List-instance.h"
#include "Journal-Entry-instance.h"

#endif	/* _Journal_instance_H_ */