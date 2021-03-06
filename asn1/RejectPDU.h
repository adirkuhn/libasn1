/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_RejectPDU_H_
#define	_RejectPDU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Unsigned32.h"
#include "NativeInteger.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RejectPDU__rejectReason_PR {
	RejectPDU__rejectReason_PR_NOTHING,	/* No components present */
	RejectPDU__rejectReason_PR_confirmed_requestPDU,
	RejectPDU__rejectReason_PR_confirmed_responsePDU,
	RejectPDU__rejectReason_PR_confirmed_errorPDU,
	RejectPDU__rejectReason_PR_unconfirmedPDU,
	RejectPDU__rejectReason_PR_pdu_error,
	RejectPDU__rejectReason_PR_cancel_requestPDU,
	RejectPDU__rejectReason_PR_cancel_responsePDU,
	RejectPDU__rejectReason_PR_cancel_errorPDU,
	RejectPDU__rejectReason_PR_conclude_requestPDU,
	RejectPDU__rejectReason_PR_conclude_responsePDU,
	RejectPDU__rejectReason_PR_conclude_errorPDU
} RejectPDU__rejectReason_PR;
typedef enum RejectPDU__rejectReason__confirmed_requestPDU {
	RejectPDU__rejectReason__confirmed_requestPDU_other	= 0,
	RejectPDU__rejectReason__confirmed_requestPDU_unrecognized_service	= 1,
	RejectPDU__rejectReason__confirmed_requestPDU_unrecognized_modifier	= 2,
	RejectPDU__rejectReason__confirmed_requestPDU_invalid_invokeID	= 3,
	RejectPDU__rejectReason__confirmed_requestPDU_invalid_argument	= 4,
	RejectPDU__rejectReason__confirmed_requestPDU_invalid_modifier	= 5,
	RejectPDU__rejectReason__confirmed_requestPDU_max_serv_outstanding_exceeded	= 6,
	RejectPDU__rejectReason__confirmed_requestPDU_max_recursion_exceeded	= 8,
	RejectPDU__rejectReason__confirmed_requestPDU_value_out_of_range	= 9
} e_RejectPDU__rejectReason__confirmed_requestPDU;
typedef enum RejectPDU__rejectReason__confirmed_responsePDU {
	RejectPDU__rejectReason__confirmed_responsePDU_other	= 0,
	RejectPDU__rejectReason__confirmed_responsePDU_unrecognized_service	= 1,
	RejectPDU__rejectReason__confirmed_responsePDU_invalid_invokeID	= 2,
	RejectPDU__rejectReason__confirmed_responsePDU_invalid_result	= 3,
	RejectPDU__rejectReason__confirmed_responsePDU_max_recursion_exceeded	= 5,
	RejectPDU__rejectReason__confirmed_responsePDU_value_out_of_range	= 6
} e_RejectPDU__rejectReason__confirmed_responsePDU;
typedef enum RejectPDU__rejectReason__confirmed_errorPDU {
	RejectPDU__rejectReason__confirmed_errorPDU_other	= 0,
	RejectPDU__rejectReason__confirmed_errorPDU_unrecognized_service	= 1,
	RejectPDU__rejectReason__confirmed_errorPDU_invalid_invokeID	= 2,
	RejectPDU__rejectReason__confirmed_errorPDU_invalid_serviceError	= 3,
	RejectPDU__rejectReason__confirmed_errorPDU_value_out_of_range	= 4
} e_RejectPDU__rejectReason__confirmed_errorPDU;
typedef enum RejectPDU__rejectReason__unconfirmedPDU {
	RejectPDU__rejectReason__unconfirmedPDU_other	= 0,
	RejectPDU__rejectReason__unconfirmedPDU_unrecognized_service	= 1,
	RejectPDU__rejectReason__unconfirmedPDU_invalid_argument	= 2,
	RejectPDU__rejectReason__unconfirmedPDU_max_recursion_exceeded	= 3,
	RejectPDU__rejectReason__unconfirmedPDU_value_out_of_range	= 4
} e_RejectPDU__rejectReason__unconfirmedPDU;
typedef enum RejectPDU__rejectReason__pdu_error {
	RejectPDU__rejectReason__pdu_error_unknown_pdu_type	= 0,
	RejectPDU__rejectReason__pdu_error_invalid_pdu	= 1,
	RejectPDU__rejectReason__pdu_error_illegal_acse_mapping	= 2
} e_RejectPDU__rejectReason__pdu_error;
typedef enum RejectPDU__rejectReason__cancel_requestPDU {
	RejectPDU__rejectReason__cancel_requestPDU_other	= 0,
	RejectPDU__rejectReason__cancel_requestPDU_invalid_invokeID	= 1
} e_RejectPDU__rejectReason__cancel_requestPDU;
typedef enum RejectPDU__rejectReason__cancel_responsePDU {
	RejectPDU__rejectReason__cancel_responsePDU_other	= 0,
	RejectPDU__rejectReason__cancel_responsePDU_invalid_invokeID	= 1
} e_RejectPDU__rejectReason__cancel_responsePDU;
typedef enum RejectPDU__rejectReason__cancel_errorPDU {
	RejectPDU__rejectReason__cancel_errorPDU_other	= 0,
	RejectPDU__rejectReason__cancel_errorPDU_invalid_invokeID	= 1,
	RejectPDU__rejectReason__cancel_errorPDU_invalid_serviceError	= 2,
	RejectPDU__rejectReason__cancel_errorPDU_value_out_of_range	= 3
} e_RejectPDU__rejectReason__cancel_errorPDU;
typedef enum RejectPDU__rejectReason__conclude_requestPDU {
	RejectPDU__rejectReason__conclude_requestPDU_other	= 0,
	RejectPDU__rejectReason__conclude_requestPDU_invalid_argument	= 1
} e_RejectPDU__rejectReason__conclude_requestPDU;
typedef enum RejectPDU__rejectReason__conclude_responsePDU {
	RejectPDU__rejectReason__conclude_responsePDU_other	= 0,
	RejectPDU__rejectReason__conclude_responsePDU_invalid_result	= 1
} e_RejectPDU__rejectReason__conclude_responsePDU;
typedef enum RejectPDU__rejectReason__conclude_errorPDU {
	RejectPDU__rejectReason__conclude_errorPDU_other	= 0,
	RejectPDU__rejectReason__conclude_errorPDU_invalid_serviceError	= 1,
	RejectPDU__rejectReason__conclude_errorPDU_value_out_of_range	= 2
} e_RejectPDU__rejectReason__conclude_errorPDU;

/* RejectPDU */
typedef struct RejectPDU {
	Unsigned32_t	*originalInvokeID	/* OPTIONAL */;
	struct RejectPDU__rejectReason {
		RejectPDU__rejectReason_PR present;
		union RejectPDU__rejectReason_u {
			long	 confirmed_requestPDU;
			long	 confirmed_responsePDU;
			long	 confirmed_errorPDU;
			long	 unconfirmedPDU;
			long	 pdu_error;
			long	 cancel_requestPDU;
			long	 cancel_responsePDU;
			long	 cancel_errorPDU;
			long	 conclude_requestPDU;
			long	 conclude_responsePDU;
			long	 conclude_errorPDU;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} rejectReason;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RejectPDU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RejectPDU;

#ifdef __cplusplus
}
#endif

#endif	/* _RejectPDU_H_ */
