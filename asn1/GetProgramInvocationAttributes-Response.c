/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "GetProgramInvocationAttributes-Response.h"

static asn_TYPE_member_t asn_MBR_listOfDomainNames_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (26 << 2)),
		0,
		&asn_DEF_Identifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_listOfDomainNames_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_listOfDomainNames_specs_3 = {
	sizeof(struct GetProgramInvocationAttributes_Response__listOfDomainNames),
	offsetof(struct GetProgramInvocationAttributes_Response__listOfDomainNames, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_listOfDomainNames_3 = {
	"listOfDomainNames",
	"listOfDomainNames",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_listOfDomainNames_tags_3,
	sizeof(asn_DEF_listOfDomainNames_tags_3)
		/sizeof(asn_DEF_listOfDomainNames_tags_3[0]) - 1, /* 1 */
	asn_DEF_listOfDomainNames_tags_3,	/* Same as above */
	sizeof(asn_DEF_listOfDomainNames_tags_3)
		/sizeof(asn_DEF_listOfDomainNames_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_listOfDomainNames_3,
	1,	/* Single element */
	&asn_SPC_listOfDomainNames_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_executionArgument_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GetProgramInvocationAttributes_Response__executionArgument, choice.simpleString),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MMSString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"simpleString"
		},
};
static asn_TYPE_tag2member_t asn_MAP_executionArgument_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 0, 0, 0 } /* simpleString at 1814 */
};
static asn_CHOICE_specifics_t asn_SPC_executionArgument_specs_8 = {
	sizeof(struct GetProgramInvocationAttributes_Response__executionArgument),
	offsetof(struct GetProgramInvocationAttributes_Response__executionArgument, _asn_ctx),
	offsetof(struct GetProgramInvocationAttributes_Response__executionArgument, present),
	sizeof(((struct GetProgramInvocationAttributes_Response__executionArgument *)0)->present),
	asn_MAP_executionArgument_tag2el_8,
	1,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_executionArgument_8 = {
	"executionArgument",
	"executionArgument",
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
	asn_MBR_executionArgument_8,
	1,	/* Elements count */
	&asn_SPC_executionArgument_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_GetProgramInvocationAttributes_Response_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GetProgramInvocationAttributes_Response, state),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProgramInvocationState,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"state"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GetProgramInvocationAttributes_Response, listOfDomainNames),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_listOfDomainNames_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"listOfDomainNames"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GetProgramInvocationAttributes_Response, mmsDeletable),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"mmsDeletable"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GetProgramInvocationAttributes_Response, reusable),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"reusable"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GetProgramInvocationAttributes_Response, monitor),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"monitor"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GetProgramInvocationAttributes_Response, executionArgument),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_executionArgument_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"executionArgument"
		},
	{ ATF_POINTER, 1, offsetof(struct GetProgramInvocationAttributes_Response, accessControlList),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Identifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"accessControlList"
		},
};
static ber_tlv_tag_t asn_DEF_GetProgramInvocationAttributes_Response_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_GetProgramInvocationAttributes_Response_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* state at 1807 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* listOfDomainNames at 1808 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mmsDeletable at 1809 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* reusable at 1810 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* monitor at 1811 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* simpleString at 1814 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* accessControlList at 1815 */
};
static asn_SEQUENCE_specifics_t asn_SPC_GetProgramInvocationAttributes_Response_specs_1 = {
	sizeof(struct GetProgramInvocationAttributes_Response),
	offsetof(struct GetProgramInvocationAttributes_Response, _asn_ctx),
	asn_MAP_GetProgramInvocationAttributes_Response_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GetProgramInvocationAttributes_Response = {
	"GetProgramInvocationAttributes-Response",
	"GetProgramInvocationAttributes-Response",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_GetProgramInvocationAttributes_Response_tags_1,
	sizeof(asn_DEF_GetProgramInvocationAttributes_Response_tags_1)
		/sizeof(asn_DEF_GetProgramInvocationAttributes_Response_tags_1[0]), /* 1 */
	asn_DEF_GetProgramInvocationAttributes_Response_tags_1,	/* Same as above */
	sizeof(asn_DEF_GetProgramInvocationAttributes_Response_tags_1)
		/sizeof(asn_DEF_GetProgramInvocationAttributes_Response_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_GetProgramInvocationAttributes_Response_1,
	7,	/* Elements count */
	&asn_SPC_GetProgramInvocationAttributes_Response_specs_1	/* Additional specs */
};
