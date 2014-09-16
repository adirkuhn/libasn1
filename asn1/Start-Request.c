/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "Start-Request.h"

static asn_TYPE_member_t asn_MBR_executionArgument_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Start_Request__executionArgument, choice.simpleString),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MMSString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"simpleString"
		},
};
static asn_TYPE_tag2member_t asn_MAP_executionArgument_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 } /* simpleString at 1752 */
};
static asn_CHOICE_specifics_t asn_SPC_executionArgument_specs_3 = {
	sizeof(struct Start_Request__executionArgument),
	offsetof(struct Start_Request__executionArgument, _asn_ctx),
	offsetof(struct Start_Request__executionArgument, present),
	sizeof(((struct Start_Request__executionArgument *)0)->present),
	asn_MAP_executionArgument_tag2el_3,
	1,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_executionArgument_3 = {
	"executionArgument",
	"executionArgument",
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
	asn_MBR_executionArgument_3,
	1,	/* Elements count */
	&asn_SPC_executionArgument_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Start_Request_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Start_Request, programInvocationName),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Identifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"programInvocationName"
		},
	{ ATF_POINTER, 1, offsetof(struct Start_Request, executionArgument),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_executionArgument_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"executionArgument"
		},
};
static ber_tlv_tag_t asn_DEF_Start_Request_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Start_Request_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* programInvocationName at 1750 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* simpleString at 1752 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Start_Request_specs_1 = {
	sizeof(struct Start_Request),
	offsetof(struct Start_Request, _asn_ctx),
	asn_MAP_Start_Request_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Start_Request = {
	"Start-Request",
	"Start-Request",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Start_Request_tags_1,
	sizeof(asn_DEF_Start_Request_tags_1)
		/sizeof(asn_DEF_Start_Request_tags_1[0]), /* 1 */
	asn_DEF_Start_Request_tags_1,	/* Same as above */
	sizeof(asn_DEF_Start_Request_tags_1)
		/sizeof(asn_DEF_Start_Request_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Start_Request_1,
	2,	/* Elements count */
	&asn_SPC_Start_Request_specs_1	/* Additional specs */
};

