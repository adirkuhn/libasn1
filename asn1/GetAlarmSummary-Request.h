/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_GetAlarmSummary_Request_H_
#define	_GetAlarmSummary_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BOOLEAN.h"
#include "NativeInteger.h"
#include "Unsigned8.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GetAlarmSummary_Request__acknowledgementFilter {
	GetAlarmSummary_Request__acknowledgementFilter_not_acked	= 0,
	GetAlarmSummary_Request__acknowledgementFilter_acked	= 1,
	GetAlarmSummary_Request__acknowledgementFilter_all	= 2
} e_GetAlarmSummary_Request__acknowledgementFilter;

/* Forward declarations */
struct ObjectName;

/* GetAlarmSummary-Request */
typedef struct GetAlarmSummary_Request {
	BOOLEAN_t	*enrollmentsOnly	/* DEFAULT TRUE */;
	BOOLEAN_t	*activeAlarmsOnly	/* DEFAULT TRUE */;
	long	 acknowledgementFilter	/* DEFAULT 0 */;
	struct GetAlarmSummary_Request__severityFilter {
		Unsigned8_t	 mostSevere;
		Unsigned8_t	 leastSevere;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *severityFilter;
	struct ObjectName	*continueAfter	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GetAlarmSummary_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GetAlarmSummary_Request;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ObjectName.h"

#endif	/* _GetAlarmSummary_Request_H_ */