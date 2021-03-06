/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "EEAttributes.h"

static asn_TYPE_member_t asn_MBR_eventConditionName_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EEAttributes__eventConditionName, choice.eventCondition),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ObjectName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eventCondition"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EEAttributes__eventConditionName, choice.undefined),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"undefined"
		},
};
static asn_TYPE_tag2member_t asn_MAP_eventConditionName_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eventCondition at 2558 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* undefined at 2559 */
};
static asn_CHOICE_specifics_t asn_SPC_eventConditionName_specs_3 = {
	sizeof(struct EEAttributes__eventConditionName),
	offsetof(struct EEAttributes__eventConditionName, _asn_ctx),
	offsetof(struct EEAttributes__eventConditionName, present),
	sizeof(((struct EEAttributes__eventConditionName *)0)->present),
	asn_MAP_eventConditionName_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eventConditionName_3 = {
	"eventConditionName",
	"eventConditionName",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_eventConditionName_3,
	2,	/* Elements count */
	&asn_SPC_eventConditionName_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_eventActionName_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EEAttributes__eventActionName, choice.eventAction),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ObjectName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eventAction"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EEAttributes__eventActionName, choice.undefined),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"undefined"
		},
};
static asn_TYPE_tag2member_t asn_MAP_eventActionName_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eventAction at 2561 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* undefined at 2562 */
};
static asn_CHOICE_specifics_t asn_SPC_eventActionName_specs_6 = {
	sizeof(struct EEAttributes__eventActionName),
	offsetof(struct EEAttributes__eventActionName, _asn_ctx),
	offsetof(struct EEAttributes__eventActionName, present),
	sizeof(((struct EEAttributes__eventActionName *)0)->present),
	asn_MAP_eventActionName_tag2el_6,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eventActionName_6 = {
	"eventActionName",
	"eventActionName",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_eventActionName_6,
	2,	/* Elements count */
	&asn_SPC_eventActionName_specs_6	/* Additional specs */
};

static int asn_DFL_12_set_0(int set_value, void **sptr) {
	EE_Duration_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		*st = 0;
		return 0;
	} else {
		/* Test default value 0 */
		return (*st == 0);
	}
}
static asn_TYPE_member_t asn_MBR_displayEnhancement_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EEAttributes__displayEnhancement, choice.string),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VisibleString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"string"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EEAttributes__displayEnhancement, choice.index),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"index"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EEAttributes__displayEnhancement, choice.noEnhancement),
		(ASN_TAG_CLASS_UNIVERSAL | (5 << 2)),
		0,
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"noEnhancement"
		},
};
static asn_TYPE_tag2member_t asn_MAP_displayEnhancement_tag2el_15[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (5 << 2)), 2, 0, 0 }, /* noEnhancement at 2572 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* string at 2570 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* index at 2571 */
};
static asn_CHOICE_specifics_t asn_SPC_displayEnhancement_specs_15 = {
	sizeof(struct EEAttributes__displayEnhancement),
	offsetof(struct EEAttributes__displayEnhancement, _asn_ctx),
	offsetof(struct EEAttributes__displayEnhancement, present),
	sizeof(((struct EEAttributes__displayEnhancement *)0)->present),
	asn_MAP_displayEnhancement_tag2el_15,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_displayEnhancement_15 = {
	"displayEnhancement",
	"displayEnhancement",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_displayEnhancement_15,
	3,	/* Elements count */
	&asn_SPC_displayEnhancement_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_EEAttributes_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EEAttributes, eventEnrollmentName),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ObjectName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eventEnrollmentName"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EEAttributes, eventConditionName),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_eventConditionName_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eventConditionName"
		},
	{ ATF_POINTER, 3, offsetof(struct EEAttributes, eventActionName),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_eventActionName_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eventActionName"
		},
	{ ATF_POINTER, 2, offsetof(struct EEAttributes, clientApplication),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ApplicationReference,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"clientApplication"
		},
	{ ATF_POINTER, 1, offsetof(struct EEAttributes, mmsDeletable),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"mmsDeletable"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EEAttributes, enrollmentClass),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EE_Class,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"enrollmentClass"
		},
	{ ATF_NOFLAGS, 3, offsetof(struct EEAttributes, duration),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EE_Duration,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		asn_DFL_12_set_0,	/* DEFAULT 0 */
		"duration"
		},
	{ ATF_POINTER, 2, offsetof(struct EEAttributes, invokeID),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Unsigned32,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"invokeID"
		},
	{ ATF_POINTER, 1, offsetof(struct EEAttributes, remainingAcceptableDelay),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Unsigned32,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"remainingAcceptableDelay"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EEAttributes, displayEnhancement),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_displayEnhancement_15,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"displayEnhancement"
		},
};
static ber_tlv_tag_t asn_DEF_EEAttributes_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_EEAttributes_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eventEnrollmentName at 2556 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* eventConditionName at 2558 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* eventActionName at 2561 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* clientApplication at 2563 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* mmsDeletable at 2564 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* enrollmentClass at 2565 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* duration at 2566 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* invokeID at 2567 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* remainingAcceptableDelay at 2568 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* displayEnhancement at 2570 */
};
static asn_SEQUENCE_specifics_t asn_SPC_EEAttributes_specs_1 = {
	sizeof(struct EEAttributes),
	offsetof(struct EEAttributes, _asn_ctx),
	asn_MAP_EEAttributes_tag2el_1,
	10,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_EEAttributes = {
	"EEAttributes",
	"EEAttributes",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_EEAttributes_tags_1,
	sizeof(asn_DEF_EEAttributes_tags_1)
		/sizeof(asn_DEF_EEAttributes_tags_1[0]), /* 1 */
	asn_DEF_EEAttributes_tags_1,	/* Same as above */
	sizeof(asn_DEF_EEAttributes_tags_1)
		/sizeof(asn_DEF_EEAttributes_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_EEAttributes_1,
	10,	/* Elements count */
	&asn_SPC_EEAttributes_specs_1	/* Additional specs */
};

