/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "UploadSegment-Response.h"

static asn_TYPE_member_t asn_MBR_UploadSegment_Response_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UploadSegment_Response, loadData),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_LoadData,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"loadData"
		},
	{ ATF_POINTER, 1, offsetof(struct UploadSegment_Response, moreFollows),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"moreFollows"
		},
};
static ber_tlv_tag_t asn_DEF_UploadSegment_Response_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UploadSegment_Response_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* non-coded at 1660 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* moreFollows at 1679 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UploadSegment_Response_specs_1 = {
	sizeof(struct UploadSegment_Response),
	offsetof(struct UploadSegment_Response, _asn_ctx),
	asn_MAP_UploadSegment_Response_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UploadSegment_Response = {
	"UploadSegment-Response",
	"UploadSegment-Response",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_UploadSegment_Response_tags_1,
	sizeof(asn_DEF_UploadSegment_Response_tags_1)
		/sizeof(asn_DEF_UploadSegment_Response_tags_1[0]), /* 1 */
	asn_DEF_UploadSegment_Response_tags_1,	/* Same as above */
	sizeof(asn_DEF_UploadSegment_Response_tags_1)
		/sizeof(asn_DEF_UploadSegment_Response_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UploadSegment_Response_1,
	2,	/* Elements count */
	&asn_SPC_UploadSegment_Response_specs_1	/* Additional specs */
};

