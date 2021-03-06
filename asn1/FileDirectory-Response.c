/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1A"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "FileDirectory-Response.h"

static asn_TYPE_member_t asn_MBR_listOfDirectoryEntry_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_DirectoryEntry,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_listOfDirectoryEntry_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_listOfDirectoryEntry_specs_2 = {
	sizeof(struct FileDirectory_Response__listOfDirectoryEntry),
	offsetof(struct FileDirectory_Response__listOfDirectoryEntry, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_listOfDirectoryEntry_2 = {
	"listOfDirectoryEntry",
	"listOfDirectoryEntry",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_listOfDirectoryEntry_tags_2,
	sizeof(asn_DEF_listOfDirectoryEntry_tags_2)
		/sizeof(asn_DEF_listOfDirectoryEntry_tags_2[0]), /* 2 */
	asn_DEF_listOfDirectoryEntry_tags_2,	/* Same as above */
	sizeof(asn_DEF_listOfDirectoryEntry_tags_2)
		/sizeof(asn_DEF_listOfDirectoryEntry_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_listOfDirectoryEntry_2,
	1,	/* Single element */
	&asn_SPC_listOfDirectoryEntry_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_FileDirectory_Response_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FileDirectory_Response, listOfDirectoryEntry),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_listOfDirectoryEntry_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"listOfDirectoryEntry"
		},
	{ ATF_POINTER, 1, offsetof(struct FileDirectory_Response, moreFollows),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"moreFollows"
		},
};
static ber_tlv_tag_t asn_DEF_FileDirectory_Response_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_FileDirectory_Response_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* listOfDirectoryEntry at 3411 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* moreFollows at 3412 */
};
static asn_SEQUENCE_specifics_t asn_SPC_FileDirectory_Response_specs_1 = {
	sizeof(struct FileDirectory_Response),
	offsetof(struct FileDirectory_Response, _asn_ctx),
	asn_MAP_FileDirectory_Response_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_FileDirectory_Response = {
	"FileDirectory-Response",
	"FileDirectory-Response",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_FileDirectory_Response_tags_1,
	sizeof(asn_DEF_FileDirectory_Response_tags_1)
		/sizeof(asn_DEF_FileDirectory_Response_tags_1[0]), /* 1 */
	asn_DEF_FileDirectory_Response_tags_1,	/* Same as above */
	sizeof(asn_DEF_FileDirectory_Response_tags_1)
		/sizeof(asn_DEF_FileDirectory_Response_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_FileDirectory_Response_1,
	2,	/* Elements count */
	&asn_SPC_FileDirectory_Response_specs_1	/* Additional specs */
};

