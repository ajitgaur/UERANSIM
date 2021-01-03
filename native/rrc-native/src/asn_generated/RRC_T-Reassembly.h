/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_T_Reassembly_H_
#define	_RRC_T_Reassembly_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_T_Reassembly {
	RRC_T_Reassembly_ms0	= 0,
	RRC_T_Reassembly_ms5	= 1,
	RRC_T_Reassembly_ms10	= 2,
	RRC_T_Reassembly_ms15	= 3,
	RRC_T_Reassembly_ms20	= 4,
	RRC_T_Reassembly_ms25	= 5,
	RRC_T_Reassembly_ms30	= 6,
	RRC_T_Reassembly_ms35	= 7,
	RRC_T_Reassembly_ms40	= 8,
	RRC_T_Reassembly_ms45	= 9,
	RRC_T_Reassembly_ms50	= 10,
	RRC_T_Reassembly_ms55	= 11,
	RRC_T_Reassembly_ms60	= 12,
	RRC_T_Reassembly_ms65	= 13,
	RRC_T_Reassembly_ms70	= 14,
	RRC_T_Reassembly_ms75	= 15,
	RRC_T_Reassembly_ms80	= 16,
	RRC_T_Reassembly_ms85	= 17,
	RRC_T_Reassembly_ms90	= 18,
	RRC_T_Reassembly_ms95	= 19,
	RRC_T_Reassembly_ms100	= 20,
	RRC_T_Reassembly_ms110	= 21,
	RRC_T_Reassembly_ms120	= 22,
	RRC_T_Reassembly_ms130	= 23,
	RRC_T_Reassembly_ms140	= 24,
	RRC_T_Reassembly_ms150	= 25,
	RRC_T_Reassembly_ms160	= 26,
	RRC_T_Reassembly_ms170	= 27,
	RRC_T_Reassembly_ms180	= 28,
	RRC_T_Reassembly_ms190	= 29,
	RRC_T_Reassembly_ms200	= 30,
	RRC_T_Reassembly_spare1	= 31
} e_RRC_T_Reassembly;

/* RRC_T-Reassembly */
typedef long	 RRC_T_Reassembly_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RRC_T_Reassembly_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RRC_T_Reassembly;
extern const asn_INTEGER_specifics_t asn_SPC_RRC_T_Reassembly_specs_1;
asn_struct_free_f RRC_T_Reassembly_free;
asn_struct_print_f RRC_T_Reassembly_print;
asn_constr_check_f RRC_T_Reassembly_constraint;
ber_type_decoder_f RRC_T_Reassembly_decode_ber;
der_type_encoder_f RRC_T_Reassembly_encode_der;
xer_type_decoder_f RRC_T_Reassembly_decode_xer;
xer_type_encoder_f RRC_T_Reassembly_encode_xer;
per_type_decoder_f RRC_T_Reassembly_decode_uper;
per_type_encoder_f RRC_T_Reassembly_encode_uper;
per_type_decoder_f RRC_T_Reassembly_decode_aper;
per_type_encoder_f RRC_T_Reassembly_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_T_Reassembly_H_ */
#include <asn_internal.h>
