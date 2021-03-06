/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_RemoveEventConditionListReference_Request_H_
#define	_RemoveEventConditionListReference_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ObjectName.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ObjectName;

/* RemoveEventConditionListReference-Request */
typedef struct RemoveEventConditionListReference_Request {
	ObjectName_t	 eventConditionListName;
	struct RemoveEventConditionListReference_Request__listOfEventConditionName {
		A_SEQUENCE_OF(struct ObjectName) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} listOfEventConditionName;
	struct RemoveEventConditionListReference_Request__listOfEventConditionListName {
		A_SEQUENCE_OF(struct ObjectName) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} listOfEventConditionListName;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RemoveEventConditionListReference_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RemoveEventConditionListReference_Request;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ObjectName.h"

#endif	/* _RemoveEventConditionListReference_Request_H_ */
