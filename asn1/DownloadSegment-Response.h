/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_DownloadSegment_Response_H_
#define	_DownloadSegment_Response_H_


#include "asn_application.h"

/* Including external dependencies */
#include "LoadData.h"
#include "BOOLEAN.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DownloadSegment-Response */
typedef struct DownloadSegment_Response {
	LoadData_t	 loadData;
	BOOLEAN_t	*moreFollows	/* DEFAULT TRUE */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DownloadSegment_Response_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DownloadSegment_Response;

#ifdef __cplusplus
}
#endif

#endif	/* _DownloadSegment_Response_H_ */
