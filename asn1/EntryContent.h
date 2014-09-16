/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#ifndef	_EntryContent_H_
#define	_EntryContent_H_


#include "asn_application.h"

/* Including external dependencies */
#include "TimeOfDay.h"
#include "MMSString.h"
#include "ObjectName.h"
#include "EC-State.h"
#include "constr_SEQUENCE.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EntryContent__entryForm_PR {
	EntryContent__entryForm_PR_NOTHING,	/* No components present */
	EntryContent__entryForm_PR_data,
	EntryContent__entryForm_PR_annotation
} EntryContent__entryForm_PR;

/* Forward declarations */
struct Journal_Variable;

/* EntryContent */
typedef struct EntryContent {
	TimeOfDay_t	 occurrenceTime;
	struct EntryContent__entryForm {
		EntryContent__entryForm_PR present;
		union EntryContent__entryForm_u {
			struct EntryContent__entryForm__data {
				struct EntryContent__entryForm__data__event {
					ObjectName_t	 eventConditionName;
					EC_State_t	 currentState;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *event;
				struct EntryContent__entryForm__data__listOfVariables {
					A_SEQUENCE_OF(struct Journal_Variable) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *listOfVariables;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} data;
			MMSString_t	 annotation;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} entryForm;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EntryContent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EntryContent;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Journal-Variable.h"

#endif	/* _EntryContent_H_ */