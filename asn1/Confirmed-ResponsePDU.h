/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_Confirmed_ResponsePDU_H_
#define	_Confirmed_ResponsePDU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Unsigned32.h"
#include "ConfirmedServiceResponse.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Response_Detail;

/* Confirmed-ResponsePDU */
typedef struct Confirmed_ResponsePDU {
	Unsigned32_t	 invokeID;
	ConfirmedServiceResponse_t	 service;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct Response_Detail	*service_ext	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Confirmed_ResponsePDU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Confirmed_ResponsePDU;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Response-Detail.h"

#endif	/* _Confirmed_ResponsePDU_H_ */
