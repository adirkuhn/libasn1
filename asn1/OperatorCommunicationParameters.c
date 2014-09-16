/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-SCI-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "OperatorCommunicationParameters.h"

static asn_TYPE_member_t asn_MBR_OperatorCommunicationParameters_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OperatorCommunicationParameters, input_time_out),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"input-time-out"
		},
};
static ber_tlv_tag_t asn_DEF_OperatorCommunicationParameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_OperatorCommunicationParameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* input-time-out at 3331 */
};
static asn_SEQUENCE_specifics_t asn_SPC_OperatorCommunicationParameters_specs_1 = {
	sizeof(struct OperatorCommunicationParameters),
	offsetof(struct OperatorCommunicationParameters, _asn_ctx),
	asn_MAP_OperatorCommunicationParameters_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_OperatorCommunicationParameters = {
	"OperatorCommunicationParameters",
	"OperatorCommunicationParameters",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_OperatorCommunicationParameters_tags_1,
	sizeof(asn_DEF_OperatorCommunicationParameters_tags_1)
		/sizeof(asn_DEF_OperatorCommunicationParameters_tags_1[0]), /* 1 */
	asn_DEF_OperatorCommunicationParameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_OperatorCommunicationParameters_tags_1)
		/sizeof(asn_DEF_OperatorCommunicationParameters_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_OperatorCommunicationParameters_1,
	1,	/* Elements count */
	&asn_SPC_OperatorCommunicationParameters_specs_1	/* Additional specs */
};

