/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-Object-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_ModifierStep_H_
#define	_ModifierStep_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "Modifier.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ModifierStep */
typedef struct ModifierStep {
	long	 modifierID;
	Modifier_t	 modifier;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ModifierStep_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ModifierStep;

#ifdef __cplusplus
}
#endif

#endif	/* _ModifierStep_H_ */
