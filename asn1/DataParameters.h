/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-SCI-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_DataParameters_H_
#define	_DataParameters_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "BOOLEAN.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DataParameters */
typedef struct DataParameters {
	long	*bit_string	/* OPTIONAL */;
	long	*integer	/* OPTIONAL */;
	long	*Unsigned	/* OPTIONAL */;
	struct DataParameters__floating_point {
		long	 total;
		long	 exponent;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *floating_point;
	long	*octet_string	/* OPTIONAL */;
	long	*visible_string	/* OPTIONAL */;
	BOOLEAN_t	*binary_time	/* OPTIONAL */;
	long	*bcd	/* OPTIONAL */;
	long	*mmsString	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DataParameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DataParameters;

#ifdef __cplusplus
}
#endif

#endif	/* _DataParameters_H_ */
