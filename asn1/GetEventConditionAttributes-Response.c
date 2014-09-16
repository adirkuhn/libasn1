/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "GetEventConditionAttributes-Response.h"

static int asn_DFL_4_set_64(int set_value, void **sptr) {
	Priority_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 64 */
		*st = 64;
		return 0;
	} else {
		/* Test default value 64 */
		return (*st == 64);
	}
}
static int asn_DFL_5_set_64(int set_value, void **sptr) {
	Unsigned8_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 64 */
		*st = 64;
		return 0;
	} else {
		/* Test default value 64 */
		return (*st == 64);
	}
}
static asn_TYPE_member_t asn_MBR_monitoredVariable_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GetEventConditionAttributes_Response__monitoredVariable, choice.variableReference),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_VariableSpecification,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"variableReference"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GetEventConditionAttributes_Response__monitoredVariable, choice.undefined),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"undefined"
		},
};
static asn_TYPE_tag2member_t asn_MAP_monitoredVariable_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* variableReference at 2441 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* undefined at 2442 */
};
static asn_CHOICE_specifics_t asn_SPC_monitoredVariable_specs_7 = {
	sizeof(struct GetEventConditionAttributes_Response__monitoredVariable),
	offsetof(struct GetEventConditionAttributes_Response__monitoredVariable, _asn_ctx),
	offsetof(struct GetEventConditionAttributes_Response__monitoredVariable, present),
	sizeof(((struct GetEventConditionAttributes_Response__monitoredVariable *)0)->present),
	asn_MAP_monitoredVariable_tag2el_7,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_monitoredVariable_7 = {
	"monitoredVariable",
	"monitoredVariable",
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
	asn_MBR_monitoredVariable_7,
	2,	/* Elements count */
	&asn_SPC_monitoredVariable_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_GetEventConditionAttributes_Response_1[] = {
	{ ATF_POINTER, 1, offsetof(struct GetEventConditionAttributes_Response, mmsDeletable),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"mmsDeletable"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GetEventConditionAttributes_Response, Class),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EC_Class,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"class"
		},
	{ ATF_POINTER, 6, offsetof(struct GetEventConditionAttributes_Response, priority),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Priority,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		asn_DFL_4_set_64,	/* DEFAULT 64 */
		"priority"
		},
	{ ATF_POINTER, 5, offsetof(struct GetEventConditionAttributes_Response, severity),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Unsigned8,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		asn_DFL_5_set_64,	/* DEFAULT 64 */
		"severity"
		},
	{ ATF_POINTER, 4, offsetof(struct GetEventConditionAttributes_Response, alarmSummaryReports),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"alarmSummaryReports"
		},
	{ ATF_POINTER, 3, offsetof(struct GetEventConditionAttributes_Response, monitoredVariable),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_monitoredVariable_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"monitoredVariable"
		},
	{ ATF_POINTER, 2, offsetof(struct GetEventConditionAttributes_Response, evaluationInterval),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Unsigned32,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"evaluationInterval"
		},
	{ ATF_POINTER, 1, offsetof(struct GetEventConditionAttributes_Response, accessControlList),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Identifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"accessControlList"
		},
};
static ber_tlv_tag_t asn_DEF_GetEventConditionAttributes_Response_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_GetEventConditionAttributes_Response_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mmsDeletable at 2435 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* class at 2436 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* priority at 2437 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* severity at 2438 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* alarmSummaryReports at 2439 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 5, 0, 0 }, /* monitoredVariable at 2441 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 6, 0, 0 }, /* evaluationInterval at 2443 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 7, 0, 0 } /* accessControlList at 2444 */
};
static asn_SEQUENCE_specifics_t asn_SPC_GetEventConditionAttributes_Response_specs_1 = {
	sizeof(struct GetEventConditionAttributes_Response),
	offsetof(struct GetEventConditionAttributes_Response, _asn_ctx),
	asn_MAP_GetEventConditionAttributes_Response_tag2el_1,
	8,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GetEventConditionAttributes_Response = {
	"GetEventConditionAttributes-Response",
	"GetEventConditionAttributes-Response",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_GetEventConditionAttributes_Response_tags_1,
	sizeof(asn_DEF_GetEventConditionAttributes_Response_tags_1)
		/sizeof(asn_DEF_GetEventConditionAttributes_Response_tags_1[0]), /* 1 */
	asn_DEF_GetEventConditionAttributes_Response_tags_1,	/* Same as above */
	sizeof(asn_DEF_GetEventConditionAttributes_Response_tags_1)
		/sizeof(asn_DEF_GetEventConditionAttributes_Response_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_GetEventConditionAttributes_Response_1,
	8,	/* Elements count */
	&asn_SPC_GetEventConditionAttributes_Response_specs_1	/* Additional specs */
};

