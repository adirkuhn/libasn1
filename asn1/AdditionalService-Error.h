/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_AdditionalService_Error_H_
#define	_AdditionalService_Error_H_


#include "asn_application.h"

/* Including external dependencies */
#include "DefineEventConditionList-Error.h"
#include "AddEventConditionListReference-Error.h"
#include "RemoveEventConditionListReference-Error.h"
#include "InitiateUnitControl-Error.h"
#include "StartUnitControl-Error.h"
#include "StopUnitControl-Error.h"
#include "DeleteUnitControl-Error.h"
#include "LoadUnitControlFromFile-Error.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AdditionalService_Error_PR {
	AdditionalService_Error_PR_NOTHING,	/* No components present */
	AdditionalService_Error_PR_defineEcl,
	AdditionalService_Error_PR_addECLReference,
	AdditionalService_Error_PR_removeECLReference,
	AdditionalService_Error_PR_initiateUC,
	AdditionalService_Error_PR_startUC,
	AdditionalService_Error_PR_stopUC,
	AdditionalService_Error_PR_deleteUC,
	AdditionalService_Error_PR_loadUCFromFile
} AdditionalService_Error_PR;

/* AdditionalService-Error */
typedef struct AdditionalService_Error {
	AdditionalService_Error_PR present;
	union AdditionalService_Error_u {
		DefineEventConditionList_Error_t	 defineEcl;
		AddEventConditionListReference_Error_t	 addECLReference;
		RemoveEventConditionListReference_Error_t	 removeECLReference;
		InitiateUnitControl_Error_t	 initiateUC;
		StartUnitControl_Error_t	 startUC;
		StopUnitControl_Error_t	 stopUC;
		DeleteUnitControl_Error_t	 deleteUC;
		LoadUnitControlFromFile_Error_t	 loadUCFromFile;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AdditionalService_Error_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AdditionalService_Error;

#ifdef __cplusplus
}
#endif

#endif	/* _AdditionalService_Error_H_ */
