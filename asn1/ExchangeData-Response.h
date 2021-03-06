/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_ExchangeData_Response_H_
#define	_ExchangeData_Response_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Data;

/* ExchangeData-Response */
typedef struct ExchangeData_Response {
	struct ExchangeData_Response__listOfResponseData {
		A_SEQUENCE_OF(struct Data) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} listOfResponseData;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ExchangeData_Response_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ExchangeData_Response;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Data.h"

#endif	/* _ExchangeData_Response_H_ */
