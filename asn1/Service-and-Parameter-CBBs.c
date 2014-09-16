/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-SCI-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "Service-and-Parameter-CBBs.h"

static asn_TYPE_member_t asn_MBR_Service_and_Parameter_CBBs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Service_and_Parameter_CBBs, services_Client),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServiceSupportOptions,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"services-Client"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Service_and_Parameter_CBBs, services_Server),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServiceSupportOptions,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"services-Server"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Service_and_Parameter_CBBs, parameters),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ParameterSupportOptions,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"parameters"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Service_and_Parameter_CBBs, nest),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"nest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Service_and_Parameter_CBBs, extendedServices_Client),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSupportOptions,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"extendedServices-Client"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Service_and_Parameter_CBBs, extendedServices_Server),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSupportOptions,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"extendedServices-Server"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Service_and_Parameter_CBBs, extendedParameters),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalCBBOptions,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"extendedParameters"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Service_and_Parameter_CBBs, generalManagement),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GeneralManagementParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"generalManagement"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Service_and_Parameter_CBBs, vMDSupport),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VMDSupportParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"vMDSupport"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Service_and_Parameter_CBBs, domainManagement),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DomainManagementParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"domainManagement"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Service_and_Parameter_CBBs, programInvocation),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProgramInvocationManagementParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"programInvocation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Service_and_Parameter_CBBs, variableAccess),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VariableAccessParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"variableAccess"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Service_and_Parameter_CBBs, dataParameters),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DataParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"dataParameters"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Service_and_Parameter_CBBs, semaphoreManagement),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SemaphoreManagementParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"semaphoreManagement"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Service_and_Parameter_CBBs, operatorCommunication),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OperatorCommunicationParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"operatorCommunication"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Service_and_Parameter_CBBs, errors),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ErrorParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"errors"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Service_and_Parameter_CBBs, fileManagement),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FileManagementParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"fileManagement"
		},
};
static ber_tlv_tag_t asn_DEF_Service_and_Parameter_CBBs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Service_and_Parameter_CBBs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* services-Client at 3261 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* services-Server at 3262 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* parameters at 3263 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* nest at 3264 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* extendedServices-Client at 3265 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* extendedServices-Server at 3266 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* extendedParameters at 3267 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* generalManagement at 3268 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* vMDSupport at 3269 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* domainManagement at 3270 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* programInvocation at 3271 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* variableAccess at 3272 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* dataParameters at 3273 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* semaphoreManagement at 3274 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* operatorCommunication at 3275 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* errors at 3276 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 } /* fileManagement at 3277 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Service_and_Parameter_CBBs_specs_1 = {
	sizeof(struct Service_and_Parameter_CBBs),
	offsetof(struct Service_and_Parameter_CBBs, _asn_ctx),
	asn_MAP_Service_and_Parameter_CBBs_tag2el_1,
	17,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Service_and_Parameter_CBBs = {
	"Service-and-Parameter-CBBs",
	"Service-and-Parameter-CBBs",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Service_and_Parameter_CBBs_tags_1,
	sizeof(asn_DEF_Service_and_Parameter_CBBs_tags_1)
		/sizeof(asn_DEF_Service_and_Parameter_CBBs_tags_1[0]), /* 1 */
	asn_DEF_Service_and_Parameter_CBBs_tags_1,	/* Same as above */
	sizeof(asn_DEF_Service_and_Parameter_CBBs_tags_1)
		/sizeof(asn_DEF_Service_and_Parameter_CBBs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Service_and_Parameter_CBBs_1,
	17,	/* Elements count */
	&asn_SPC_Service_and_Parameter_CBBs_specs_1	/* Additional specs */
};
