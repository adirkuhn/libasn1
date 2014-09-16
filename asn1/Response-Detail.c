/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "Response-Detail.h"

static asn_TYPE_member_t asn_MBR_Response_Detail_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Response_Detail, choice.otherRequests),
		(ASN_TAG_CLASS_UNIVERSAL | (5 << 2)),
		0,
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"otherRequests"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Response_Detail, choice.status),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CS_Status_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"status"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Response_Detail, choice.getProgramInvocationAttributes),
		(ASN_TAG_CLASS_CONTEXT | (45 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CS_GetProgramInvocationAttributes_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"getProgramInvocationAttributes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Response_Detail, choice.getEventConditionAttributes),
		(ASN_TAG_CLASS_CONTEXT | (49 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CS_GetEventConditionAttributes_Response,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"getEventConditionAttributes"
		},
};
static asn_TYPE_tag2member_t asn_MAP_Response_Detail_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (5 << 2)), 0, 0, 0 }, /* otherRequests at 1192 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 }, /* status at 1193 */
    { (ASN_TAG_CLASS_CONTEXT | (45 << 2)), 2, 0, 0 }, /* getProgramInvocationAttributes at 1195 */
    { (ASN_TAG_CLASS_CONTEXT | (49 << 2)), 3, 0, 0 } /* getEventConditionAttributes at 1197 */
};
static asn_CHOICE_specifics_t asn_SPC_Response_Detail_specs_1 = {
	sizeof(struct Response_Detail),
	offsetof(struct Response_Detail, _asn_ctx),
	offsetof(struct Response_Detail, present),
	sizeof(((struct Response_Detail *)0)->present),
	asn_MAP_Response_Detail_tag2el_1,
	4,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Response_Detail = {
	"Response-Detail",
	"Response-Detail",
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
	asn_MBR_Response_Detail_1,
	4,	/* Elements count */
	&asn_SPC_Response_Detail_specs_1	/* Additional specs */
};

