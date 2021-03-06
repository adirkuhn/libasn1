/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "ReportEventConditionStatus-Response.h"

static asn_TYPE_member_t asn_MBR_ReportEventConditionStatus_Response_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportEventConditionStatus_Response, currentState),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EC_State,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"currentState"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportEventConditionStatus_Response, numberOfEventEnrollments),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Unsigned32,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"numberOfEventEnrollments"
		},
	{ ATF_POINTER, 3, offsetof(struct ReportEventConditionStatus_Response, enabled),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"enabled"
		},
	{ ATF_POINTER, 2, offsetof(struct ReportEventConditionStatus_Response, timeOfLastTransitionToActive),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_EventTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"timeOfLastTransitionToActive"
		},
	{ ATF_POINTER, 1, offsetof(struct ReportEventConditionStatus_Response, timeOfLastTransitionToIdle),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_EventTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"timeOfLastTransitionToIdle"
		},
};
static ber_tlv_tag_t asn_DEF_ReportEventConditionStatus_Response_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ReportEventConditionStatus_Response_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* currentState at 2460 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* numberOfEventEnrollments at 2461 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* enabled at 2462 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* timeOfLastTransitionToActive at 2463 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* timeOfLastTransitionToIdle at 2464 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ReportEventConditionStatus_Response_specs_1 = {
	sizeof(struct ReportEventConditionStatus_Response),
	offsetof(struct ReportEventConditionStatus_Response, _asn_ctx),
	asn_MAP_ReportEventConditionStatus_Response_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ReportEventConditionStatus_Response = {
	"ReportEventConditionStatus-Response",
	"ReportEventConditionStatus-Response",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ReportEventConditionStatus_Response_tags_1,
	sizeof(asn_DEF_ReportEventConditionStatus_Response_tags_1)
		/sizeof(asn_DEF_ReportEventConditionStatus_Response_tags_1[0]), /* 1 */
	asn_DEF_ReportEventConditionStatus_Response_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReportEventConditionStatus_Response_tags_1)
		/sizeof(asn_DEF_ReportEventConditionStatus_Response_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ReportEventConditionStatus_Response_1,
	5,	/* Elements count */
	&asn_SPC_ReportEventConditionStatus_Response_specs_1	/* Additional specs */
};

