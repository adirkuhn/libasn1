/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS-SCI-Module-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "Operator-Station-instance.h"

static int
stationType_7_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
stationType_7_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
stationType_7_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	stationType_7_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
stationType_7_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	stationType_7_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
stationType_7_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	stationType_7_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
stationType_7_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	stationType_7_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
stationType_7_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	stationType_7_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
stationType_7_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	stationType_7_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_INTEGER_enum_map_t asn_MAP_stationType_value2enum_7[] = {
	{ 0,	5,	"entry" },
	{ 1,	7,	"display" },
	{ 2,	13,	"entry-display" }
};
static unsigned int asn_MAP_stationType_enum2value_7[] = {
	1,	/* display(1) */
	0,	/* entry(0) */
	2	/* entry-display(2) */
};
static asn_INTEGER_specifics_t asn_SPC_stationType_specs_7 = {
	asn_MAP_stationType_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_stationType_enum2value_7,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_stationType_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_stationType_7 = {
	"stationType",
	"stationType",
	stationType_7_free,
	stationType_7_print,
	stationType_7_constraint,
	stationType_7_decode_ber,
	stationType_7_encode_der,
	stationType_7_decode_xer,
	stationType_7_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_stationType_tags_7,
	sizeof(asn_DEF_stationType_tags_7)
		/sizeof(asn_DEF_stationType_tags_7[0]) - 1, /* 1 */
	asn_DEF_stationType_tags_7,	/* Same as above */
	sizeof(asn_DEF_stationType_tags_7)
		/sizeof(asn_DEF_stationType_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* Defined elsewhere */
	&asn_SPC_stationType_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_details_5[] = {
	{ ATF_POINTER, 0, offsetof(struct Operator_Station_instance__definition__details, accessControl),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Access_Control_List_instance,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"accessControl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Operator_Station_instance__definition__details, stationType),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_stationType_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"stationType"
		},
};
static ber_tlv_tag_t asn_DEF_details_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_details_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 0, 0, 0 }, /* accessControl at 3105 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 1, 0, 0 } /* stationType at 3107 */
};
static asn_SEQUENCE_specifics_t asn_SPC_details_specs_5 = {
	sizeof(struct Operator_Station_instance__definition__details),
	offsetof(struct Operator_Station_instance__definition__details, _asn_ctx),
	asn_MAP_details_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_details_5 = {
	"details",
	"details",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_details_tags_5,
	sizeof(asn_DEF_details_tags_5)
		/sizeof(asn_DEF_details_tags_5[0]) - 1, /* 1 */
	asn_DEF_details_tags_5,	/* Same as above */
	sizeof(asn_DEF_details_tags_5)
		/sizeof(asn_DEF_details_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_details_5,
	2,	/* Elements count */
	&asn_SPC_details_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_definition_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Operator_Station_instance__definition, choice.reference),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OBJECT_IDENTIFIER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"reference"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Operator_Station_instance__definition, choice.details),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_details_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"details"
		},
};
static asn_TYPE_tag2member_t asn_MAP_definition_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* reference at 3102 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 } /* details at 3105 */
};
static asn_CHOICE_specifics_t asn_SPC_definition_specs_3 = {
	sizeof(struct Operator_Station_instance__definition),
	offsetof(struct Operator_Station_instance__definition, _asn_ctx),
	offsetof(struct Operator_Station_instance__definition, present),
	sizeof(((struct Operator_Station_instance__definition *)0)->present),
	asn_MAP_definition_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_definition_3 = {
	"definition",
	"definition",
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
	asn_MBR_definition_3,
	2,	/* Elements count */
	&asn_SPC_definition_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Operator_Station_instance_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Operator_Station_instance, name),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Identifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"name"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Operator_Station_instance, definition),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_definition_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"definition"
		},
};
static ber_tlv_tag_t asn_DEF_Operator_Station_instance_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Operator_Station_instance_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* name at 3100 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reference at 3102 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 } /* details at 3105 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Operator_Station_instance_specs_1 = {
	sizeof(struct Operator_Station_instance),
	offsetof(struct Operator_Station_instance, _asn_ctx),
	asn_MAP_Operator_Station_instance_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Operator_Station_instance = {
	"Operator-Station-instance",
	"Operator-Station-instance",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Operator_Station_instance_tags_1,
	sizeof(asn_DEF_Operator_Station_instance_tags_1)
		/sizeof(asn_DEF_Operator_Station_instance_tags_1[0]), /* 1 */
	asn_DEF_Operator_Station_instance_tags_1,	/* Same as above */
	sizeof(asn_DEF_Operator_Station_instance_tags_1)
		/sizeof(asn_DEF_Operator_Station_instance_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Operator_Station_instance_1,
	2,	/* Elements count */
	&asn_SPC_Operator_Station_instance_specs_1	/* Additional specs */
};

