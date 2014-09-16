/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_CS_Start_Request_H_
#define	_CS_Start_Request_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "VisibleString.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CS_Start_Request_PR {
	CS_Start_Request_PR_NOTHING,	/* No components present */
	CS_Start_Request_PR_normal,
	CS_Start_Request_PR_controlling
} CS_Start_Request_PR;

/* Forward declarations */
struct StartCount;

/* CS-Start-Request */
typedef struct CS_Start_Request {
	CS_Start_Request_PR present;
	union CS_Start_Request_u {
		NULL_t	 normal;
		struct CS_Start_Request__controlling {
			VisibleString_t	*startLocation	/* OPTIONAL */;
			struct StartCount	*startCount	/* DEFAULT cycleCount: 1 */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} controlling;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CS_Start_Request_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CS_Start_Request;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "StartCount.h"

#endif	/* _CS_Start_Request_H_ */
