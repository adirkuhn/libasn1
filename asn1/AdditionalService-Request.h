/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_AdditionalService_Request_H_
#define	_AdditionalService_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "VMDStop-Request.h"
#include "VMDReset-Request.h"
#include "Select-Request.h"
#include "AlterProgramInvocationAttributes-Request.h"
#include "InitiateUnitControlLoad-Request.h"
#include "UnitControlLoadSegment-Request.h"
#include "UnitControlUpload-Request.h"
#include "StartUnitControl-Request.h"
#include "StopUnitControl-Request.h"
#include "CreateUnitControl-Request.h"
#include "AddToUnitControl-Request.h"
#include "RemoveFromUnitControl-Request.h"
#include "GetUnitControlAttributes-Request.h"
#include "LoadUnitControlFromFile-Request.h"
#include "StoreUnitControlToFile-Request.h"
#include "DeleteUnitControl-Request.h"
#include "DefineEventConditionList-Request.h"
#include "DeleteEventConditionList-Request.h"
#include "AddEventConditionListReference-Request.h"
#include "RemoveEventConditionListReference-Request.h"
#include "GetEventConditionListAttributes-Request.h"
#include "ReportEventConditionListStatus-Request.h"
#include "AlterEventConditionListMonitoring-Request.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AdditionalService_Request_PR {
	AdditionalService_Request_PR_NOTHING,	/* No components present */
	AdditionalService_Request_PR_vMDStop,
	AdditionalService_Request_PR_vMDReset,
	AdditionalService_Request_PR_select,
	AdditionalService_Request_PR_alterPI,
	AdditionalService_Request_PR_initiateUCLoad,
	AdditionalService_Request_PR_uCLoad,
	AdditionalService_Request_PR_uCUpload,
	AdditionalService_Request_PR_startUC,
	AdditionalService_Request_PR_stopUC,
	AdditionalService_Request_PR_createUC,
	AdditionalService_Request_PR_addToUC,
	AdditionalService_Request_PR_removeFromUC,
	AdditionalService_Request_PR_getUCAttributes,
	AdditionalService_Request_PR_loadUCFromFile,
	AdditionalService_Request_PR_storeUCToFile,
	AdditionalService_Request_PR_deleteUC,
	AdditionalService_Request_PR_defineECL,
	AdditionalService_Request_PR_deleteECL,
	AdditionalService_Request_PR_addECLReference,
	AdditionalService_Request_PR_removeECLReference,
	AdditionalService_Request_PR_getECLAttributes,
	AdditionalService_Request_PR_reportECLStatus,
	AdditionalService_Request_PR_alterECLMonitoring
} AdditionalService_Request_PR;

/* AdditionalService-Request */
typedef struct AdditionalService_Request {
	AdditionalService_Request_PR present;
	union AdditionalService_Request_u {
		VMDStop_Request_t	 vMDStop;
		VMDReset_Request_t	 vMDReset;
		Select_Request_t	 select;
		AlterProgramInvocationAttributes_Request_t	 alterPI;
		InitiateUnitControlLoad_Request_t	 initiateUCLoad;
		UnitControlLoadSegment_Request_t	 uCLoad;
		UnitControlUpload_Request_t	 uCUpload;
		StartUnitControl_Request_t	 startUC;
		StopUnitControl_Request_t	 stopUC;
		CreateUnitControl_Request_t	 createUC;
		AddToUnitControl_Request_t	 addToUC;
		RemoveFromUnitControl_Request_t	 removeFromUC;
		GetUnitControlAttributes_Request_t	 getUCAttributes;
		LoadUnitControlFromFile_Request_t	 loadUCFromFile;
		StoreUnitControlToFile_Request_t	 storeUCToFile;
		DeleteUnitControl_Request_t	 deleteUC;
		DefineEventConditionList_Request_t	 defineECL;
		DeleteEventConditionList_Request_t	 deleteECL;
		AddEventConditionListReference_Request_t	 addECLReference;
		RemoveEventConditionListReference_Request_t	 removeECLReference;
		GetEventConditionListAttributes_Request_t	 getECLAttributes;
		ReportEventConditionListStatus_Request_t	 reportECLStatus;
		AlterEventConditionListMonitoring_Request_t	 alterECLMonitoring;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AdditionalService_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AdditionalService_Request;

#ifdef __cplusplus
}
#endif

#endif	/* _AdditionalService_Request_H_ */
