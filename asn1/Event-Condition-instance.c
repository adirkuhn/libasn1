/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-SCI-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "Event-Condition-instance.h"

static asn_TYPE_member_t asn_MBR_eventEnrollments_11[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Event_Enrollment_instance,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_eventEnrollments_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_eventEnrollments_specs_11 = {
	sizeof(struct Event_Condition_instance__definition__details__eventEnrollments),
	offsetof(struct Event_Condition_instance__definition__details__eventEnrollments, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eventEnrollments_11 = {
	"eventEnrollments",
	"eventEnrollments",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_eventEnrollments_tags_11,
	sizeof(asn_DEF_eventEnrollments_tags_11)
		/sizeof(asn_DEF_eventEnrollments_tags_11[0]) - 1, /* 1 */
	asn_DEF_eventEnrollments_tags_11,	/* Same as above */
	sizeof(asn_DEF_eventEnrollments_tags_11)
		/sizeof(asn_DEF_eventEnrollments_tags_11[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_eventEnrollments_11,
	1,	/* Single element */
	&asn_SPC_eventEnrollments_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_monitoredVariable_15[] = {
	{ ATF_POINTER, 0, offsetof(struct Event_Condition_instance__definition__details__monitoredVariable, choice.named),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Named_Variable_instance,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"named"
		},
	{ ATF_POINTER, 0, offsetof(struct Event_Condition_instance__definition__details__monitoredVariable, choice.unnamed),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Unnamed_Variable_instance,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"unnamed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Condition_instance__definition__details__monitoredVariable, choice.unspecified),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"unspecified"
		},
};
static asn_TYPE_tag2member_t asn_MAP_monitoredVariable_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 0, 0, 0 }, /* named at 3137 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 1, 0, 0 }, /* unnamed at 3139 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 2, 0, 0 } /* unspecified at 3140 */
};
static asn_CHOICE_specifics_t asn_SPC_monitoredVariable_specs_15 = {
	sizeof(struct Event_Condition_instance__definition__details__monitoredVariable),
	offsetof(struct Event_Condition_instance__definition__details__monitoredVariable, _asn_ctx),
	offsetof(struct Event_Condition_instance__definition__details__monitoredVariable, present),
	sizeof(((struct Event_Condition_instance__definition__details__monitoredVariable *)0)->present),
	asn_MAP_monitoredVariable_tag2el_15,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_monitoredVariable_15 = {
	"monitoredVariable",
	"monitoredVariable",
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
	asn_MBR_monitoredVariable_15,
	3,	/* Elements count */
	&asn_SPC_monitoredVariable_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_displayEnhancement_21[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Condition_instance__definition__details__displayEnhancement, choice.text),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MMSString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"text"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Condition_instance__definition__details__displayEnhancement, choice.number),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"number"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Condition_instance__definition__details__displayEnhancement, choice.none),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"none"
		},
};
static asn_TYPE_tag2member_t asn_MAP_displayEnhancement_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 0, 0, 0 }, /* text at 3146 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 1, 0, 0 }, /* number at 3147 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 2, 0, 0 } /* none at 3148 */
};
static asn_CHOICE_specifics_t asn_SPC_displayEnhancement_specs_21 = {
	sizeof(struct Event_Condition_instance__definition__details__displayEnhancement),
	offsetof(struct Event_Condition_instance__definition__details__displayEnhancement, _asn_ctx),
	offsetof(struct Event_Condition_instance__definition__details__displayEnhancement, present),
	sizeof(((struct Event_Condition_instance__definition__details__displayEnhancement *)0)->present),
	asn_MAP_displayEnhancement_tag2el_21,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_displayEnhancement_21 = {
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
	asn_MBR_displayEnhancement_21,
	3,	/* Elements count */
	&asn_SPC_displayEnhancement_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_group_Priority_Override_25[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Condition_instance__definition__details__group_Priority_Override, choice.priority),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Priority,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"priority"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Condition_instance__definition__details__group_Priority_Override, choice.undefined),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"undefined"
		},
};
static asn_TYPE_tag2member_t asn_MAP_group_Priority_Override_tag2el_25[] = {
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 0, 0, 0 }, /* priority at 3151 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 1, 0, 0 } /* undefined at 3152 */
};
static asn_CHOICE_specifics_t asn_SPC_group_Priority_Override_specs_25 = {
	sizeof(struct Event_Condition_instance__definition__details__group_Priority_Override),
	offsetof(struct Event_Condition_instance__definition__details__group_Priority_Override, _asn_ctx),
	offsetof(struct Event_Condition_instance__definition__details__group_Priority_Override, present),
	sizeof(((struct Event_Condition_instance__definition__details__group_Priority_Override *)0)->present),
	asn_MAP_group_Priority_Override_tag2el_25,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_group_Priority_Override_25 = {
	"group-Priority-Override",
	"group-Priority-Override",
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
	asn_MBR_group_Priority_Override_25,
	2,	/* Elements count */
	&asn_SPC_group_Priority_Override_specs_25	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_referencingEventConditionLists_28[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Event_Condition_List_instance,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_referencingEventConditionLists_tags_28[] = {
	(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_referencingEventConditionLists_specs_28 = {
	sizeof(struct Event_Condition_instance__definition__details__referencingEventConditionLists),
	offsetof(struct Event_Condition_instance__definition__details__referencingEventConditionLists, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_referencingEventConditionLists_28 = {
	"referencingEventConditionLists",
	"referencingEventConditionLists",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_referencingEventConditionLists_tags_28,
	sizeof(asn_DEF_referencingEventConditionLists_tags_28)
		/sizeof(asn_DEF_referencingEventConditionLists_tags_28[0]) - 1, /* 1 */
	asn_DEF_referencingEventConditionLists_tags_28,	/* Same as above */
	sizeof(asn_DEF_referencingEventConditionLists_tags_28)
		/sizeof(asn_DEF_referencingEventConditionLists_tags_28[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_referencingEventConditionLists_28,
	1,	/* Single element */
	&asn_SPC_referencingEventConditionLists_specs_28	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_details_5[] = {
	{ ATF_POINTER, 0, offsetof(struct Event_Condition_instance__definition__details, accessControl),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Access_Control_List_instance,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"accessControl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Condition_instance__definition__details, ecClass),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EC_Class,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"ecClass"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Condition_instance__definition__details, ecState),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EC_State,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"ecState"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Condition_instance__definition__details, priority),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Priority,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"priority"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Condition_instance__definition__details, severity),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Severity,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"severity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Condition_instance__definition__details, eventEnrollments),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_eventEnrollments_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eventEnrollments"
		},
	{ ATF_POINTER, 7, offsetof(struct Event_Condition_instance__definition__details, enabled),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"enabled"
		},
	{ ATF_POINTER, 6, offsetof(struct Event_Condition_instance__definition__details, alarmSummaryReports),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"alarmSummaryReports"
		},
	{ ATF_POINTER, 5, offsetof(struct Event_Condition_instance__definition__details, monitoredVariable),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_monitoredVariable_15,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"monitoredVariable"
		},
	{ ATF_POINTER, 4, offsetof(struct Event_Condition_instance__definition__details, evaluationInterval),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"evaluationInterval"
		},
	{ ATF_POINTER, 3, offsetof(struct Event_Condition_instance__definition__details, displayEnhancement),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_displayEnhancement_21,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"displayEnhancement"
		},
	{ ATF_POINTER, 2, offsetof(struct Event_Condition_instance__definition__details, group_Priority_Override),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_group_Priority_Override_25,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"group-Priority-Override"
		},
	{ ATF_POINTER, 1, offsetof(struct Event_Condition_instance__definition__details, referencingEventConditionLists),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		0,
		&asn_DEF_referencingEventConditionLists_28,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"referencingEventConditionLists"
		},
};
static ber_tlv_tag_t asn_DEF_details_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_details_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 0, 0, 0 }, /* accessControl at 3117 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 1, 0, 0 }, /* ecClass at 3119 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 2, 0, 0 }, /* ecState at 3121 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 3, 0, 0 }, /* priority at 3123 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 4, 0, 0 }, /* severity at 3125 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 5, 0, 0 }, /* eventEnrollments at 3128 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 6, 0, 0 }, /* enabled at 3132 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 7, 0, 0 }, /* alarmSummaryReports at 3134 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 8, 0, 0 }, /* named at 3137 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 8, 0, 0 }, /* unnamed at 3139 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 8, 0, 0 }, /* unspecified at 3140 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 9, 0, 0 }, /* evaluationInterval at 3143 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 10, 0, 0 }, /* text at 3146 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 10, 0, 0 }, /* number at 3147 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 10, 0, 0 }, /* none at 3148 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 11, 0, 0 }, /* priority at 3151 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 11, 0, 0 }, /* undefined at 3152 */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 12, 0, 0 } /* referencingEventConditionLists at 3156 */
};
static asn_SEQUENCE_specifics_t asn_SPC_details_specs_5 = {
	sizeof(struct Event_Condition_instance__definition__details),
	offsetof(struct Event_Condition_instance__definition__details, _asn_ctx),
	asn_MAP_details_tag2el_5,
	18,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	9,	/* Start extensions */
	14	/* Stop extensions */
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
	13,	/* Elements count */
	&asn_SPC_details_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_definition_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Condition_instance__definition, choice.reference),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OBJECT_IDENTIFIER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"reference"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Condition_instance__definition, choice.details),
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
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* reference at 3114 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 } /* details at 3117 */
};
static asn_CHOICE_specifics_t asn_SPC_definition_specs_3 = {
	sizeof(struct Event_Condition_instance__definition),
	offsetof(struct Event_Condition_instance__definition, _asn_ctx),
	offsetof(struct Event_Condition_instance__definition, present),
	sizeof(((struct Event_Condition_instance__definition *)0)->present),
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

static asn_TYPE_member_t asn_MBR_Event_Condition_instance_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Condition_instance, name),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ObjectName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"name"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Condition_instance, definition),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_definition_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"definition"
		},
};
static ber_tlv_tag_t asn_DEF_Event_Condition_instance_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Event_Condition_instance_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* name at 3112 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reference at 3114 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 } /* details at 3117 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Event_Condition_instance_specs_1 = {
	sizeof(struct Event_Condition_instance),
	offsetof(struct Event_Condition_instance, _asn_ctx),
	asn_MAP_Event_Condition_instance_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Event_Condition_instance = {
	"Event-Condition-instance",
	"Event-Condition-instance",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Event_Condition_instance_tags_1,
	sizeof(asn_DEF_Event_Condition_instance_tags_1)
		/sizeof(asn_DEF_Event_Condition_instance_tags_1[0]), /* 1 */
	asn_DEF_Event_Condition_instance_tags_1,	/* Same as above */
	sizeof(asn_DEF_Event_Condition_instance_tags_1)
		/sizeof(asn_DEF_Event_Condition_instance_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Event_Condition_instance_1,
	2,	/* Elements count */
	&asn_SPC_Event_Condition_instance_specs_1	/* Additional specs */
};
