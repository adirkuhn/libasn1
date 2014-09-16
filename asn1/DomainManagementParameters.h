/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-SCI-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_DomainManagementParameters_H_
#define	_DomainManagementParameters_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MMSString.h"
#include "NativeInteger.h"
#include "OBJECT_IDENTIFIER.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DomainManagementParameters */
typedef struct DomainManagementParameters {
	MMSString_t	 loadDataOctet;
	struct DomainManagementParameters__loadDataSyntax {
		A_SEQUENCE_OF(OBJECT_IDENTIFIER_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} loadDataSyntax;
	long	 maxUploads;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DomainManagementParameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DomainManagementParameters;

#ifdef __cplusplus
}
#endif

#endif	/* _DomainManagementParameters_H_ */
