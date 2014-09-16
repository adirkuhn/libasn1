/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "EN-Additional-Detail.h"

static asn_TYPE_member_t asn_MBR_EN_Additional_Detail_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EN_Additional_Detail, choice.string),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VisibleString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"string"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EN_Additional_Detail, choice.index),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"index"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EN_Additional_Detail, choice.noEnhancement),
		(ASN_TAG_CLASS_UNIVERSAL | (5 << 2)),
		0,
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"noEnhancement"
		},
};
static ber_tlv_tag_t asn_DEF_EN_Additional_Detail_tags_1[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_EN_Additional_Detail_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (5 << 2)), 2, 0, 0 }, /* noEnhancement at 2369 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* string at 2367 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* index at 2368 */
};
static asn_CHOICE_specifics_t asn_SPC_EN_Additional_Detail_specs_1 = {
	sizeof(struct EN_Additional_Detail),
	offsetof(struct EN_Additional_Detail, _asn_ctx),
	offsetof(struct EN_Additional_Detail, present),
	sizeof(((struct EN_Additional_Detail *)0)->present),
	asn_MAP_EN_Additional_Detail_tag2el_1,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_EN_Additional_Detail = {
	"EN-Additional-Detail",
	"EN-Additional-Detail",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	asn_DEF_EN_Additional_Detail_tags_1,
	sizeof(asn_DEF_EN_Additional_Detail_tags_1)
		/sizeof(asn_DEF_EN_Additional_Detail_tags_1[0]), /* 1 */
	asn_DEF_EN_Additional_Detail_tags_1,	/* Same as above */
	sizeof(asn_DEF_EN_Additional_Detail_tags_1)
		/sizeof(asn_DEF_EN_Additional_Detail_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_EN_Additional_Detail_1,
	3,	/* Elements count */
	&asn_SPC_EN_Additional_Detail_specs_1	/* Additional specs */
};

