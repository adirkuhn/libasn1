/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "IEC61850"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_IEC61850_8_1SpecificProtocol_H_
#define	_IEC61850_8_1SpecificProtocol_H_


#include "asn_application.h"

/* Including external dependencies */
#include "GSEMngtPdu.h"
#include "IECGoosePdu.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IEC61850_8_1SpecificProtocol_PR {
	IEC61850_8_1SpecificProtocol_PR_NOTHING,	/* No components present */
	IEC61850_8_1SpecificProtocol_PR_gseMngtPdu,
	IEC61850_8_1SpecificProtocol_PR_goosePdu
} IEC61850_8_1SpecificProtocol_PR;

/* IEC61850-8-1SpecificProtocol */
typedef struct IEC61850_8_1SpecificProtocol {
	IEC61850_8_1SpecificProtocol_PR present;
	union IEC61850_8_1SpecificProtocol_u {
		GSEMngtPdu_t	 gseMngtPdu;
		IECGoosePdu_t	 goosePdu;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IEC61850_8_1SpecificProtocol_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IEC61850_8_1SpecificProtocol;

#ifdef __cplusplus
}
#endif

#endif	/* _IEC61850_8_1SpecificProtocol_H_ */
