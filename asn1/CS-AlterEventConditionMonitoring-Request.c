/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "CS-AlterEventConditionMonitoring-Request.h"

static asn_TYPE_member_t asn_MBR_changeDisplay_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CS_AlterEventConditionMonitoring_Request__changeDisplay, choice.string),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VisibleString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"string"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CS_AlterEventConditionMonitoring_Request__changeDisplay, choice.index),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"index"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CS_AlterEventConditionMonitoring_Request__changeDisplay, choice.noEnhancement),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"noEnhancement"
		},
};
static asn_TYPE_tag2member_t asn_MAP_changeDisplay_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* string at 2479 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* index at 2480 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* noEnhancement at 2481 */
};
static asn_CHOICE_specifics_t asn_SPC_changeDisplay_specs_2 = {
	sizeof(struct CS_AlterEventConditionMonitoring_Request__changeDisplay),
	offsetof(struct CS_AlterEventConditionMonitoring_Request__changeDisplay, _asn_ctx),
	offsetof(struct CS_AlterEventConditionMonitoring_Request__changeDisplay, present),
	sizeof(((struct CS_AlterEventConditionMonitoring_Request__changeDisplay *)0)->present),
	asn_MAP_changeDisplay_tag2el_2,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_changeDisplay_2 = {
	"changeDisplay",
	"changeDisplay",
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
	asn_MBR_changeDisplay_2,
	3,	/* Elements count */
	&asn_SPC_changeDisplay_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CS_AlterEventConditionMonitoring_Request_1[] = {
	{ ATF_POINTER, 1, offsetof(struct CS_AlterEventConditionMonitoring_Request, changeDisplay),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_changeDisplay_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"changeDisplay"
		},
};
static ber_tlv_tag_t asn_DEF_CS_AlterEventConditionMonitoring_Request_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CS_AlterEventConditionMonitoring_Request_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* string at 2479 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* index at 2480 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 0, 0, 0 } /* noEnhancement at 2481 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CS_AlterEventConditionMonitoring_Request_specs_1 = {
	sizeof(struct CS_AlterEventConditionMonitoring_Request),
	offsetof(struct CS_AlterEventConditionMonitoring_Request, _asn_ctx),
	asn_MAP_CS_AlterEventConditionMonitoring_Request_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CS_AlterEventConditionMonitoring_Request = {
	"CS-AlterEventConditionMonitoring-Request",
	"CS-AlterEventConditionMonitoring-Request",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CS_AlterEventConditionMonitoring_Request_tags_1,
	sizeof(asn_DEF_CS_AlterEventConditionMonitoring_Request_tags_1)
		/sizeof(asn_DEF_CS_AlterEventConditionMonitoring_Request_tags_1[0]), /* 1 */
	asn_DEF_CS_AlterEventConditionMonitoring_Request_tags_1,	/* Same as above */
	sizeof(asn_DEF_CS_AlterEventConditionMonitoring_Request_tags_1)
		/sizeof(asn_DEF_CS_AlterEventConditionMonitoring_Request_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CS_AlterEventConditionMonitoring_Request_1,
	1,	/* Elements count */
	&asn_SPC_CS_AlterEventConditionMonitoring_Request_specs_1	/* Additional specs */
};

