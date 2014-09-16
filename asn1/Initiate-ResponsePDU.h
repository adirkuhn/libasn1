/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_Initiate_ResponsePDU_H_
#define	_Initiate_ResponsePDU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Integer32.h"
#include "Integer16.h"
#include "Integer8.h"
#include "ParameterSupportOptions.h"
#include "ServiceSupportOptions.h"
#include "AdditionalSupportOptions.h"
#include "AdditionalCBBOptions.h"
#include "VisibleString.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Initiate-ResponsePDU */
typedef struct Initiate_ResponsePDU {
	Integer32_t	*localDetailCalled	/* OPTIONAL */;
	Integer16_t	 negotiatedMaxServOutstandingCalling;
	Integer16_t	 negotiatedMaxServOutstandingCalled;
	Integer8_t	*negotiatedDataStructureNestingLevel	/* OPTIONAL */;
	struct Initiate_ResponsePDU__initResponseDetail {
		Integer16_t	 negotiatedVersionNumber;
		ParameterSupportOptions_t	 negotiatedParameterCBB;
		ServiceSupportOptions_t	 servicesSupportedCalled;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		AdditionalSupportOptions_t	*additionalSupportedCalled;
		AdditionalCBBOptions_t	*additionalCbbSupportedCalled;
		VisibleString_t	*privilegeClassIdentityCalled;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} initResponseDetail;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Initiate_ResponsePDU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Initiate_ResponsePDU;

#ifdef __cplusplus
}
#endif

#endif	/* _Initiate_ResponsePDU_H_ */
