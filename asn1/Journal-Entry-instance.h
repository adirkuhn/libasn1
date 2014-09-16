/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-SCI-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_Journal_Entry_instance_H_
#define	_Journal_Entry_instance_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "ApplicationReference.h"
#include "TimeOfDay.h"
#include "NativeInteger.h"
#include "NativeEnumerated.h"
#include "MMS255String.h"
#include "ObjectName.h"
#include "EC-State.h"
#include "constr_SEQUENCE.h"
#include "asn_SEQUENCE_OF.h"
#include "Data.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Journal_Entry_instance__informationType {
	Journal_Entry_instance__informationType_annotation	= 0,
	Journal_Entry_instance__informationType_event_data	= 1,
	Journal_Entry_instance__informationType_data	= 2
} e_Journal_Entry_instance__informationType;

/* Forward declarations */
struct Journal_instance;

/* Journal-Entry-instance */
typedef struct Journal_Entry_instance {
	struct Journal_instance	*journal;
	OCTET_STRING_t	 entry;
	ApplicationReference_t	 clientApplication;
	TimeOfDay_t	 timeStamp;
	long	 orderOfReceipt;
	long	 informationType;
	MMS255String_t	*textComment	/* OPTIONAL */;
	struct Journal_Entry_instance__eventTransitionRecord {
		ObjectName_t	 name;
		EC_State_t	 currentState;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *eventTransitionRecord;
	struct Journal_Entry_instance__journalVariables {
		A_SEQUENCE_OF(struct Journal_Entry_instance__journalVariables__Member {
			MMS255String_t	 variableTag;
			Data_t	 valueSpecification;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} ) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *journalVariables;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Journal_Entry_instance_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_informationType_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Journal_Entry_instance;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Journal-instance.h"

#endif	/* _Journal_Entry_instance_H_ */
