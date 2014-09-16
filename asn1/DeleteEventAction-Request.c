/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "DeleteEventAction-Request.h"

static asn_TYPE_member_t asn_MBR_specific_2[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_ObjectName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_specific_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_specific_specs_2 = {
	sizeof(struct DeleteEventAction_Request__specific),
	offsetof(struct DeleteEventAction_Request__specific, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_specific_2 = {
	"specific",
	"specific",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_specific_tags_2,
	sizeof(asn_DEF_specific_tags_2)
		/sizeof(asn_DEF_specific_tags_2[0]) - 1, /* 1 */
	asn_DEF_specific_tags_2,	/* Same as above */
	sizeof(asn_DEF_specific_tags_2)
		/sizeof(asn_DEF_specific_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_specific_2,
	1,	/* Single element */
	&asn_SPC_specific_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_DeleteEventAction_Request_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DeleteEventAction_Request, choice.specific),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_specific_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"specific"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DeleteEventAction_Request, choice.aa_specific),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"aa-specific"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DeleteEventAction_Request, choice.domain),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Identifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"domain"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DeleteEventAction_Request, choice.vmd),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"vmd"
		},
};
static asn_TYPE_tag2member_t asn_MAP_DeleteEventAction_Request_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* specific at 2494 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* aa-specific at 2495 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 2, 0, 0 }, /* domain at 2496 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 3, 0, 0 } /* vmd at 2497 */
};
static asn_CHOICE_specifics_t asn_SPC_DeleteEventAction_Request_specs_1 = {
	sizeof(struct DeleteEventAction_Request),
	offsetof(struct DeleteEventAction_Request, _asn_ctx),
	offsetof(struct DeleteEventAction_Request, present),
	sizeof(((struct DeleteEventAction_Request *)0)->present),
	asn_MAP_DeleteEventAction_Request_tag2el_1,
	4,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_DeleteEventAction_Request = {
	"DeleteEventAction-Request",
	"DeleteEventAction-Request",
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
	asn_MBR_DeleteEventAction_Request_1,
	4,	/* Elements count */
	&asn_SPC_DeleteEventAction_Request_specs_1	/* Additional specs */
};
