/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_CS_AlterEventEnrollment_Request_H_
#define	_CS_AlterEventEnrollment_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "VisibleString.h"
#include "NativeInteger.h"
#include "NULL.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CS_AlterEventEnrollment_Request__changeDisplay_PR {
	CS_AlterEventEnrollment_Request__changeDisplay_PR_NOTHING,	/* No components present */
	CS_AlterEventEnrollment_Request__changeDisplay_PR_string,
	CS_AlterEventEnrollment_Request__changeDisplay_PR_index,
	CS_AlterEventEnrollment_Request__changeDisplay_PR_noEnhancement
} CS_AlterEventEnrollment_Request__changeDisplay_PR;

/* CS-AlterEventEnrollment-Request */
typedef struct CS_AlterEventEnrollment_Request {
	struct CS_AlterEventEnrollment_Request__changeDisplay {
		CS_AlterEventEnrollment_Request__changeDisplay_PR present;
		union CS_AlterEventEnrollment_Request__changeDisplay_u {
			VisibleString_t	 string;
			long	 index;
			NULL_t	 noEnhancement;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *changeDisplay;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CS_AlterEventEnrollment_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CS_AlterEventEnrollment_Request;

#ifdef __cplusplus
}
#endif

#endif	/* _CS_AlterEventEnrollment_Request_H_ */
