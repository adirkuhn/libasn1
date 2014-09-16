/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_StartUnitControl_Error_H_
#define	_StartUnitControl_Error_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Identifier.h"
#include "ProgramInvocationState.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* StartUnitControl-Error */
typedef struct StartUnitControl_Error {
	Identifier_t	 programInvocationName;
	ProgramInvocationState_t	 programInvocationState;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} StartUnitControl_Error_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_StartUnitControl_Error;

#ifdef __cplusplus
}
#endif

#endif	/* _StartUnitControl_Error_H_ */