/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_RemoveEventConditionListReference_Error_H_
#define	_RemoveEventConditionListReference_Error_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ObjectName.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RemoveEventConditionListReference_Error_PR {
	RemoveEventConditionListReference_Error_PR_NOTHING,	/* No components present */
	RemoveEventConditionListReference_Error_PR_eventCondition,
	RemoveEventConditionListReference_Error_PR_eventConditionList
} RemoveEventConditionListReference_Error_PR;

/* RemoveEventConditionListReference-Error */
typedef struct RemoveEventConditionListReference_Error {
	RemoveEventConditionListReference_Error_PR present;
	union RemoveEventConditionListReference_Error_u {
		ObjectName_t	 eventCondition;
		ObjectName_t	 eventConditionList;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RemoveEventConditionListReference_Error_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RemoveEventConditionListReference_Error;

#ifdef __cplusplus
}
#endif

#endif	/* _RemoveEventConditionListReference_Error_H_ */
