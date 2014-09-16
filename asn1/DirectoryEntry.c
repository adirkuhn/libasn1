/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1A"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "DirectoryEntry.h"

static asn_TYPE_member_t asn_MBR_DirectoryEntry_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DirectoryEntry, fileName),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FileName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"fileName"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DirectoryEntry, fileAttributes),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FileAttributes,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"fileAttributes"
		},
};
static ber_tlv_tag_t asn_DEF_DirectoryEntry_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DirectoryEntry_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fileName at 3415 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* fileAttributes at 3416 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DirectoryEntry_specs_1 = {
	sizeof(struct DirectoryEntry),
	offsetof(struct DirectoryEntry, _asn_ctx),
	asn_MAP_DirectoryEntry_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DirectoryEntry = {
	"DirectoryEntry",
	"DirectoryEntry",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_DirectoryEntry_tags_1,
	sizeof(asn_DEF_DirectoryEntry_tags_1)
		/sizeof(asn_DEF_DirectoryEntry_tags_1[0]), /* 1 */
	asn_DEF_DirectoryEntry_tags_1,	/* Same as above */
	sizeof(asn_DEF_DirectoryEntry_tags_1)
		/sizeof(asn_DEF_DirectoryEntry_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DirectoryEntry_1,
	2,	/* Elements count */
	&asn_SPC_DirectoryEntry_specs_1	/* Additional specs */
};

