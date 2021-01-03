/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_UL_DataSplitThreshold_H_
#define	_ASN_RRC_UL_DataSplitThreshold_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_UL_DataSplitThreshold {
	ASN_RRC_UL_DataSplitThreshold_b0	= 0,
	ASN_RRC_UL_DataSplitThreshold_b100	= 1,
	ASN_RRC_UL_DataSplitThreshold_b200	= 2,
	ASN_RRC_UL_DataSplitThreshold_b400	= 3,
	ASN_RRC_UL_DataSplitThreshold_b800	= 4,
	ASN_RRC_UL_DataSplitThreshold_b1600	= 5,
	ASN_RRC_UL_DataSplitThreshold_b3200	= 6,
	ASN_RRC_UL_DataSplitThreshold_b6400	= 7,
	ASN_RRC_UL_DataSplitThreshold_b12800	= 8,
	ASN_RRC_UL_DataSplitThreshold_b25600	= 9,
	ASN_RRC_UL_DataSplitThreshold_b51200	= 10,
	ASN_RRC_UL_DataSplitThreshold_b102400	= 11,
	ASN_RRC_UL_DataSplitThreshold_b204800	= 12,
	ASN_RRC_UL_DataSplitThreshold_b409600	= 13,
	ASN_RRC_UL_DataSplitThreshold_b819200	= 14,
	ASN_RRC_UL_DataSplitThreshold_b1228800	= 15,
	ASN_RRC_UL_DataSplitThreshold_b1638400	= 16,
	ASN_RRC_UL_DataSplitThreshold_b2457600	= 17,
	ASN_RRC_UL_DataSplitThreshold_b3276800	= 18,
	ASN_RRC_UL_DataSplitThreshold_b4096000	= 19,
	ASN_RRC_UL_DataSplitThreshold_b4915200	= 20,
	ASN_RRC_UL_DataSplitThreshold_b5734400	= 21,
	ASN_RRC_UL_DataSplitThreshold_b6553600	= 22,
	ASN_RRC_UL_DataSplitThreshold_infinity	= 23,
	ASN_RRC_UL_DataSplitThreshold_spare8	= 24,
	ASN_RRC_UL_DataSplitThreshold_spare7	= 25,
	ASN_RRC_UL_DataSplitThreshold_spare6	= 26,
	ASN_RRC_UL_DataSplitThreshold_spare5	= 27,
	ASN_RRC_UL_DataSplitThreshold_spare4	= 28,
	ASN_RRC_UL_DataSplitThreshold_spare3	= 29,
	ASN_RRC_UL_DataSplitThreshold_spare2	= 30,
	ASN_RRC_UL_DataSplitThreshold_spare1	= 31
} e_ASN_RRC_UL_DataSplitThreshold;

/* ASN_RRC_UL-DataSplitThreshold */
typedef long	 ASN_RRC_UL_DataSplitThreshold_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ASN_RRC_UL_DataSplitThreshold_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_UL_DataSplitThreshold;
extern const asn_INTEGER_specifics_t asn_SPC_ASN_RRC_UL_DataSplitThreshold_specs_1;
asn_struct_free_f ASN_RRC_UL_DataSplitThreshold_free;
asn_struct_print_f ASN_RRC_UL_DataSplitThreshold_print;
asn_constr_check_f ASN_RRC_UL_DataSplitThreshold_constraint;
ber_type_decoder_f ASN_RRC_UL_DataSplitThreshold_decode_ber;
der_type_encoder_f ASN_RRC_UL_DataSplitThreshold_encode_der;
xer_type_decoder_f ASN_RRC_UL_DataSplitThreshold_decode_xer;
xer_type_encoder_f ASN_RRC_UL_DataSplitThreshold_encode_xer;
per_type_decoder_f ASN_RRC_UL_DataSplitThreshold_decode_uper;
per_type_encoder_f ASN_RRC_UL_DataSplitThreshold_encode_uper;
per_type_decoder_f ASN_RRC_UL_DataSplitThreshold_decode_aper;
per_type_encoder_f ASN_RRC_UL_DataSplitThreshold_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_UL_DataSplitThreshold_H_ */
#include <asn_internal.h>