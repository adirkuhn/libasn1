/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-Object-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "AccessCondition.h"

static asn_TYPE_member_t asn_MBR_user_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AccessCondition__user, choice.association),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ApplicationReference,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"association"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccessCondition__user, choice.none),
		(ASN_TAG_CLASS_UNIVERSAL | (5 << 2)),
		0,
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"none"
		},
};
static asn_TYPE_tag2member_t asn_MAP_user_tag2el_4[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (5 << 2)), 1, 0, 0 }, /* none at 365 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 } /* association at 364 */
};
static asn_CHOICE_specifics_t asn_SPC_user_specs_4 = {
	sizeof(struct AccessCondition__user),
	offsetof(struct AccessCondition__user, _asn_ctx),
	offsetof(struct AccessCondition__user, present),
	sizeof(((struct AccessCondition__user *)0)->present),
	asn_MAP_user_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_user_4 = {
	"user",
	"user",
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
	asn_MBR_user_4,
	2,	/* Elements count */
	&asn_SPC_user_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_joint_8[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_AccessCondition,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_joint_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_joint_specs_8 = {
	sizeof(struct AccessCondition__joint),
	offsetof(struct AccessCondition__joint, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_joint_8 = {
	"joint",
	"joint",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_joint_tags_8,
	sizeof(asn_DEF_joint_tags_8)
		/sizeof(asn_DEF_joint_tags_8[0]) - 1, /* 1 */
	asn_DEF_joint_tags_8,	/* Same as above */
	sizeof(asn_DEF_joint_tags_8)
		/sizeof(asn_DEF_joint_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_joint_8,
	1,	/* Single element */
	&asn_SPC_joint_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_alternate_10[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_AccessCondition,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_alternate_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_alternate_specs_10 = {
	sizeof(struct AccessCondition__alternate),
	offsetof(struct AccessCondition__alternate, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_alternate_10 = {
	"alternate",
	"alternate",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_alternate_tags_10,
	sizeof(asn_DEF_alternate_tags_10)
		/sizeof(asn_DEF_alternate_tags_10[0]) - 1, /* 1 */
	asn_DEF_alternate_tags_10,	/* Same as above */
	sizeof(asn_DEF_alternate_tags_10)
		/sizeof(asn_DEF_alternate_tags_10[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_alternate_10,
	1,	/* Single element */
	&asn_SPC_alternate_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_AccessCondition_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AccessCondition, choice.never),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"never"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccessCondition, choice.semaphore),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Identifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"semaphore"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccessCondition, choice.user),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_user_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"user"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccessCondition, choice.password),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Authentication_value,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"password"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccessCondition, choice.joint),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_joint_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"joint"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccessCondition, choice.alternate),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_alternate_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"alternate"
		},
};
static asn_TYPE_tag2member_t asn_MAP_AccessCondition_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* never at 362 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* semaphore at 363 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* user at 364 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* password at 366 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* joint at 367 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* alternate at 368 */
};
static asn_CHOICE_specifics_t asn_SPC_AccessCondition_specs_1 = {
	sizeof(struct AccessCondition),
	offsetof(struct AccessCondition, _asn_ctx),
	offsetof(struct AccessCondition, present),
	sizeof(((struct AccessCondition *)0)->present),
	asn_MAP_AccessCondition_tag2el_1,
	6,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_AccessCondition = {
	"AccessCondition",
	"AccessCondition",
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
	asn_MBR_AccessCondition_1,
	6,	/* Elements count */
	&asn_SPC_AccessCondition_specs_1	/* Additional specs */
};
