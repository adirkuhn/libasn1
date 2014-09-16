/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "DefineEventEnrollment-Request.h"

static asn_TYPE_member_t asn_MBR_DefineEventEnrollment_Request_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DefineEventEnrollment_Request, eventEnrollmentName),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ObjectName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eventEnrollmentName"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DefineEventEnrollment_Request, eventConditionName),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ObjectName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eventConditionName"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DefineEventEnrollment_Request, eventConditionTransitions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Transitions,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eventConditionTransitions"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DefineEventEnrollment_Request, alarmAcknowledgmentRule),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AlarmAckRule,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"alarmAcknowledgmentRule"
		},
	{ ATF_POINTER, 2, offsetof(struct DefineEventEnrollment_Request, eventActionName),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ObjectName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"eventActionName"
		},
	{ ATF_POINTER, 1, offsetof(struct DefineEventEnrollment_Request, clientApplication),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ApplicationReference,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"clientApplication"
		},
};
static ber_tlv_tag_t asn_DEF_DefineEventEnrollment_Request_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DefineEventEnrollment_Request_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eventEnrollmentName at 2518 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* eventConditionName at 2519 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* eventConditionTransitions at 2520 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* alarmAcknowledgmentRule at 2521 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* eventActionName at 2522 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* clientApplication at 2523 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DefineEventEnrollment_Request_specs_1 = {
	sizeof(struct DefineEventEnrollment_Request),
	offsetof(struct DefineEventEnrollment_Request, _asn_ctx),
	asn_MAP_DefineEventEnrollment_Request_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DefineEventEnrollment_Request = {
	"DefineEventEnrollment-Request",
	"DefineEventEnrollment-Request",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_DefineEventEnrollment_Request_tags_1,
	sizeof(asn_DEF_DefineEventEnrollment_Request_tags_1)
		/sizeof(asn_DEF_DefineEventEnrollment_Request_tags_1[0]), /* 1 */
	asn_DEF_DefineEventEnrollment_Request_tags_1,	/* Same as above */
	sizeof(asn_DEF_DefineEventEnrollment_Request_tags_1)
		/sizeof(asn_DEF_DefineEventEnrollment_Request_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DefineEventEnrollment_Request_1,
	6,	/* Elements count */
	&asn_SPC_DefineEventEnrollment_Request_specs_1	/* Additional specs */
};

