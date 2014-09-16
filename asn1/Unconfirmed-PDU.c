/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "Unconfirmed-PDU.h"

static asn_TYPE_member_t asn_MBR_Unconfirmed_PDU_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Unconfirmed_PDU, service),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_UnconfirmedService,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"service"
		},
	{ ATF_POINTER, 1, offsetof(struct Unconfirmed_PDU, service_ext),
		(ASN_TAG_CLASS_CONTEXT | (79 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Unconfirmed_Detail,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"service-ext"
		},
};
static ber_tlv_tag_t asn_DEF_Unconfirmed_PDU_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Unconfirmed_PDU_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* informationReport at 1019 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* unsolicitedStatus at 1020 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 0, 0, 0 }, /* eventNotification at 1021 */
    { (ASN_TAG_CLASS_CONTEXT | (79 << 2)), 1, 0, 0 } /* service-ext at 1014 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Unconfirmed_PDU_specs_1 = {
	sizeof(struct Unconfirmed_PDU),
	offsetof(struct Unconfirmed_PDU, _asn_ctx),
	asn_MAP_Unconfirmed_PDU_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	0,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Unconfirmed_PDU = {
	"Unconfirmed-PDU",
	"Unconfirmed-PDU",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Unconfirmed_PDU_tags_1,
	sizeof(asn_DEF_Unconfirmed_PDU_tags_1)
		/sizeof(asn_DEF_Unconfirmed_PDU_tags_1[0]), /* 1 */
	asn_DEF_Unconfirmed_PDU_tags_1,	/* Same as above */
	sizeof(asn_DEF_Unconfirmed_PDU_tags_1)
		/sizeof(asn_DEF_Unconfirmed_PDU_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Unconfirmed_PDU_1,
	2,	/* Elements count */
	&asn_SPC_Unconfirmed_PDU_specs_1	/* Additional specs */
};
