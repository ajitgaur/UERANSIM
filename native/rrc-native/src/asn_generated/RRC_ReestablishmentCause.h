/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_ReestablishmentCause_H_
#define	_RRC_ReestablishmentCause_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_ReestablishmentCause {
	RRC_ReestablishmentCause_reconfigurationFailure	= 0,
	RRC_ReestablishmentCause_handoverFailure	= 1,
	RRC_ReestablishmentCause_otherFailure	= 2,
	RRC_ReestablishmentCause_spare1	= 3
} e_RRC_ReestablishmentCause;

/* RRC_ReestablishmentCause */
typedef long	 RRC_ReestablishmentCause_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RRC_ReestablishmentCause_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RRC_ReestablishmentCause;
extern const asn_INTEGER_specifics_t asn_SPC_RRC_ReestablishmentCause_specs_1;
asn_struct_free_f RRC_ReestablishmentCause_free;
asn_struct_print_f RRC_ReestablishmentCause_print;
asn_constr_check_f RRC_ReestablishmentCause_constraint;
ber_type_decoder_f RRC_ReestablishmentCause_decode_ber;
der_type_encoder_f RRC_ReestablishmentCause_encode_der;
xer_type_decoder_f RRC_ReestablishmentCause_decode_xer;
xer_type_encoder_f RRC_ReestablishmentCause_encode_xer;
per_type_decoder_f RRC_ReestablishmentCause_decode_uper;
per_type_encoder_f RRC_ReestablishmentCause_encode_uper;
per_type_decoder_f RRC_ReestablishmentCause_decode_aper;
per_type_encoder_f RRC_ReestablishmentCause_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_ReestablishmentCause_H_ */
#include <asn_internal.h>
