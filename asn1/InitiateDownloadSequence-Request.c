/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "InitiateDownloadSequence-Request.h"

static asn_TYPE_member_t asn_MBR_listOfCapabilities_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (12 << 2)),
		0,
		&asn_DEF_MMSString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_listOfCapabilities_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_listOfCapabilities_specs_3 = {
	sizeof(struct InitiateDownloadSequence_Request__listOfCapabilities),
	offsetof(struct InitiateDownloadSequence_Request__listOfCapabilities, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_listOfCapabilities_3 = {
	"listOfCapabilities",
	"listOfCapabilities",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_listOfCapabilities_tags_3,
	sizeof(asn_DEF_listOfCapabilities_tags_3)
		/sizeof(asn_DEF_listOfCapabilities_tags_3[0]) - 1, /* 1 */
	asn_DEF_listOfCapabilities_tags_3,	/* Same as above */
	sizeof(asn_DEF_listOfCapabilities_tags_3)
		/sizeof(asn_DEF_listOfCapabilities_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_listOfCapabilities_3,
	1,	/* Single element */
	&asn_SPC_listOfCapabilities_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_InitiateDownloadSequence_Request_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InitiateDownloadSequence_Request, domainName),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Identifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"domainName"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiateDownloadSequence_Request, listOfCapabilities),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_listOfCapabilities_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"listOfCapabilities"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitiateDownloadSequence_Request, sharable),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sharable"
		},
};
static ber_tlv_tag_t asn_DEF_InitiateDownloadSequence_Request_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_InitiateDownloadSequence_Request_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* domainName at 1647 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* listOfCapabilities at 1648 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sharable at 1649 */
};
static asn_SEQUENCE_specifics_t asn_SPC_InitiateDownloadSequence_Request_specs_1 = {
	sizeof(struct InitiateDownloadSequence_Request),
	offsetof(struct InitiateDownloadSequence_Request, _asn_ctx),
	asn_MAP_InitiateDownloadSequence_Request_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_InitiateDownloadSequence_Request = {
	"InitiateDownloadSequence-Request",
	"InitiateDownloadSequence-Request",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_InitiateDownloadSequence_Request_tags_1,
	sizeof(asn_DEF_InitiateDownloadSequence_Request_tags_1)
		/sizeof(asn_DEF_InitiateDownloadSequence_Request_tags_1[0]), /* 1 */
	asn_DEF_InitiateDownloadSequence_Request_tags_1,	/* Same as above */
	sizeof(asn_DEF_InitiateDownloadSequence_Request_tags_1)
		/sizeof(asn_DEF_InitiateDownloadSequence_Request_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_InitiateDownloadSequence_Request_1,
	3,	/* Elements count */
	&asn_SPC_InitiateDownloadSequence_Request_specs_1	/* Additional specs */
};

