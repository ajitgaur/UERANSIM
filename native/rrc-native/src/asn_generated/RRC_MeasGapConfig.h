/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_MeasGapConfig_H_
#define	_RRC_MeasGapConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRC_SetupRelease_GapConfig;

/* RRC_MeasGapConfig */
typedef struct RRC_MeasGapConfig {
	struct RRC_SetupRelease_GapConfig	*gapFR2;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RRC_MeasGapConfig__ext1 {
		struct RRC_SetupRelease_GapConfig	*gapFR1;	/* OPTIONAL */
		struct RRC_SetupRelease_GapConfig	*gapUE;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_MeasGapConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_MeasGapConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_MeasGapConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_MeasGapConfig_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_MeasGapConfig_H_ */
#include <asn_internal.h>
