/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_GetEventConditionListAttributes_Response_H_
#define	_GetEventConditionListAttributes_Response_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ObjectName;

/* GetEventConditionListAttributes-Response */
typedef struct GetEventConditionListAttributes_Response {
	struct GetEventConditionListAttributes_Response__listOfEventConditionName {
		A_SEQUENCE_OF(struct ObjectName) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} listOfEventConditionName;
	struct GetEventConditionListAttributes_Response__listOfEventConditionListName {
		A_SEQUENCE_OF(struct ObjectName) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *listOfEventConditionListName;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GetEventConditionListAttributes_Response_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GetEventConditionListAttributes_Response;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ObjectName.h"

#endif	/* _GetEventConditionListAttributes_Response_H_ */
