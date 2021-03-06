/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-Object-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_AccessCondition_H_
#define	_AccessCondition_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "Identifier.h"
#include "Authentication-value.h"
#include "ApplicationReference.h"
#include "constr_CHOICE.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AccessCondition_PR {
	AccessCondition_PR_NOTHING,	/* No components present */
	AccessCondition_PR_never,
	AccessCondition_PR_semaphore,
	AccessCondition_PR_user,
	AccessCondition_PR_password,
	AccessCondition_PR_joint,
	AccessCondition_PR_alternate
} AccessCondition_PR;
typedef enum AccessCondition__user_PR {
	AccessCondition__user_PR_NOTHING,	/* No components present */
	AccessCondition__user_PR_association,
	AccessCondition__user_PR_none
} AccessCondition__user_PR;

/* Forward declarations */
struct AccessCondition;

/* AccessCondition */
typedef struct AccessCondition {
	AccessCondition_PR present;
	union AccessCondition_u {
		NULL_t	 never;
		Identifier_t	 semaphore;
		struct AccessCondition__user {
			AccessCondition__user_PR present;
			union AccessCondition__user_u {
				ApplicationReference_t	 association;
				NULL_t	 none;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} user;
		Authentication_value_t	 password;
		struct AccessCondition__joint {
			A_SEQUENCE_OF(struct AccessCondition) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} joint;
		struct AccessCondition__alternate {
			A_SEQUENCE_OF(struct AccessCondition) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} alternate;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AccessCondition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AccessCondition;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AccessCondition.h"

#endif	/* _AccessCondition_H_ */
