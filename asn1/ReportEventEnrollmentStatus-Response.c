/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "ReportEventEnrollmentStatus-Response.h"

static asn_TYPE_member_t asn_MBR_ReportEventEnrollmentStatus_Response_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportEventEnrollmentStatus_Response, eventConditionTransitions),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Transitions,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eventConditionTransitions"
		},
	{ ATF_POINTER, 1, offsetof(struct ReportEventEnrollmentStatus_Response, notificationLost),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"notificationLost"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportEventEnrollmentStatus_Response, duration),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EE_Duration,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"duration"
		},
	{ ATF_POINTER, 1, offsetof(struct ReportEventEnrollmentStatus_Response, alarmAcknowledgmentRule),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AlarmAckRule,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"alarmAcknowledgmentRule"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportEventEnrollmentStatus_Response, currentState),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EE_State,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"currentState"
		},
};
static ber_tlv_tag_t asn_DEF_ReportEventEnrollmentStatus_Response_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ReportEventEnrollmentStatus_Response_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eventConditionTransitions at 2578 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* notificationLost at 2579 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* duration at 2580 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* alarmAcknowledgmentRule at 2581 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* currentState at 2582 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ReportEventEnrollmentStatus_Response_specs_1 = {
	sizeof(struct ReportEventEnrollmentStatus_Response),
	offsetof(struct ReportEventEnrollmentStatus_Response, _asn_ctx),
	asn_MAP_ReportEventEnrollmentStatus_Response_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ReportEventEnrollmentStatus_Response = {
	"ReportEventEnrollmentStatus-Response",
	"ReportEventEnrollmentStatus-Response",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ReportEventEnrollmentStatus_Response_tags_1,
	sizeof(asn_DEF_ReportEventEnrollmentStatus_Response_tags_1)
		/sizeof(asn_DEF_ReportEventEnrollmentStatus_Response_tags_1[0]), /* 1 */
	asn_DEF_ReportEventEnrollmentStatus_Response_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReportEventEnrollmentStatus_Response_tags_1)
		/sizeof(asn_DEF_ReportEventEnrollmentStatus_Response_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ReportEventEnrollmentStatus_Response_1,
	5,	/* Elements count */
	&asn_SPC_ReportEventEnrollmentStatus_Response_specs_1	/* Additional specs */
};
