/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "RemoveEventConditionListReference-Error.h"

static asn_TYPE_member_t asn_MBR_RemoveEventConditionListReference_Error_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RemoveEventConditionListReference_Error, choice.eventCondition),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ObjectName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eventCondition"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RemoveEventConditionListReference_Error, choice.eventConditionList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ObjectName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eventConditionList"
		},
};
static asn_TYPE_tag2member_t asn_MAP_RemoveEventConditionListReference_Error_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eventCondition at 2638 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eventConditionList at 2639 */
};
static asn_CHOICE_specifics_t asn_SPC_RemoveEventConditionListReference_Error_specs_1 = {
	sizeof(struct RemoveEventConditionListReference_Error),
	offsetof(struct RemoveEventConditionListReference_Error, _asn_ctx),
	offsetof(struct RemoveEventConditionListReference_Error, present),
	sizeof(((struct RemoveEventConditionListReference_Error *)0)->present),
	asn_MAP_RemoveEventConditionListReference_Error_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RemoveEventConditionListReference_Error = {
	"RemoveEventConditionListReference-Error",
	"RemoveEventConditionListReference-Error",
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
	asn_MBR_RemoveEventConditionListReference_Error_1,
	2,	/* Elements count */
	&asn_SPC_RemoveEventConditionListReference_Error_specs_1	/* Additional specs */
};

