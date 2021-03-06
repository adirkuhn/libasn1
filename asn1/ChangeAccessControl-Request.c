/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "ChangeAccessControl-Request.h"

static asn_TYPE_member_t asn_MBR_specific_7[] = {
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
static ber_tlv_tag_t asn_DEF_specific_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_specific_specs_7 = {
	sizeof(struct ChangeAccessControl_Request__scopeOfChange__listOfObjects__objectScope__specific),
	offsetof(struct ChangeAccessControl_Request__scopeOfChange__listOfObjects__objectScope__specific, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_specific_7 = {
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
	asn_DEF_specific_tags_7,
	sizeof(asn_DEF_specific_tags_7)
		/sizeof(asn_DEF_specific_tags_7[0]) - 1, /* 1 */
	asn_DEF_specific_tags_7,	/* Same as above */
	sizeof(asn_DEF_specific_tags_7)
		/sizeof(asn_DEF_specific_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_specific_7,
	1,	/* Single element */
	&asn_SPC_specific_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_objectScope_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ChangeAccessControl_Request__scopeOfChange__listOfObjects__objectScope, choice.specific),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_specific_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"specific"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ChangeAccessControl_Request__scopeOfChange__listOfObjects__objectScope, choice.aa_specific),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"aa-specific"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ChangeAccessControl_Request__scopeOfChange__listOfObjects__objectScope, choice.domain),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Identifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"domain"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ChangeAccessControl_Request__scopeOfChange__listOfObjects__objectScope, choice.vmd),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"vmd"
		},
};
static asn_TYPE_tag2member_t asn_MAP_objectScope_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* specific at 1548 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* aa-specific at 1552 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* domain at 1554 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* vmd at 1558 */
};
static asn_CHOICE_specifics_t asn_SPC_objectScope_specs_6 = {
	sizeof(struct ChangeAccessControl_Request__scopeOfChange__listOfObjects__objectScope),
	offsetof(struct ChangeAccessControl_Request__scopeOfChange__listOfObjects__objectScope, _asn_ctx),
	offsetof(struct ChangeAccessControl_Request__scopeOfChange__listOfObjects__objectScope, present),
	sizeof(((struct ChangeAccessControl_Request__scopeOfChange__listOfObjects__objectScope *)0)->present),
	asn_MAP_objectScope_tag2el_6,
	4,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_objectScope_6 = {
	"objectScope",
	"objectScope",
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
	asn_MBR_objectScope_6,
	4,	/* Elements count */
	&asn_SPC_objectScope_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_listOfObjects_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ChangeAccessControl_Request__scopeOfChange__listOfObjects, objectClass),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ObjectClass,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"objectClass"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ChangeAccessControl_Request__scopeOfChange__listOfObjects, objectScope),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_objectScope_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"objectScope"
		},
};
static ber_tlv_tag_t asn_DEF_listOfObjects_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_listOfObjects_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* objectClass at 1544 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* objectScope at 1548 */
};
static asn_SEQUENCE_specifics_t asn_SPC_listOfObjects_specs_4 = {
	sizeof(struct ChangeAccessControl_Request__scopeOfChange__listOfObjects),
	offsetof(struct ChangeAccessControl_Request__scopeOfChange__listOfObjects, _asn_ctx),
	asn_MAP_listOfObjects_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_listOfObjects_4 = {
	"listOfObjects",
	"listOfObjects",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_listOfObjects_tags_4,
	sizeof(asn_DEF_listOfObjects_tags_4)
		/sizeof(asn_DEF_listOfObjects_tags_4[0]) - 1, /* 1 */
	asn_DEF_listOfObjects_tags_4,	/* Same as above */
	sizeof(asn_DEF_listOfObjects_tags_4)
		/sizeof(asn_DEF_listOfObjects_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_listOfObjects_4,
	2,	/* Elements count */
	&asn_SPC_listOfObjects_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_scopeOfChange_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ChangeAccessControl_Request__scopeOfChange, choice.vMDOnly),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"vMDOnly"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ChangeAccessControl_Request__scopeOfChange, choice.listOfObjects),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_listOfObjects_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"listOfObjects"
		},
};
static asn_TYPE_tag2member_t asn_MAP_scopeOfChange_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* vMDOnly at 1542 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* listOfObjects at 1544 */
};
static asn_CHOICE_specifics_t asn_SPC_scopeOfChange_specs_2 = {
	sizeof(struct ChangeAccessControl_Request__scopeOfChange),
	offsetof(struct ChangeAccessControl_Request__scopeOfChange, _asn_ctx),
	offsetof(struct ChangeAccessControl_Request__scopeOfChange, present),
	sizeof(((struct ChangeAccessControl_Request__scopeOfChange *)0)->present),
	asn_MAP_scopeOfChange_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_scopeOfChange_2 = {
	"scopeOfChange",
	"scopeOfChange",
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
	asn_MBR_scopeOfChange_2,
	2,	/* Elements count */
	&asn_SPC_scopeOfChange_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ChangeAccessControl_Request_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ChangeAccessControl_Request, scopeOfChange),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_scopeOfChange_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"scopeOfChange"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ChangeAccessControl_Request, accessControlListName),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Identifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"accessControlListName"
		},
};
static ber_tlv_tag_t asn_DEF_ChangeAccessControl_Request_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ChangeAccessControl_Request_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* vMDOnly at 1542 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* listOfObjects at 1544 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 } /* accessControlListName at 1561 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ChangeAccessControl_Request_specs_1 = {
	sizeof(struct ChangeAccessControl_Request),
	offsetof(struct ChangeAccessControl_Request, _asn_ctx),
	asn_MAP_ChangeAccessControl_Request_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ChangeAccessControl_Request = {
	"ChangeAccessControl-Request",
	"ChangeAccessControl-Request",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ChangeAccessControl_Request_tags_1,
	sizeof(asn_DEF_ChangeAccessControl_Request_tags_1)
		/sizeof(asn_DEF_ChangeAccessControl_Request_tags_1[0]), /* 1 */
	asn_DEF_ChangeAccessControl_Request_tags_1,	/* Same as above */
	sizeof(asn_DEF_ChangeAccessControl_Request_tags_1)
		/sizeof(asn_DEF_ChangeAccessControl_Request_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ChangeAccessControl_Request_1,
	2,	/* Elements count */
	&asn_SPC_ChangeAccessControl_Request_specs_1	/* Additional specs */
};

