/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_ReportSemaphoreStatus_Response_H_
#define	_ReportSemaphoreStatus_Response_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BOOLEAN.h"
#include "NativeInteger.h"
#include "Unsigned16.h"
#include "Identifier.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReportSemaphoreStatus_Response__Class {
	ReportSemaphoreStatus_Response__class_token	= 0,
	ReportSemaphoreStatus_Response__class_pool	= 1
} e_ReportSemaphoreStatus_Response__class;

/* ReportSemaphoreStatus-Response */
typedef struct ReportSemaphoreStatus_Response {
	BOOLEAN_t	 mmsDeletable;
	long	 Class;
	Unsigned16_t	 numberOfTokens;
	Unsigned16_t	 numberOfOwnedTokens;
	Unsigned16_t	 numberOfHungTokens;
	Identifier_t	*accessControlList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReportSemaphoreStatus_Response_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReportSemaphoreStatus_Response;

#ifdef __cplusplus
}
#endif

#endif	/* _ReportSemaphoreStatus_Response_H_ */
