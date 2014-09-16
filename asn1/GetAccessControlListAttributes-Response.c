/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "GetAccessControlListAttributes-Response.h"

static asn_TYPE_member_t asn_MBR_accessControlListElements_3[] = {
	{ ATF_POINTER, 7, offsetof(struct GetAccessControlListAttributes_Response__accessControlListElements, readAccessCondition),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_AccessCondition,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"readAccessCondition"
		},
	{ ATF_POINTER, 6, offsetof(struct GetAccessControlListAttributes_Response__accessControlListElements, storeAccessCondition),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_AccessCondition,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"storeAccessCondition"
		},
	{ ATF_POINTER, 5, offsetof(struct GetAccessControlListAttributes_Response__accessControlListElements, writeAccessCondition),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_AccessCondition,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"writeAccessCondition"
		},
	{ ATF_POINTER, 4, offsetof(struct GetAccessControlListAttributes_Response__accessControlListElements, loadAccessCondition),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_AccessCondition,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"loadAccessCondition"
		},
	{ ATF_POINTER, 3, offsetof(struct GetAccessControlListAttributes_Response__accessControlListElements, executeAccessCondition),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_AccessCondition,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"executeAccessCondition"
		},
	{ ATF_POINTER, 2, offsetof(struct GetAccessControlListAttributes_Response__accessControlListElements, deleteAccessCondition),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_AccessCondition,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"deleteAccessCondition"
		},
	{ ATF_POINTER, 1, offsetof(struct GetAccessControlListAttributes_Response__accessControlListElements, editAccessCondition),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_AccessCondition,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"editAccessCondition"
		},
};
static ber_tlv_tag_t asn_DEF_accessControlListElements_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_accessControlListElements_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* readAccessCondition at 1504 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* storeAccessCondition at 1506 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* writeAccessCondition at 1508 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* loadAccessCondition at 1510 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* executeAccessCondition at 1512 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* deleteAccessCondition at 1514 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* editAccessCondition at 1516 */
};
static asn_SEQUENCE_specifics_t asn_SPC_accessControlListElements_specs_3 = {
	sizeof(struct GetAccessControlListAttributes_Response__accessControlListElements),
	offsetof(struct GetAccessControlListAttributes_Response__accessControlListElements, _asn_ctx),
	asn_MAP_accessControlListElements_tag2el_3,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_accessControlListElements_3 = {
	"accessControlListElements",
	"accessControlListElements",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_accessControlListElements_tags_3,
	sizeof(asn_DEF_accessControlListElements_tags_3)
		/sizeof(asn_DEF_accessControlListElements_tags_3[0]) - 1, /* 1 */
	asn_DEF_accessControlListElements_tags_3,	/* Same as above */
	sizeof(asn_DEF_accessControlListElements_tags_3)
		/sizeof(asn_DEF_accessControlListElements_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_accessControlListElements_3,
	7,	/* Elements count */
	&asn_SPC_accessControlListElements_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Member_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GetAccessControlListAttributes_Response__references__Member, objectClass),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ObjectClass,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"objectClass"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GetAccessControlListAttributes_Response__references__Member, objectCount),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"objectCount"
		},
};
static ber_tlv_tag_t asn_DEF_Member_tags_13[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Member_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* objectClass at 1520 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* objectCount at 1521 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Member_specs_13 = {
	sizeof(struct GetAccessControlListAttributes_Response__references__Member),
	offsetof(struct GetAccessControlListAttributes_Response__references__Member, _asn_ctx),
	asn_MAP_Member_tag2el_13,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_13 = {
	"SEQUENCE",
	"SEQUENCE",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Member_tags_13,
	sizeof(asn_DEF_Member_tags_13)
		/sizeof(asn_DEF_Member_tags_13[0]), /* 1 */
	asn_DEF_Member_tags_13,	/* Same as above */
	sizeof(asn_DEF_Member_tags_13)
		/sizeof(asn_DEF_Member_tags_13[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Member_13,
	2,	/* Elements count */
	&asn_SPC_Member_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_references_12[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Member_13,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_references_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_references_specs_12 = {
	sizeof(struct GetAccessControlListAttributes_Response__references),
	offsetof(struct GetAccessControlListAttributes_Response__references, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_references_12 = {
	"references",
	"references",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_references_tags_12,
	sizeof(asn_DEF_references_tags_12)
		/sizeof(asn_DEF_references_tags_12[0]) - 1, /* 1 */
	asn_DEF_references_tags_12,	/* Same as above */
	sizeof(asn_DEF_references_tags_12)
		/sizeof(asn_DEF_references_tags_12[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_references_12,
	1,	/* Single element */
	&asn_SPC_references_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_GetAccessControlListAttributes_Response_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GetAccessControlListAttributes_Response, name),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Identifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"name"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GetAccessControlListAttributes_Response, accessControlListElements),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_accessControlListElements_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"accessControlListElements"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GetAccessControlListAttributes_Response, vMDuse),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"vMDuse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GetAccessControlListAttributes_Response, references),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_references_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"references"
		},
	{ ATF_POINTER, 1, offsetof(struct GetAccessControlListAttributes_Response, accessControlList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Identifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"accessControlList"
		},
};
static ber_tlv_tag_t asn_DEF_GetAccessControlListAttributes_Response_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_GetAccessControlListAttributes_Response_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* name at 1501 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* accessControlListElements at 1504 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* vMDuse at 1517 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* references at 1521 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* accessControlList at 1522 */
};
static asn_SEQUENCE_specifics_t asn_SPC_GetAccessControlListAttributes_Response_specs_1 = {
	sizeof(struct GetAccessControlListAttributes_Response),
	offsetof(struct GetAccessControlListAttributes_Response, _asn_ctx),
	asn_MAP_GetAccessControlListAttributes_Response_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GetAccessControlListAttributes_Response = {
	"GetAccessControlListAttributes-Response",
	"GetAccessControlListAttributes-Response",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_GetAccessControlListAttributes_Response_tags_1,
	sizeof(asn_DEF_GetAccessControlListAttributes_Response_tags_1)
		/sizeof(asn_DEF_GetAccessControlListAttributes_Response_tags_1[0]), /* 1 */
	asn_DEF_GetAccessControlListAttributes_Response_tags_1,	/* Same as above */
	sizeof(asn_DEF_GetAccessControlListAttributes_Response_tags_1)
		/sizeof(asn_DEF_GetAccessControlListAttributes_Response_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_GetAccessControlListAttributes_Response_1,
	5,	/* Elements count */
	&asn_SPC_GetAccessControlListAttributes_Response_specs_1	/* Additional specs */
};

