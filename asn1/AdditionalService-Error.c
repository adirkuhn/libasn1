/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "AdditionalService-Error.h"

static asn_TYPE_member_t asn_MBR_AdditionalService_Error_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AdditionalService_Error, choice.defineEcl),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DefineEventConditionList_Error,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"defineEcl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AdditionalService_Error, choice.addECLReference),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_AddEventConditionListReference_Error,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"addECLReference"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AdditionalService_Error, choice.removeECLReference),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RemoveEventConditionListReference_Error,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"removeECLReference"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AdditionalService_Error, choice.initiateUC),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_InitiateUnitControl_Error,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"initiateUC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AdditionalService_Error, choice.startUC),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_StartUnitControl_Error,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"startUC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AdditionalService_Error, choice.stopUC),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_StopUnitControl_Error,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"stopUC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AdditionalService_Error, choice.deleteUC),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DeleteUnitControl_Error,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"deleteUC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AdditionalService_Error, choice.loadUCFromFile),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LoadUnitControlFromFile_Error,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"loadUCFromFile"
		},
};
static asn_TYPE_tag2member_t asn_MAP_AdditionalService_Error_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* defineEcl at 1299 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* addECLReference at 1300 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* removeECLReference at 1301 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* initiateUC at 1302 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* startUC at 1303 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* stopUC at 1304 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* deleteUC at 1305 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* loadUCFromFile at 1306 */
};
static asn_CHOICE_specifics_t asn_SPC_AdditionalService_Error_specs_1 = {
	sizeof(struct AdditionalService_Error),
	offsetof(struct AdditionalService_Error, _asn_ctx),
	offsetof(struct AdditionalService_Error, present),
	sizeof(((struct AdditionalService_Error *)0)->present),
	asn_MAP_AdditionalService_Error_tag2el_1,
	8,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_AdditionalService_Error = {
	"AdditionalService-Error",
	"AdditionalService-Error",
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
	asn_MBR_AdditionalService_Error_1,
	8,	/* Elements count */
	&asn_SPC_AdditionalService_Error_specs_1	/* Additional specs */
};

