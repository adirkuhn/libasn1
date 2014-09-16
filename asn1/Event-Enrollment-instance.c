/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-SCI-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "Event-Enrollment-instance.h"

static asn_TYPE_member_t asn_MBR_remainingDelay_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Enrollment_instance__definition__details__remainingDelay, choice.time),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"time"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Enrollment_instance__definition__details__remainingDelay, choice.forever),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"forever"
		},
};
static asn_TYPE_tag2member_t asn_MAP_remainingDelay_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 0, 0, 0 }, /* time at 3189 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 1, 0, 0 } /* forever at 3190 */
};
static asn_CHOICE_specifics_t asn_SPC_remainingDelay_specs_10 = {
	sizeof(struct Event_Enrollment_instance__definition__details__remainingDelay),
	offsetof(struct Event_Enrollment_instance__definition__details__remainingDelay, _asn_ctx),
	offsetof(struct Event_Enrollment_instance__definition__details__remainingDelay, present),
	sizeof(((struct Event_Enrollment_instance__definition__details__remainingDelay *)0)->present),
	asn_MAP_remainingDelay_tag2el_10,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_remainingDelay_10 = {
	"remainingDelay",
	"remainingDelay",
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
	asn_MBR_remainingDelay_10,
	2,	/* Elements count */
	&asn_SPC_remainingDelay_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_displayEnhancement_18[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Enrollment_instance__definition__details__displayEnhancement, choice.text),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MMSString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"text"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Enrollment_instance__definition__details__displayEnhancement, choice.number),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"number"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Enrollment_instance__definition__details__displayEnhancement, choice.none),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"none"
		},
};
static asn_TYPE_tag2member_t asn_MAP_displayEnhancement_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 0, 0, 0 }, /* text at 3206 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 1, 0, 0 }, /* number at 3207 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 2, 0, 0 } /* none at 3208 */
};
static asn_CHOICE_specifics_t asn_SPC_displayEnhancement_specs_18 = {
	sizeof(struct Event_Enrollment_instance__definition__details__displayEnhancement),
	offsetof(struct Event_Enrollment_instance__definition__details__displayEnhancement, _asn_ctx),
	offsetof(struct Event_Enrollment_instance__definition__details__displayEnhancement, present),
	sizeof(((struct Event_Enrollment_instance__definition__details__displayEnhancement *)0)->present),
	asn_MAP_displayEnhancement_tag2el_18,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_displayEnhancement_18 = {
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
	asn_MBR_displayEnhancement_18,
	3,	/* Elements count */
	&asn_SPC_displayEnhancement_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_details_5[] = {
	{ ATF_POINTER, 0, offsetof(struct Event_Enrollment_instance__definition__details, accessControl),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Access_Control_List_instance,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"accessControl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Enrollment_instance__definition__details, eeClass),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EE_Class,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eeClass"
		},
	{ ATF_POINTER, 0, offsetof(struct Event_Enrollment_instance__definition__details, eventCondition),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Event_Condition_instance,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eventCondition"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Enrollment_instance__definition__details, ecTransitions),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Transitions,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"ecTransitions"
		},
	{ ATF_POINTER, 6, offsetof(struct Event_Enrollment_instance__definition__details, remainingDelay),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_remainingDelay_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"remainingDelay"
		},
	{ ATF_POINTER, 5, offsetof(struct Event_Enrollment_instance__definition__details, eventAction),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Event_Action_instance,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eventAction"
		},
	{ ATF_POINTER, 4, offsetof(struct Event_Enrollment_instance__definition__details, duration),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EE_Duration,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"duration"
		},
	{ ATF_POINTER, 3, offsetof(struct Event_Enrollment_instance__definition__details, clientApplication),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ApplicationReference,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"clientApplication"
		},
	{ ATF_POINTER, 2, offsetof(struct Event_Enrollment_instance__definition__details, aaRule),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AlarmAckRule,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"aaRule"
		},
	{ ATF_POINTER, 1, offsetof(struct Event_Enrollment_instance__definition__details, displayEnhancement),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_displayEnhancement_18,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"displayEnhancement"
		},
};
static ber_tlv_tag_t asn_DEF_details_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_details_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 0, 0, 0 }, /* accessControl at 3179 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 1, 0, 0 }, /* eeClass at 3181 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 2, 0, 0 }, /* eventCondition at 3183 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 3, 0, 0 }, /* ecTransitions at 3185 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 4, 0, 0 }, /* time at 3189 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 4, 0, 0 }, /* forever at 3190 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 5, 0, 0 }, /* eventAction at 3196 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 6, 0, 0 }, /* duration at 3198 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 7, 0, 0 }, /* clientApplication at 3201 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 8, 0, 0 }, /* aaRule at 3203 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 9, 0, 0 }, /* text at 3206 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 9, 0, 0 }, /* number at 3207 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 9, 0, 0 } /* none at 3208 */
};
static asn_SEQUENCE_specifics_t asn_SPC_details_specs_5 = {
	sizeof(struct Event_Enrollment_instance__definition__details),
	offsetof(struct Event_Enrollment_instance__definition__details, _asn_ctx),
	asn_MAP_details_tag2el_5,
	13,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	8,	/* Start extensions */
	11	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_details_5 = {
	"details",
	"details",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_details_tags_5,
	sizeof(asn_DEF_details_tags_5)
		/sizeof(asn_DEF_details_tags_5[0]) - 1, /* 1 */
	asn_DEF_details_tags_5,	/* Same as above */
	sizeof(asn_DEF_details_tags_5)
		/sizeof(asn_DEF_details_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_details_5,
	10,	/* Elements count */
	&asn_SPC_details_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_definition_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Enrollment_instance__definition, choice.reference),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OBJECT_IDENTIFIER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"reference"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Enrollment_instance__definition, choice.details),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_details_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"details"
		},
};
static asn_TYPE_tag2member_t asn_MAP_definition_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* reference at 3176 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 } /* details at 3179 */
};
static asn_CHOICE_specifics_t asn_SPC_definition_specs_3 = {
	sizeof(struct Event_Enrollment_instance__definition),
	offsetof(struct Event_Enrollment_instance__definition, _asn_ctx),
	offsetof(struct Event_Enrollment_instance__definition, present),
	sizeof(((struct Event_Enrollment_instance__definition *)0)->present),
	asn_MAP_definition_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_definition_3 = {
	"definition",
	"definition",
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
	asn_MBR_definition_3,
	2,	/* Elements count */
	&asn_SPC_definition_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Event_Enrollment_instance_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Enrollment_instance, name),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ObjectName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"name"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Enrollment_instance, definition),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_definition_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"definition"
		},
};
static ber_tlv_tag_t asn_DEF_Event_Enrollment_instance_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Event_Enrollment_instance_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* name at 3174 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reference at 3176 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 } /* details at 3179 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Event_Enrollment_instance_specs_1 = {
	sizeof(struct Event_Enrollment_instance),
	offsetof(struct Event_Enrollment_instance, _asn_ctx),
	asn_MAP_Event_Enrollment_instance_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Event_Enrollment_instance = {
	"Event-Enrollment-instance",
	"Event-Enrollment-instance",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Event_Enrollment_instance_tags_1,
	sizeof(asn_DEF_Event_Enrollment_instance_tags_1)
		/sizeof(asn_DEF_Event_Enrollment_instance_tags_1[0]), /* 1 */
	asn_DEF_Event_Enrollment_instance_tags_1,	/* Same as above */
	sizeof(asn_DEF_Event_Enrollment_instance_tags_1)
		/sizeof(asn_DEF_Event_Enrollment_instance_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Event_Enrollment_instance_1,
	2,	/* Elements count */
	&asn_SPC_Event_Enrollment_instance_specs_1	/* Additional specs */
};
