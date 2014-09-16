/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "GetNameList-Request.h"

static asn_TYPE_member_t asn_MBR_objectScope_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GetNameList_Request__objectScope, choice.vmdSpecific),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"vmdSpecific"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GetNameList_Request__objectScope, choice.domainSpecific),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Identifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"domainSpecific"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GetNameList_Request__objectScope, choice.aaSpecific),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"aaSpecific"
		},
};
static asn_TYPE_tag2member_t asn_MAP_objectScope_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* vmdSpecific at 1608 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* domainSpecific at 1609 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* aaSpecific at 1610 */
};
static asn_CHOICE_specifics_t asn_SPC_objectScope_specs_3 = {
	sizeof(struct GetNameList_Request__objectScope),
	offsetof(struct GetNameList_Request__objectScope, _asn_ctx),
	offsetof(struct GetNameList_Request__objectScope, present),
	sizeof(((struct GetNameList_Request__objectScope *)0)->present),
	asn_MAP_objectScope_tag2el_3,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_objectScope_3 = {
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
	asn_MBR_objectScope_3,
	3,	/* Elements count */
	&asn_SPC_objectScope_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_GetNameList_Request_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GetNameList_Request, objectClass),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ObjectClass,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"objectClass"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GetNameList_Request, objectScope),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_objectScope_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"objectScope"
		},
	{ ATF_POINTER, 1, offsetof(struct GetNameList_Request, continueAfter),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Identifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"continueAfter"
		},
};
static ber_tlv_tag_t asn_DEF_GetNameList_Request_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_GetNameList_Request_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* objectClass at 1606 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* objectScope at 1608 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* continueAfter at 1611 */
};
static asn_SEQUENCE_specifics_t asn_SPC_GetNameList_Request_specs_1 = {
	sizeof(struct GetNameList_Request),
	offsetof(struct GetNameList_Request, _asn_ctx),
	asn_MAP_GetNameList_Request_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GetNameList_Request = {
	"GetNameList-Request",
	"GetNameList-Request",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_GetNameList_Request_tags_1,
	sizeof(asn_DEF_GetNameList_Request_tags_1)
		/sizeof(asn_DEF_GetNameList_Request_tags_1[0]), /* 1 */
	asn_DEF_GetNameList_Request_tags_1,	/* Same as above */
	sizeof(asn_DEF_GetNameList_Request_tags_1)
		/sizeof(asn_DEF_GetNameList_Request_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_GetNameList_Request_1,
	3,	/* Elements count */
	&asn_SPC_GetNameList_Request_specs_1	/* Additional specs */
};

