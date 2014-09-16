/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "CreateProgramInvocation-Request.h"

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
	sizeof(struct CreateProgramInvocation_Request__listOfDomainNames),
	offsetof(struct CreateProgramInvocation_Request__listOfDomainNames, _asn_ctx),
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

static asn_TYPE_member_t asn_MBR_CreateProgramInvocation_Request_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CreateProgramInvocation_Request, programInvocationName),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Identifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"programInvocationName"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CreateProgramInvocation_Request, listOfDomainNames),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_listOfDomainNames_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"listOfDomainNames"
		},
	{ ATF_POINTER, 2, offsetof(struct CreateProgramInvocation_Request, reusable),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"reusable"
		},
	{ ATF_POINTER, 1, offsetof(struct CreateProgramInvocation_Request, monitorType),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"monitorType"
		},
};
static ber_tlv_tag_t asn_DEF_CreateProgramInvocation_Request_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CreateProgramInvocation_Request_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* programInvocationName at 1733 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* listOfDomainNames at 1734 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* reusable at 1735 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* monitorType at 1736 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CreateProgramInvocation_Request_specs_1 = {
	sizeof(struct CreateProgramInvocation_Request),
	offsetof(struct CreateProgramInvocation_Request, _asn_ctx),
	asn_MAP_CreateProgramInvocation_Request_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CreateProgramInvocation_Request = {
	"CreateProgramInvocation-Request",
	"CreateProgramInvocation-Request",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CreateProgramInvocation_Request_tags_1,
	sizeof(asn_DEF_CreateProgramInvocation_Request_tags_1)
		/sizeof(asn_DEF_CreateProgramInvocation_Request_tags_1[0]), /* 1 */
	asn_DEF_CreateProgramInvocation_Request_tags_1,	/* Same as above */
	sizeof(asn_DEF_CreateProgramInvocation_Request_tags_1)
		/sizeof(asn_DEF_CreateProgramInvocation_Request_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CreateProgramInvocation_Request_1,
	4,	/* Elements count */
	&asn_SPC_CreateProgramInvocation_Request_specs_1	/* Additional specs */
};
