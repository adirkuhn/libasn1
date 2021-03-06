/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "CS-Status-Response.h"

static asn_TYPE_member_t asn_MBR_selectedProgramInvocation_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CS_Status_Response__fullResponse__selectedProgramInvocation, choice.programInvocation),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Identifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"programInvocation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CS_Status_Response__fullResponse__selectedProgramInvocation, choice.noneSelected),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"noneSelected"
		},
};
static asn_TYPE_tag2member_t asn_MAP_selectedProgramInvocation_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 0, 0, 0 }, /* programInvocation at 1587 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 1, 0, 0 } /* noneSelected at 1588 */
};
static asn_CHOICE_specifics_t asn_SPC_selectedProgramInvocation_specs_6 = {
	sizeof(struct CS_Status_Response__fullResponse__selectedProgramInvocation),
	offsetof(struct CS_Status_Response__fullResponse__selectedProgramInvocation, _asn_ctx),
	offsetof(struct CS_Status_Response__fullResponse__selectedProgramInvocation, present),
	sizeof(((struct CS_Status_Response__fullResponse__selectedProgramInvocation *)0)->present),
	asn_MAP_selectedProgramInvocation_tag2el_6,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_selectedProgramInvocation_6 = {
	"selectedProgramInvocation",
	"selectedProgramInvocation",
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
	asn_MBR_selectedProgramInvocation_6,
	2,	/* Elements count */
	&asn_SPC_selectedProgramInvocation_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_fullResponse_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CS_Status_Response__fullResponse, operationState),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OperationState,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"operationState"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CS_Status_Response__fullResponse, extendedStatus),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtendedStatus,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"extendedStatus"
		},
	{ ATF_POINTER, 1, offsetof(struct CS_Status_Response__fullResponse, extendedStatusMask),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtendedStatus,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"extendedStatusMask"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CS_Status_Response__fullResponse, selectedProgramInvocation),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_selectedProgramInvocation_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"selectedProgramInvocation"
		},
};
static ber_tlv_tag_t asn_DEF_fullResponse_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_fullResponse_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* operationState at 1582 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* extendedStatus at 1583 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* extendedStatusMask at 1585 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* programInvocation at 1587 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 3, 0, 0 } /* noneSelected at 1588 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fullResponse_specs_2 = {
	sizeof(struct CS_Status_Response__fullResponse),
	offsetof(struct CS_Status_Response__fullResponse, _asn_ctx),
	asn_MAP_fullResponse_tag2el_2,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fullResponse_2 = {
	"fullResponse",
	"fullResponse",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_fullResponse_tags_2,
	sizeof(asn_DEF_fullResponse_tags_2)
		/sizeof(asn_DEF_fullResponse_tags_2[0]), /* 1 */
	asn_DEF_fullResponse_tags_2,	/* Same as above */
	sizeof(asn_DEF_fullResponse_tags_2)
		/sizeof(asn_DEF_fullResponse_tags_2[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_fullResponse_2,
	4,	/* Elements count */
	&asn_SPC_fullResponse_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CS_Status_Response_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CS_Status_Response, choice.fullResponse),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_fullResponse_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"fullResponse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CS_Status_Response, choice.noExtraResponse),
		(ASN_TAG_CLASS_UNIVERSAL | (5 << 2)),
		0,
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"noExtraResponse"
		},
};
static asn_TYPE_tag2member_t asn_MAP_CS_Status_Response_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (5 << 2)), 1, 0, 0 }, /* noExtraResponse at 1589 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 } /* fullResponse at 1582 */
};
static asn_CHOICE_specifics_t asn_SPC_CS_Status_Response_specs_1 = {
	sizeof(struct CS_Status_Response),
	offsetof(struct CS_Status_Response, _asn_ctx),
	offsetof(struct CS_Status_Response, present),
	sizeof(((struct CS_Status_Response *)0)->present),
	asn_MAP_CS_Status_Response_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_CS_Status_Response = {
	"CS-Status-Response",
	"CS-Status-Response",
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
	asn_MBR_CS_Status_Response_1,
	2,	/* Elements count */
	&asn_SPC_CS_Status_Response_specs_1	/* Additional specs */
};

