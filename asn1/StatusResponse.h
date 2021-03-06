/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_StatusResponse_H_
#define	_StatusResponse_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "BIT_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum StatusResponse__vmdLogicalStatus {
	StatusResponse__vmdLogicalStatus_state_changes_allowed	= 0,
	StatusResponse__vmdLogicalStatus_no_state_changes_allowed	= 1,
	StatusResponse__vmdLogicalStatus_limited_services_permitted	= 2,
	StatusResponse__vmdLogicalStatus_support_services_allowed	= 3
} e_StatusResponse__vmdLogicalStatus;
typedef enum StatusResponse__vmdPhysicalStatus {
	StatusResponse__vmdPhysicalStatus_operational	= 0,
	StatusResponse__vmdPhysicalStatus_partially_operational	= 1,
	StatusResponse__vmdPhysicalStatus_inoperable	= 2,
	StatusResponse__vmdPhysicalStatus_needs_commissioning	= 3
} e_StatusResponse__vmdPhysicalStatus;

/* StatusResponse */
typedef struct StatusResponse {
	long	 vmdLogicalStatus;
	long	 vmdPhysicalStatus;
	BIT_STRING_t	*localDetail	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} StatusResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_StatusResponse;

#ifdef __cplusplus
}
#endif

#endif	/* _StatusResponse_H_ */
