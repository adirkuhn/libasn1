/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "ConfirmedServiceResponse.h"

static asn_TYPE_member_t asn_MBR_ConfirmedServiceResponse_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.status),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Status_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"status"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.getNameList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GetNameList_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"getNameList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.identify),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Identify_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"identify"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.rename),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Rename_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"rename"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.read),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Read_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"read"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.getVariableAccessAttributes),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GetVariableAccessAttributes_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"getVariableAccessAttributes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.defineNamedVariable),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DefineNamedVariable_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"defineNamedVariable"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.defineScatteredAccess),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DefineScatteredAccess_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"defineScatteredAccess"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.getScatteredAccessAttributes),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GetScatteredAccessAttributes_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"getScatteredAccessAttributes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.deleteVariableAccess),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeleteVariableAccess_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"deleteVariableAccess"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.defineNamedVariableList),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DefineNamedVariableList_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"defineNamedVariableList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.getNamedVariableListAttributes),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GetNamedVariableListAttributes_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"getNamedVariableListAttributes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.deleteNamedVariableList),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeleteNamedVariableList_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"deleteNamedVariableList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.defineNamedType),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DefineNamedType_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"defineNamedType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.getNamedTypeAttributes),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GetNamedTypeAttributes_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"getNamedTypeAttributes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.deleteNamedType),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeleteNamedType_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"deleteNamedType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.input),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Input_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"input"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.output),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Output_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"output"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.takeControl),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TakeControl_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"takeControl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.relinquishControl),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RelinquishControl_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"relinquishControl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.defineSemaphore),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DefineSemaphore_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"defineSemaphore"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.deleteSemaphore),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeleteSemaphore_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"deleteSemaphore"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.reportSemaphoreStatus),
		(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportSemaphoreStatus_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"reportSemaphoreStatus"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.reportPoolSemaphoreStatus),
		(ASN_TAG_CLASS_CONTEXT | (24 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportPoolSemaphoreStatus_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"reportPoolSemaphoreStatus"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.reportSemaphoreEntryStatus),
		(ASN_TAG_CLASS_CONTEXT | (25 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportSemaphoreEntryStatus_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"reportSemaphoreEntryStatus"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.initiateDownloadSequence),
		(ASN_TAG_CLASS_CONTEXT | (26 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InitiateDownloadSequence_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"initiateDownloadSequence"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.downloadSegment),
		(ASN_TAG_CLASS_CONTEXT | (27 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DownloadSegment_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"downloadSegment"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.terminateDownloadSequence),
		(ASN_TAG_CLASS_CONTEXT | (28 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TerminateDownloadSequence_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"terminateDownloadSequence"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.initiateUploadSequence),
		(ASN_TAG_CLASS_CONTEXT | (29 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InitiateUploadSequence_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"initiateUploadSequence"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.uploadSegment),
		(ASN_TAG_CLASS_CONTEXT | (30 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UploadSegment_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"uploadSegment"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.terminateUploadSequence),
		(ASN_TAG_CLASS_CONTEXT | (31 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TerminateUploadSequence_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"terminateUploadSequence"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.requestDomainDownload),
		(ASN_TAG_CLASS_CONTEXT | (32 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RequestDomainDownload_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"requestDomainDownload"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.requestDomainUpload),
		(ASN_TAG_CLASS_CONTEXT | (33 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RequestDomainUpload_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"requestDomainUpload"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.loadDomainContent),
		(ASN_TAG_CLASS_CONTEXT | (34 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LoadDomainContent_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"loadDomainContent"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.storeDomainContent),
		(ASN_TAG_CLASS_CONTEXT | (35 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_StoreDomainContent_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"storeDomainContent"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.deleteDomain),
		(ASN_TAG_CLASS_CONTEXT | (36 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeleteDomain_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"deleteDomain"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.getDomainAttributes),
		(ASN_TAG_CLASS_CONTEXT | (37 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GetDomainAttributes_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"getDomainAttributes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.createProgramInvocation),
		(ASN_TAG_CLASS_CONTEXT | (38 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CreateProgramInvocation_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"createProgramInvocation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.deleteProgramInvocation),
		(ASN_TAG_CLASS_CONTEXT | (39 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeleteProgramInvocation_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"deleteProgramInvocation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.start),
		(ASN_TAG_CLASS_CONTEXT | (40 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Start_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"start"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.stop),
		(ASN_TAG_CLASS_CONTEXT | (41 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Stop_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"stop"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.resume),
		(ASN_TAG_CLASS_CONTEXT | (42 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Resume_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"resume"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.reset),
		(ASN_TAG_CLASS_CONTEXT | (43 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Reset_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"reset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.kill),
		(ASN_TAG_CLASS_CONTEXT | (44 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Kill_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"kill"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.getProgramInvocationAttributes),
		(ASN_TAG_CLASS_CONTEXT | (45 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GetProgramInvocationAttributes_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"getProgramInvocationAttributes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.obtainFile),
		(ASN_TAG_CLASS_CONTEXT | (46 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ObtainFile_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"obtainFile"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.defineEventCondition),
		(ASN_TAG_CLASS_CONTEXT | (47 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DefineEventCondition_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"defineEventCondition"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.deleteEventCondition),
		(ASN_TAG_CLASS_CONTEXT | (48 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeleteEventCondition_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"deleteEventCondition"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.getEventConditionAttributes),
		(ASN_TAG_CLASS_CONTEXT | (49 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GetEventConditionAttributes_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"getEventConditionAttributes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.reportEventConditionStatus),
		(ASN_TAG_CLASS_CONTEXT | (50 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportEventConditionStatus_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"reportEventConditionStatus"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.alterEventConditionMonitoring),
		(ASN_TAG_CLASS_CONTEXT | (51 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AlterEventConditionMonitoring_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"alterEventConditionMonitoring"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.triggerEvent),
		(ASN_TAG_CLASS_CONTEXT | (52 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TriggerEvent_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"triggerEvent"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.defineEventAction),
		(ASN_TAG_CLASS_CONTEXT | (53 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DefineEventAction_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"defineEventAction"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.deleteEventAction),
		(ASN_TAG_CLASS_CONTEXT | (54 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeleteEventAction_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"deleteEventAction"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.getEventActionAttributes),
		(ASN_TAG_CLASS_CONTEXT | (55 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GetEventActionAttributes_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"getEventActionAttributes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.reportEventActionStatus),
		(ASN_TAG_CLASS_CONTEXT | (56 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportEventActionStatus_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"reportEventActionStatus"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.defineEventEnrollment),
		(ASN_TAG_CLASS_CONTEXT | (57 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DefineEventEnrollment_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"defineEventEnrollment"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.deleteEventEnrollment),
		(ASN_TAG_CLASS_CONTEXT | (58 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeleteEventEnrollment_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"deleteEventEnrollment"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.alterEventEnrollment),
		(ASN_TAG_CLASS_CONTEXT | (59 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AlterEventEnrollment_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"alterEventEnrollment"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.reportEventEnrollmentStatus),
		(ASN_TAG_CLASS_CONTEXT | (60 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportEventEnrollmentStatus_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"reportEventEnrollmentStatus"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.getEventEnrollmentAttributes),
		(ASN_TAG_CLASS_CONTEXT | (61 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GetEventEnrollmentAttributes_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"getEventEnrollmentAttributes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.acknowledgeEventNotification),
		(ASN_TAG_CLASS_CONTEXT | (62 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AcknowledgeEventNotification_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"acknowledgeEventNotification"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.getAlarmSummary),
		(ASN_TAG_CLASS_CONTEXT | (63 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GetAlarmSummary_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"getAlarmSummary"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.getAlarmEnrollmentSummary),
		(ASN_TAG_CLASS_CONTEXT | (64 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GetAlarmEnrollmentSummary_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"getAlarmEnrollmentSummary"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.readJournal),
		(ASN_TAG_CLASS_CONTEXT | (65 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReadJournal_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"readJournal"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.writeJournal),
		(ASN_TAG_CLASS_CONTEXT | (66 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WriteJournal_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"writeJournal"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.initializeJournal),
		(ASN_TAG_CLASS_CONTEXT | (67 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InitializeJournal_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"initializeJournal"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.reportJournalStatus),
		(ASN_TAG_CLASS_CONTEXT | (68 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportJournalStatus_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"reportJournalStatus"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.createJournal),
		(ASN_TAG_CLASS_CONTEXT | (69 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CreateJournal_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"createJournal"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.deleteJournal),
		(ASN_TAG_CLASS_CONTEXT | (70 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeleteJournal_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"deleteJournal"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.getCapabilityList),
		(ASN_TAG_CLASS_CONTEXT | (71 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GetCapabilityList_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"getCapabilityList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.fileOpen),
		(ASN_TAG_CLASS_CONTEXT | (72 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FileOpen_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"fileOpen"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.fileRead),
		(ASN_TAG_CLASS_CONTEXT | (73 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FileRead_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"fileRead"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.fileClose),
		(ASN_TAG_CLASS_CONTEXT | (74 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FileClose_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"fileClose"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.fileRename),
		(ASN_TAG_CLASS_CONTEXT | (75 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FileRename_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"fileRename"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.fileDelete),
		(ASN_TAG_CLASS_CONTEXT | (76 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FileDelete_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"fileDelete"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.fileDirectory),
		(ASN_TAG_CLASS_CONTEXT | (77 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FileDirectory_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"fileDirectory"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.additionalService),
		(ASN_TAG_CLASS_CONTEXT | (78 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_AdditionalService_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"additionalService"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.getDataExchangeAttributes),
		(ASN_TAG_CLASS_CONTEXT | (80 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_GetDataExchangeAttributes_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"getDataExchangeAttributes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.exchangeData),
		(ASN_TAG_CLASS_CONTEXT | (81 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExchangeData_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"exchangeData"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.defineAccessControlList),
		(ASN_TAG_CLASS_CONTEXT | (82 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DefineAccessControlList_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"defineAccessControlList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.getAccessControlListAttributes),
		(ASN_TAG_CLASS_CONTEXT | (83 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GetAccessControlListAttributes_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"getAccessControlListAttributes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.reportAccessControlledObjects),
		(ASN_TAG_CLASS_CONTEXT | (84 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportAccessControlledObjects_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"reportAccessControlledObjects"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.deleteAccessControlList),
		(ASN_TAG_CLASS_CONTEXT | (85 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeleteAccessControlList_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"deleteAccessControlList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConfirmedServiceResponse, choice.changeAccessControl),
		(ASN_TAG_CLASS_CONTEXT | (86 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChangeAccessControl_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"changeAccessControl"
		},
};
static asn_TYPE_tag2member_t asn_MAP_ConfirmedServiceResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* status at 1038 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* getNameList at 1039 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* identify at 1040 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rename at 1041 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* read at 1042 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 5, 0, 0 }, /* getVariableAccessAttributes at 1044 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 6, 0, 0 }, /* defineNamedVariable at 1045 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 7, 0, 0 }, /* defineScatteredAccess at 1047 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 8, 0, 0 }, /* getScatteredAccessAttributes at 1050 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 9, 0, 0 }, /* deleteVariableAccess at 1051 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 10, 0, 0 }, /* defineNamedVariableList at 1053 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 11, 0, 0 }, /* getNamedVariableListAttributes at 1055 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 12, 0, 0 }, /* deleteNamedVariableList at 1057 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 13, 0, 0 }, /* defineNamedType at 1058 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 14, 0, 0 }, /* getNamedTypeAttributes at 1059 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 15, 0, 0 }, /* deleteNamedType at 1060 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 16, 0, 0 }, /* input at 1061 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 17, 0, 0 }, /* output at 1062 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 18, 0, 0 }, /* takeControl at 1063 */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 19, 0, 0 }, /* relinquishControl at 1064 */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 20, 0, 0 }, /* defineSemaphore at 1065 */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 21, 0, 0 }, /* deleteSemaphore at 1066 */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 22, 0, 0 }, /* reportSemaphoreStatus at 1067 */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 23, 0, 0 }, /* reportPoolSemaphoreStatus at 1069 */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 24, 0, 0 }, /* reportSemaphoreEntryStatus at 1071 */
    { (ASN_TAG_CLASS_CONTEXT | (26 << 2)), 25, 0, 0 }, /* initiateDownloadSequence at 1073 */
    { (ASN_TAG_CLASS_CONTEXT | (27 << 2)), 26, 0, 0 }, /* downloadSegment at 1074 */
    { (ASN_TAG_CLASS_CONTEXT | (28 << 2)), 27, 0, 0 }, /* terminateDownloadSequence at 1076 */
    { (ASN_TAG_CLASS_CONTEXT | (29 << 2)), 28, 0, 0 }, /* initiateUploadSequence at 1077 */
    { (ASN_TAG_CLASS_CONTEXT | (30 << 2)), 29, 0, 0 }, /* uploadSegment at 1078 */
    { (ASN_TAG_CLASS_CONTEXT | (31 << 2)), 30, 0, 0 }, /* terminateUploadSequence at 1080 */
    { (ASN_TAG_CLASS_CONTEXT | (32 << 2)), 31, 0, 0 }, /* requestDomainDownload at 1081 */
    { (ASN_TAG_CLASS_CONTEXT | (33 << 2)), 32, 0, 0 }, /* requestDomainUpload at 1082 */
    { (ASN_TAG_CLASS_CONTEXT | (34 << 2)), 33, 0, 0 }, /* loadDomainContent at 1083 */
    { (ASN_TAG_CLASS_CONTEXT | (35 << 2)), 34, 0, 0 }, /* storeDomainContent at 1084 */
    { (ASN_TAG_CLASS_CONTEXT | (36 << 2)), 35, 0, 0 }, /* deleteDomain at 1085 */
    { (ASN_TAG_CLASS_CONTEXT | (37 << 2)), 36, 0, 0 }, /* getDomainAttributes at 1086 */
    { (ASN_TAG_CLASS_CONTEXT | (38 << 2)), 37, 0, 0 }, /* createProgramInvocation at 1088 */
    { (ASN_TAG_CLASS_CONTEXT | (39 << 2)), 38, 0, 0 }, /* deleteProgramInvocation at 1090 */
    { (ASN_TAG_CLASS_CONTEXT | (40 << 2)), 39, 0, 0 }, /* start at 1091 */
    { (ASN_TAG_CLASS_CONTEXT | (41 << 2)), 40, 0, 0 }, /* stop at 1092 */
    { (ASN_TAG_CLASS_CONTEXT | (42 << 2)), 41, 0, 0 }, /* resume at 1093 */
    { (ASN_TAG_CLASS_CONTEXT | (43 << 2)), 42, 0, 0 }, /* reset at 1094 */
    { (ASN_TAG_CLASS_CONTEXT | (44 << 2)), 43, 0, 0 }, /* kill at 1095 */
    { (ASN_TAG_CLASS_CONTEXT | (45 << 2)), 44, 0, 0 }, /* getProgramInvocationAttributes at 1097 */
    { (ASN_TAG_CLASS_CONTEXT | (46 << 2)), 45, 0, 0 }, /* obtainFile at 1098 */
    { (ASN_TAG_CLASS_CONTEXT | (47 << 2)), 46, 0, 0 }, /* defineEventCondition at 1099 */
    { (ASN_TAG_CLASS_CONTEXT | (48 << 2)), 47, 0, 0 }, /* deleteEventCondition at 1100 */
    { (ASN_TAG_CLASS_CONTEXT | (49 << 2)), 48, 0, 0 }, /* getEventConditionAttributes at 1102 */
    { (ASN_TAG_CLASS_CONTEXT | (50 << 2)), 49, 0, 0 }, /* reportEventConditionStatus at 1104 */
    { (ASN_TAG_CLASS_CONTEXT | (51 << 2)), 50, 0, 0 }, /* alterEventConditionMonitoring at 1106 */
    { (ASN_TAG_CLASS_CONTEXT | (52 << 2)), 51, 0, 0 }, /* triggerEvent at 1107 */
    { (ASN_TAG_CLASS_CONTEXT | (53 << 2)), 52, 0, 0 }, /* defineEventAction at 1108 */
    { (ASN_TAG_CLASS_CONTEXT | (54 << 2)), 53, 0, 0 }, /* deleteEventAction at 1109 */
    { (ASN_TAG_CLASS_CONTEXT | (55 << 2)), 54, 0, 0 }, /* getEventActionAttributes at 1111 */
    { (ASN_TAG_CLASS_CONTEXT | (56 << 2)), 55, 0, 0 }, /* reportEventActionStatus at 1113 */
    { (ASN_TAG_CLASS_CONTEXT | (57 << 2)), 56, 0, 0 }, /* defineEventEnrollment at 1114 */
    { (ASN_TAG_CLASS_CONTEXT | (58 << 2)), 57, 0, 0 }, /* deleteEventEnrollment at 1115 */
    { (ASN_TAG_CLASS_CONTEXT | (59 << 2)), 58, 0, 0 }, /* alterEventEnrollment at 1116 */
    { (ASN_TAG_CLASS_CONTEXT | (60 << 2)), 59, 0, 0 }, /* reportEventEnrollmentStatus at 1118 */
    { (ASN_TAG_CLASS_CONTEXT | (61 << 2)), 60, 0, 0 }, /* getEventEnrollmentAttributes at 1120 */
    { (ASN_TAG_CLASS_CONTEXT | (62 << 2)), 61, 0, 0 }, /* acknowledgeEventNotification at 1122 */
    { (ASN_TAG_CLASS_CONTEXT | (63 << 2)), 62, 0, 0 }, /* getAlarmSummary at 1123 */
    { (ASN_TAG_CLASS_CONTEXT | (64 << 2)), 63, 0, 0 }, /* getAlarmEnrollmentSummary at 1125 */
    { (ASN_TAG_CLASS_CONTEXT | (65 << 2)), 64, 0, 0 }, /* readJournal at 1126 */
    { (ASN_TAG_CLASS_CONTEXT | (66 << 2)), 65, 0, 0 }, /* writeJournal at 1127 */
    { (ASN_TAG_CLASS_CONTEXT | (67 << 2)), 66, 0, 0 }, /* initializeJournal at 1128 */
    { (ASN_TAG_CLASS_CONTEXT | (68 << 2)), 67, 0, 0 }, /* reportJournalStatus at 1129 */
    { (ASN_TAG_CLASS_CONTEXT | (69 << 2)), 68, 0, 0 }, /* createJournal at 1130 */
    { (ASN_TAG_CLASS_CONTEXT | (70 << 2)), 69, 0, 0 }, /* deleteJournal at 1131 */
    { (ASN_TAG_CLASS_CONTEXT | (71 << 2)), 70, 0, 0 }, /* getCapabilityList at 1132 */
    { (ASN_TAG_CLASS_CONTEXT | (72 << 2)), 71, 0, 0 }, /* fileOpen at 1135 */
    { (ASN_TAG_CLASS_CONTEXT | (73 << 2)), 72, 0, 0 }, /* fileRead at 1136 */
    { (ASN_TAG_CLASS_CONTEXT | (74 << 2)), 73, 0, 0 }, /* fileClose at 1137 */
    { (ASN_TAG_CLASS_CONTEXT | (75 << 2)), 74, 0, 0 }, /* fileRename at 1138 */
    { (ASN_TAG_CLASS_CONTEXT | (76 << 2)), 75, 0, 0 }, /* fileDelete at 1139 */
    { (ASN_TAG_CLASS_CONTEXT | (77 << 2)), 76, 0, 0 }, /* fileDirectory at 1140 */
    { (ASN_TAG_CLASS_CONTEXT | (78 << 2)), 77, 0, 0 }, /* additionalService at 1142 */
    { (ASN_TAG_CLASS_CONTEXT | (80 << 2)), 78, 0, 0 }, /* getDataExchangeAttributes at 1144 */
    { (ASN_TAG_CLASS_CONTEXT | (81 << 2)), 79, 0, 0 }, /* exchangeData at 1146 */
    { (ASN_TAG_CLASS_CONTEXT | (82 << 2)), 80, 0, 0 }, /* defineAccessControlList at 1149 */
    { (ASN_TAG_CLASS_CONTEXT | (83 << 2)), 81, 0, 0 }, /* getAccessControlListAttributes at 1152 */
    { (ASN_TAG_CLASS_CONTEXT | (84 << 2)), 82, 0, 0 }, /* reportAccessControlledObjects at 1155 */
    { (ASN_TAG_CLASS_CONTEXT | (85 << 2)), 83, 0, 0 }, /* deleteAccessControlList at 1158 */
    { (ASN_TAG_CLASS_CONTEXT | (86 << 2)), 84, 0, 0 } /* changeAccessControl at 1161 */
};
static asn_CHOICE_specifics_t asn_SPC_ConfirmedServiceResponse_specs_1 = {
	sizeof(struct ConfirmedServiceResponse),
	offsetof(struct ConfirmedServiceResponse, _asn_ctx),
	offsetof(struct ConfirmedServiceResponse, present),
	sizeof(((struct ConfirmedServiceResponse *)0)->present),
	asn_MAP_ConfirmedServiceResponse_tag2el_1,
	85,	/* Count of tags in the map */
	0,
	77	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ConfirmedServiceResponse = {
	"ConfirmedServiceResponse",
	"ConfirmedServiceResponse",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_ConfirmedServiceResponse_1,
	85,	/* Elements count */
	&asn_SPC_ConfirmedServiceResponse_specs_1	/* Additional specs */
};

