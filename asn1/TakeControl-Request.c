/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "TakeControl-Request.h"

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
static asn_TYPE_member_t asn_MBR_TakeControl_Request_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TakeControl_Request, semaphoreName),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ObjectName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"semaphoreName"
		},
	{ ATF_POINTER, 7, offsetof(struct TakeControl_Request, namedToken),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Identifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"namedToken"
		},
	{ ATF_POINTER, 6, offsetof(struct TakeControl_Request, priority),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Priority,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		asn_DFL_4_set_64,	/* DEFAULT 64 */
		"priority"
		},
	{ ATF_POINTER, 5, offsetof(struct TakeControl_Request, acceptableDelay),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Unsigned32,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"acceptableDelay"
		},
	{ ATF_POINTER, 4, offsetof(struct TakeControl_Request, controlTimeOut),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Unsigned32,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"controlTimeOut"
		},
	{ ATF_POINTER, 3, offsetof(struct TakeControl_Request, abortOnTimeOut),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"abortOnTimeOut"
		},
	{ ATF_POINTER, 2, offsetof(struct TakeControl_Request, relinquishIfConnectionLost),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"relinquishIfConnectionLost"
		},
	{ ATF_POINTER, 1, offsetof(struct TakeControl_Request, applicationToPreempt),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ApplicationReference,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"applicationToPreempt"
		},
};
static ber_tlv_tag_t asn_DEF_TakeControl_Request_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_TakeControl_Request_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* semaphoreName at 2196 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* namedToken at 2197 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* priority at 2198 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* acceptableDelay at 2199 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* controlTimeOut at 2200 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* abortOnTimeOut at 2201 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* relinquishIfConnectionLost at 2202 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* applicationToPreempt at 2203 */
};
static asn_SEQUENCE_specifics_t asn_SPC_TakeControl_Request_specs_1 = {
	sizeof(struct TakeControl_Request),
	offsetof(struct TakeControl_Request, _asn_ctx),
	asn_MAP_TakeControl_Request_tag2el_1,
	8,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_TakeControl_Request = {
	"TakeControl-Request",
	"TakeControl-Request",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_TakeControl_Request_tags_1,
	sizeof(asn_DEF_TakeControl_Request_tags_1)
		/sizeof(asn_DEF_TakeControl_Request_tags_1[0]), /* 1 */
	asn_DEF_TakeControl_Request_tags_1,	/* Same as above */
	sizeof(asn_DEF_TakeControl_Request_tags_1)
		/sizeof(asn_DEF_TakeControl_Request_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_TakeControl_Request_1,
	8,	/* Elements count */
	&asn_SPC_TakeControl_Request_specs_1	/* Additional specs */
};

