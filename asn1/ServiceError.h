/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_ServiceError_H_
#define	_ServiceError_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "VisibleString.h"
#include "constr_CHOICE.h"
#include "ObtainFile-Error.h"
#include "Start-Error.h"
#include "Stop-Error.h"
#include "Resume-Error.h"
#include "Reset-Error.h"
#include "DeleteVariableAccess-Error.h"
#include "DeleteNamedVariableList-Error.h"
#include "DeleteNamedType-Error.h"
#include "DefineEventEnrollment-Error.h"
#include "FileRename-Error.h"
#include "AdditionalService-Error.h"
#include "ChangeAccessControl-Error.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ServiceError__errorClass_PR {
	ServiceError__errorClass_PR_NOTHING,	/* No components present */
	ServiceError__errorClass_PR_vmd_state,
	ServiceError__errorClass_PR_application_reference,
	ServiceError__errorClass_PR_definition,
	ServiceError__errorClass_PR_resource,
	ServiceError__errorClass_PR_service,
	ServiceError__errorClass_PR_service_preempt,
	ServiceError__errorClass_PR_time_resolution,
	ServiceError__errorClass_PR_access,
	ServiceError__errorClass_PR_initiate,
	ServiceError__errorClass_PR_conclude,
	ServiceError__errorClass_PR_cancel,
	ServiceError__errorClass_PR_file,
	ServiceError__errorClass_PR_others
} ServiceError__errorClass_PR;
typedef enum ServiceError__errorClass__vmd_state {
	ServiceError__errorClass__vmd_state_other	= 0,
	ServiceError__errorClass__vmd_state_vmd_state_conflict	= 1,
	ServiceError__errorClass__vmd_state_vmd_operational_problem	= 2,
	ServiceError__errorClass__vmd_state_domain_transfer_problem	= 3,
	ServiceError__errorClass__vmd_state_state_machine_id_invalid	= 4
} e_ServiceError__errorClass__vmd_state;
typedef enum ServiceError__errorClass__application_reference {
	ServiceError__errorClass__application_reference_other	= 0,
	ServiceError__errorClass__application_reference_application_unreachable	= 1,
	ServiceError__errorClass__application_reference_connection_lost	= 2,
	ServiceError__errorClass__application_reference_application_reference_invalid	= 3,
	ServiceError__errorClass__application_reference_context_unsupported	= 4
} e_ServiceError__errorClass__application_reference;
typedef enum ServiceError__errorClass__definition {
	ServiceError__errorClass__definition_other	= 0,
	ServiceError__errorClass__definition_object_undefined	= 1,
	ServiceError__errorClass__definition_invalid_address	= 2,
	ServiceError__errorClass__definition_type_unsupported	= 3,
	ServiceError__errorClass__definition_type_inconsistent	= 4,
	ServiceError__errorClass__definition_object_exists	= 5,
	ServiceError__errorClass__definition_object_attribute_inconsistent	= 6
} e_ServiceError__errorClass__definition;
typedef enum ServiceError__errorClass__resource {
	ServiceError__errorClass__resource_other	= 0,
	ServiceError__errorClass__resource_memory_unavailable	= 1,
	ServiceError__errorClass__resource_processor_resource_unavailable	= 2,
	ServiceError__errorClass__resource_mass_storage_unavailable	= 3,
	ServiceError__errorClass__resource_capability_unavailable	= 4,
	ServiceError__errorClass__resource_capability_unknown	= 5
} e_ServiceError__errorClass__resource;
typedef enum ServiceError__errorClass__service {
	ServiceError__errorClass__service_other	= 0,
	ServiceError__errorClass__service_primitives_out_of_sequence	= 1,
	ServiceError__errorClass__service_object_state_conflict	= 2,
	ServiceError__errorClass__service_continuation_invalid	= 4,
	ServiceError__errorClass__service_object_constraint_conflict	= 5
} e_ServiceError__errorClass__service;
typedef enum ServiceError__errorClass__service_preempt {
	ServiceError__errorClass__service_preempt_other	= 0,
	ServiceError__errorClass__service_preempt_timeout	= 1,
	ServiceError__errorClass__service_preempt_deadlock	= 2,
	ServiceError__errorClass__service_preempt_cancel	= 3
} e_ServiceError__errorClass__service_preempt;
typedef enum ServiceError__errorClass__time_resolution {
	ServiceError__errorClass__time_resolution_other	= 0,
	ServiceError__errorClass__time_resolution_unsupportable_time_resolution	= 1
} e_ServiceError__errorClass__time_resolution;
typedef enum ServiceError__errorClass__access {
	ServiceError__errorClass__access_other	= 0,
	ServiceError__errorClass__access_object_access_unsupported	= 1,
	ServiceError__errorClass__access_object_non_existent	= 2,
	ServiceError__errorClass__access_object_access_denied	= 3,
	ServiceError__errorClass__access_object_invalidated	= 4
} e_ServiceError__errorClass__access;
typedef enum ServiceError__errorClass__initiate {
	ServiceError__errorClass__initiate_other	= 0,
	ServiceError__errorClass__initiate_max_services_outstanding_calling_insufficient	= 3,
	ServiceError__errorClass__initiate_max_services_outstanding_called_insufficient	= 4,
	ServiceError__errorClass__initiate_service_CBB_insufficient	= 5,
	ServiceError__errorClass__initiate_parameter_CBB_insufficient	= 6,
	ServiceError__errorClass__initiate_nesting_level_insufficient	= 7
} e_ServiceError__errorClass__initiate;
typedef enum ServiceError__errorClass__conclude {
	ServiceError__errorClass__conclude_other	= 0,
	ServiceError__errorClass__conclude_further_communication_required	= 1
} e_ServiceError__errorClass__conclude;
typedef enum ServiceError__errorClass__cancel {
	ServiceError__errorClass__cancel_other	= 0,
	ServiceError__errorClass__cancel_invoke_id_unknown	= 1,
	ServiceError__errorClass__cancel_cancel_not_possible	= 2
} e_ServiceError__errorClass__cancel;
typedef enum ServiceError__errorClass__file {
	ServiceError__errorClass__file_other	= 0,
	ServiceError__errorClass__file_filename_ambiguous	= 1,
	ServiceError__errorClass__file_file_busy	= 2,
	ServiceError__errorClass__file_filename_syntax_error	= 3,
	ServiceError__errorClass__file_content_type_invalid	= 4,
	ServiceError__errorClass__file_position_invalid	= 5,
	ServiceError__errorClass__file_file_access_denied	= 6,
	ServiceError__errorClass__file_file_non_existent	= 7,
	ServiceError__errorClass__file_duplicate_filename	= 8,
	ServiceError__errorClass__file_insufficient_space_in_filestore	= 9
} e_ServiceError__errorClass__file;
typedef enum ServiceError__serviceSpecificInfo_PR {
	ServiceError__serviceSpecificInfo_PR_NOTHING,	/* No components present */
	ServiceError__serviceSpecificInfo_PR_obtainFile,
	ServiceError__serviceSpecificInfo_PR_start,
	ServiceError__serviceSpecificInfo_PR_stop,
	ServiceError__serviceSpecificInfo_PR_resume,
	ServiceError__serviceSpecificInfo_PR_reset,
	ServiceError__serviceSpecificInfo_PR_deleteVariableAccess,
	ServiceError__serviceSpecificInfo_PR_deleteNamedVariableList,
	ServiceError__serviceSpecificInfo_PR_deleteNamedType,
	ServiceError__serviceSpecificInfo_PR_defineEventEnrollment_Error,
	ServiceError__serviceSpecificInfo_PR_fileRename,
	ServiceError__serviceSpecificInfo_PR_additionalService,
	ServiceError__serviceSpecificInfo_PR_changeAccessControl
} ServiceError__serviceSpecificInfo_PR;

