/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_FrequencyInfoUL_SIB_H_
#define	_RRC_FrequencyInfoUL_SIB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_ARFCN-ValueNR.h"
#include "RRC_P-Max.h"
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_FrequencyInfoUL_SIB__frequencyShift7p5khz {
	RRC_FrequencyInfoUL_SIB__frequencyShift7p5khz_true	= 0
} e_RRC_FrequencyInfoUL_SIB__frequencyShift7p5khz;

/* Forward declarations */
struct RRC_MultiFrequencyBandListNR_SIB;
struct RRC_SCS_SpecificCarrier;

/* RRC_FrequencyInfoUL-SIB */
typedef struct RRC_FrequencyInfoUL_SIB {
	struct RRC_MultiFrequencyBandListNR_SIB	*frequencyBandList;	/* OPTIONAL */
	RRC_ARFCN_ValueNR_t	*absoluteFrequencyPointA;	/* OPTIONAL */
	struct RRC_FrequencyInfoUL_SIB__scs_SpecificCarrierList {
		A_SEQUENCE_OF(struct RRC_SCS_SpecificCarrier) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} scs_SpecificCarrierList;
	RRC_P_Max_t	*p_Max;	/* OPTIONAL */
	long	*frequencyShift7p5khz;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_FrequencyInfoUL_SIB_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_frequencyShift7p5khz_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_FrequencyInfoUL_SIB;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_FrequencyInfoUL_SIB_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_FrequencyInfoUL_SIB_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_FrequencyInfoUL_SIB_H_ */
#include <asn_internal.h>
