/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "RemoveEventConditionListReference-Request.h"

static asn_TYPE_member_t asn_MBR_listOfEventConditionName_3[] = {
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
static ber_tlv_tag_t asn_DEF_listOfEventConditionName_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_listOfEventConditionName_specs_3 = {
	sizeof(struct RemoveEventConditionListReference_Request__listOfEventConditionName),
	offsetof(struct RemoveEventConditionListReference_Request__listOfEventConditionName, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_listOfEventConditionName_3 = {
	"listOfEventConditionName",
	"listOfEventConditionName",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_listOfEventConditionName_tags_3,
	sizeof(asn_DEF_listOfEventConditionName_tags_3)
		/sizeof(asn_DEF_listOfEventConditionName_tags_3[0]) - 1, /* 1 */
	asn_DEF_listOfEventConditionName_tags_3,	/* Same as above */
	sizeof(asn_DEF_listOfEventConditionName_tags_3)
		/sizeof(asn_DEF_listOfEventConditionName_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_listOfEventConditionName_3,
	1,	/* Single element */
	&asn_SPC_listOfEventConditionName_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_listOfEventConditionListName_5[] = {
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
static ber_tlv_tag_t asn_DEF_listOfEventConditionListName_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_listOfEventConditionListName_specs_5 = {
	sizeof(struct RemoveEventConditionListReference_Request__listOfEventConditionListName),
	offsetof(struct RemoveEventConditionListReference_Request__listOfEventConditionListName, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_listOfEventConditionListName_5 = {
	"listOfEventConditionListName",
	"listOfEventConditionListName",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_listOfEventConditionListName_tags_5,
	sizeof(asn_DEF_listOfEventConditionListName_tags_5)
		/sizeof(asn_DEF_listOfEventConditionListName_tags_5[0]) - 1, /* 1 */
	asn_DEF_listOfEventConditionListName_tags_5,	/* Same as above */
	sizeof(asn_DEF_listOfEventConditionListName_tags_5)
		/sizeof(asn_DEF_listOfEventConditionListName_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_listOfEventConditionListName_5,
	1,	/* Single element */
	&asn_SPC_listOfEventConditionListName_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RemoveEventConditionListReference_Request_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RemoveEventConditionListReference_Request, eventConditionListName),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ObjectName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eventConditionListName"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RemoveEventConditionListReference_Request, listOfEventConditionName),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_listOfEventConditionName_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"listOfEventConditionName"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RemoveEventConditionListReference_Request, listOfEventConditionListName),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_listOfEventConditionListName_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"listOfEventConditionListName"
		},
};
static ber_tlv_tag_t asn_DEF_RemoveEventConditionListReference_Request_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RemoveEventConditionListReference_Request_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eventConditionListName at 2630 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* listOfEventConditionName at 2631 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* listOfEventConditionListName at 2633 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RemoveEventConditionListReference_Request_specs_1 = {
	sizeof(struct RemoveEventConditionListReference_Request),
	offsetof(struct RemoveEventConditionListReference_Request, _asn_ctx),
	asn_MAP_RemoveEventConditionListReference_Request_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RemoveEventConditionListReference_Request = {
	"RemoveEventConditionListReference-Request",
	"RemoveEventConditionListReference-Request",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RemoveEventConditionListReference_Request_tags_1,
	sizeof(asn_DEF_RemoveEventConditionListReference_Request_tags_1)
		/sizeof(asn_DEF_RemoveEventConditionListReference_Request_tags_1[0]), /* 1 */
	asn_DEF_RemoveEventConditionListReference_Request_tags_1,	/* Same as above */
	sizeof(asn_DEF_RemoveEventConditionListReference_Request_tags_1)
		/sizeof(asn_DEF_RemoveEventConditionListReference_Request_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RemoveEventConditionListReference_Request_1,
	3,	/* Elements count */
	&asn_SPC_RemoveEventConditionListReference_Request_specs_1	/* Additional specs */
};

