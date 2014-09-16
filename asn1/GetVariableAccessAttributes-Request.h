/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_GetVariableAccessAttributes_Request_H_
#define	_GetVariableAccessAttributes_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ObjectName.h"
#include "Address.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GetVariableAccessAttributes_Request_PR {
	GetVariableAccessAttributes_Request_PR_NOTHING,	/* No components present */
	GetVariableAccessAttributes_Request_PR_name,
	GetVariableAccessAttributes_Request_PR_address
} GetVariableAccessAttributes_Request_PR;

/* GetVariableAccessAttributes-Request */
typedef struct GetVariableAccessAttributes_Request {
	GetVariableAccessAttributes_Request_PR present;
	union GetVariableAccessAttributes_Request_u {
		ObjectName_t	 name;
		Address_t	 address;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GetVariableAccessAttributes_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GetVariableAccessAttributes_Request;

#ifdef __cplusplus
}
#endif

#endif	/* _GetVariableAccessAttributes_Request_H_ */
