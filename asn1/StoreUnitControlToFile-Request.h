/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_StoreUnitControlToFile_Request_H_
#define	_StoreUnitControlToFile_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Identifier.h"
#include "FileName.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ApplicationReference;

/* StoreUnitControlToFile-Request */
typedef struct StoreUnitControlToFile_Request {
	Identifier_t	 unitControlName;
	FileName_t	 fileName;
	struct ApplicationReference	*thirdParty	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} StoreUnitControlToFile_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_StoreUnitControlToFile_Request;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ApplicationReference.h"

#endif	/* _StoreUnitControlToFile_Request_H_ */