/* ServiceError */
typedef struct ServiceError {
	struct ServiceError__errorClass {
		ServiceError__errorClass_PR present;
		union ServiceError__errorClass_u {
			long	 vmd_state;
			long	 application_reference;
			long	 definition;
			long	 resource;
			long	 service;
			long	 service_preempt;
			long	 time_resolution;
			long	 access;
			long	 initiate;
			long	 conclude;
			long	 cancel;
			long	 file;
			long	 others;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} errorClass;
	long	*additionalCode	/* OPTIONAL */;
	VisibleString_t	*additionalDescription	/* OPTIONAL */;
	struct ServiceError__serviceSpecificInfo {
		ServiceError__serviceSpecificInfo_PR present;
		union ServiceError__serviceSpecificInfo_u {
			ObtainFile_Error_t	 obtainFile;
			Start_Error_t	 start;
			Stop_Error_t	 stop;
			Resume_Error_t	 resume;
			Reset_Error_t	 reset;
			DeleteVariableAccess_Error_t	 deleteVariableAccess;
			DeleteNamedVariableList_Error_t	 deleteNamedVariableList;
			DeleteNamedType_Error_t	 deleteNamedType;
			DefineEventEnrollment_Error_t	 defineEventEnrollment_Error;
			FileRename_Error_t	 fileRename;
			AdditionalService_Error_t	 additionalService;
			ChangeAccessControl_Error_t	 changeAccessControl;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *serviceSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServiceError_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServiceError;

#ifdef __cplusplus
}
#endif

#endif	/* _ServiceError_H_ */
