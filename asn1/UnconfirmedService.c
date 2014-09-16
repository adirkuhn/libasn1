/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "UnconfirmedService.h"

static asn_TYPE_member_t asn_MBR_UnconfirmedService_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UnconfirmedService, choice.informationReport),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InformationReport,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"informationReport"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UnconfirmedService, choice.unsolicitedStatus),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UnsolicitedStatus,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"unsolicitedStatus"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UnconfirmedService, choice.eventNotification),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EventNotification,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eventNotification"
		},
};
static asn_TYPE_tag2member_t asn_MAP_UnconfirmedService_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* informationReport at 1019 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* unsolicitedStatus at 1020 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* eventNotification at 1021 */
};
static asn_CHOICE_specifics_t asn_SPC_UnconfirmedService_specs_1 = {
	sizeof(struct UnconfirmedService),
	offsetof(struct UnconfirmedService, _asn_ctx),
	offsetof(struct UnconfirmedService, present),
	sizeof(((struct UnconfirmedService *)0)->present),
	asn_MAP_UnconfirmedService_tag2el_1,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_UnconfirmedService = {
	"UnconfirmedService",
	"UnconfirmedService",
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
	asn_MBR_UnconfirmedService_1,
	3,	/* Elements count */
	&asn_SPC_UnconfirmedService_specs_1	/* Additional specs */
};

