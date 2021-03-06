/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-SCI-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "Event-Condition-List-instance.h"

static asn_TYPE_member_t asn_MBR_eventConditions_7[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Event_Condition_instance,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_eventConditions_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_eventConditions_specs_7 = {
	sizeof(struct Event_Condition_List_instance__definition__details__eventConditions),
	offsetof(struct Event_Condition_List_instance__definition__details__eventConditions, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eventConditions_7 = {
	"eventConditions",
	"eventConditions",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_eventConditions_tags_7,
	sizeof(asn_DEF_eventConditions_tags_7)
		/sizeof(asn_DEF_eventConditions_tags_7[0]) - 1, /* 1 */
	asn_DEF_eventConditions_tags_7,	/* Same as above */
	sizeof(asn_DEF_eventConditions_tags_7)
		/sizeof(asn_DEF_eventConditions_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_eventConditions_7,
	1,	/* Single element */
	&asn_SPC_eventConditions_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_eventConditionLists_9[] = {
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
static ber_tlv_tag_t asn_DEF_eventConditionLists_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_eventConditionLists_specs_9 = {
	sizeof(struct Event_Condition_List_instance__definition__details__eventConditionLists),
	offsetof(struct Event_Condition_List_instance__definition__details__eventConditionLists, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eventConditionLists_9 = {
	"eventConditionLists",
	"eventConditionLists",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_eventConditionLists_tags_9,
	sizeof(asn_DEF_eventConditionLists_tags_9)
		/sizeof(asn_DEF_eventConditionLists_tags_9[0]) - 1, /* 1 */
	asn_DEF_eventConditionLists_tags_9,	/* Same as above */
	sizeof(asn_DEF_eventConditionLists_tags_9)
		/sizeof(asn_DEF_eventConditionLists_tags_9[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_eventConditionLists_9,
	1,	/* Single element */
	&asn_SPC_eventConditionLists_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_referencingEventConditionLists_11[] = {
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
static ber_tlv_tag_t asn_DEF_referencingEventConditionLists_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_referencingEventConditionLists_specs_11 = {
	sizeof(struct Event_Condition_List_instance__definition__details__referencingEventConditionLists),
	offsetof(struct Event_Condition_List_instance__definition__details__referencingEventConditionLists, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_referencingEventConditionLists_11 = {
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
	asn_DEF_referencingEventConditionLists_tags_11,
	sizeof(asn_DEF_referencingEventConditionLists_tags_11)
		/sizeof(asn_DEF_referencingEventConditionLists_tags_11[0]) - 1, /* 1 */
	asn_DEF_referencingEventConditionLists_tags_11,	/* Same as above */
	sizeof(asn_DEF_referencingEventConditionLists_tags_11)
		/sizeof(asn_DEF_referencingEventConditionLists_tags_11[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_referencingEventConditionLists_11,
	1,	/* Single element */
	&asn_SPC_referencingEventConditionLists_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_details_5[] = {
	{ ATF_POINTER, 0, offsetof(struct Event_Condition_List_instance__definition__details, accessControl),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Access_Control_List_instance,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"accessControl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Condition_List_instance__definition__details, eventConditions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_eventConditions_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eventConditions"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Condition_List_instance__definition__details, eventConditionLists),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_eventConditionLists_9,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eventConditionLists"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Condition_List_instance__definition__details, referencingEventConditionLists),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_referencingEventConditionLists_11,
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
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 0, 0, 0 }, /* accessControl at 3216 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 1, 0, 0 }, /* eventConditions at 3219 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 2, 0, 0 }, /* eventConditionLists at 3222 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 3, 0, 0 } /* referencingEventConditionLists at 3225 */
};
static asn_SEQUENCE_specifics_t asn_SPC_details_specs_5 = {
	sizeof(struct Event_Condition_List_instance__definition__details),
	offsetof(struct Event_Condition_List_instance__definition__details, _asn_ctx),
	asn_MAP_details_tag2el_5,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
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
	4,	/* Elements count */
	&asn_SPC_details_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_definition_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Condition_List_instance__definition, choice.reference),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OBJECT_IDENTIFIER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"reference"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Condition_List_instance__definition, choice.details),
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
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* reference at 3213 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 } /* details at 3216 */
};
static asn_CHOICE_specifics_t asn_SPC_definition_specs_3 = {
	sizeof(struct Event_Condition_List_instance__definition),
	offsetof(struct Event_Condition_List_instance__definition, _asn_ctx),
	offsetof(struct Event_Condition_List_instance__definition, present),
	sizeof(((struct Event_Condition_List_instance__definition *)0)->present),
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

static asn_TYPE_member_t asn_MBR_Event_Condition_List_instance_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Condition_List_instance, name),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ObjectName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"name"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event_Condition_List_instance, definition),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_definition_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"definition"
		},
};
static ber_tlv_tag_t asn_DEF_Event_Condition_List_instance_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Event_Condition_List_instance_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* name at 3211 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reference at 3213 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 } /* details at 3216 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Event_Condition_List_instance_specs_1 = {
	sizeof(struct Event_Condition_List_instance),
	offsetof(struct Event_Condition_List_instance, _asn_ctx),
	asn_MAP_Event_Condition_List_instance_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Event_Condition_List_instance = {
	"Event-Condition-List-instance",
	"Event-Condition-List-instance",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Event_Condition_List_instance_tags_1,
	sizeof(asn_DEF_Event_Condition_List_instance_tags_1)
		/sizeof(asn_DEF_Event_Condition_List_instance_tags_1[0]), /* 1 */
	asn_DEF_Event_Condition_List_instance_tags_1,	/* Same as above */
	sizeof(asn_DEF_Event_Condition_List_instance_tags_1)
		/sizeof(asn_DEF_Event_Condition_List_instance_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Event_Condition_List_instance_1,
	2,	/* Elements count */
	&asn_SPC_Event_Condition_List_instance_specs_1	/* Additional specs */
};

