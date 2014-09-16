/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_AccessResult_H_
#define	_AccessResult_H_


#include "asn_application.h"

/* Including external dependencies */
#include "DataAccessError.h"
#include "Data.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AccessResult_PR {
	AccessResult_PR_NOTHING,	/* No components present */
	AccessResult_PR_failure,
	AccessResult_PR_success
} AccessResult_PR;

/* AccessResult */
typedef struct AccessResult {
	AccessResult_PR present;
	union AccessResult_u {
		DataAccessError_t	 failure;
		Data_t	 success;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AccessResult_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AccessResult;

#ifdef __cplusplus
}
#endif

#endif	/* _AccessResult_H_ */
