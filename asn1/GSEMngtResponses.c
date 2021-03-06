/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "IEC61850"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "GSEMngtResponses.h"

static asn_TYPE_member_t asn_MBR_GSEMngtResponses_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GSEMngtResponses, choice.gseMngtNotSupported),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gseMngtNotSupported"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GSEMngtResponses, choice.getGoReference),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GSEMngtResponsePdu,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"getGoReference"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GSEMngtResponses, choice.getGOOSEElementNumber),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GSEMngtResponsePdu,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"getGOOSEElementNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GSEMngtResponses, choice.getGsReference),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GSEMngtResponsePdu,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"getGsReference"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GSEMngtResponses, choice.getGSSEDataOffset),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GSEMngtResponsePdu,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"getGSSEDataOffset"
		},
};
static asn_TYPE_tag2member_t asn_MAP_GSEMngtResponses_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gseMngtNotSupported at 38 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* getGoReference at 39 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* getGOOSEElementNumber at 40 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* getGsReference at 41 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* getGSSEDataOffset at 42 */
};
static asn_CHOICE_specifics_t asn_SPC_GSEMngtResponses_specs_1 = {
	sizeof(struct GSEMngtResponses),
	offsetof(struct GSEMngtResponses, _asn_ctx),
	offsetof(struct GSEMngtResponses, present),
	sizeof(((struct GSEMngtResponses *)0)->present),
	asn_MAP_GSEMngtResponses_tag2el_1,
	5,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_GSEMngtResponses = {
	"GSEMngtResponses",
	"GSEMngtResponses",
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
	asn_MBR_GSEMngtResponses_1,
	5,	/* Elements count */
	&asn_SPC_GSEMngtResponses_specs_1	/* Additional specs */
};

