/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ISO-9506-MMS-1"
 * 	found in "IEC61850.asn1"
 * 	`asn1c -S/skeletons -fnative-types`
 */

#include "asn_internal.h"

#include "ReportEventConditionStatus-Request.h"

int
ReportEventConditionStatus_Request_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_ObjectName.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using ObjectName,
 * so here we adjust the DEF accordingly.
 */
static void
ReportEventConditionStatus_Request_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_ObjectName.free_struct;
	td->print_struct   = asn_DEF_ObjectName.print_struct;
	td->ber_decoder    = asn_DEF_ObjectName.ber_decoder;
	td->der_encoder    = asn_DEF_ObjectName.der_encoder;
	td->xer_decoder    = asn_DEF_ObjectName.xer_decoder;
	td->xer_encoder    = asn_DEF_ObjectName.xer_encoder;
	td->uper_decoder   = asn_DEF_ObjectName.uper_decoder;
	td->uper_encoder   = asn_DEF_ObjectName.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_ObjectName.per_constraints;
	td->elements       = asn_DEF_ObjectName.elements;
	td->elements_count = asn_DEF_ObjectName.elements_count;
	td->specifics      = asn_DEF_ObjectName.specifics;
}

void
ReportEventConditionStatus_Request_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	ReportEventConditionStatus_Request_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
ReportEventConditionStatus_Request_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	ReportEventConditionStatus_Request_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
ReportEventConditionStatus_Request_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	ReportEventConditionStatus_Request_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
ReportEventConditionStatus_Request_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ReportEventConditionStatus_Request_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
ReportEventConditionStatus_Request_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	ReportEventConditionStatus_Request_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
ReportEventConditionStatus_Request_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ReportEventConditionStatus_Request_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_TYPE_descriptor_t asn_DEF_ReportEventConditionStatus_Request = {
	"ReportEventConditionStatus-Request",
	"ReportEventConditionStatus-Request",
	ReportEventConditionStatus_Request_free,
	ReportEventConditionStatus_Request_print,
	ReportEventConditionStatus_Request_constraint,
	ReportEventConditionStatus_Request_decode_ber,
	ReportEventConditionStatus_Request_encode_der,
	ReportEventConditionStatus_Request_decode_xer,
	ReportEventConditionStatus_Request_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	0, 0,	/* Defined elsewhere */
	0	/* No specifics */
};
