/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_BandNR_H_
#define	_RRC_BandNR_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_FreqBandIndicatorNR.h"
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_BandNR__extendedCP {
	RRC_BandNR__extendedCP_supported	= 0
} e_RRC_BandNR__extendedCP;
typedef enum RRC_BandNR__multipleTCI {
	RRC_BandNR__multipleTCI_supported	= 0
} e_RRC_BandNR__multipleTCI;
typedef enum RRC_BandNR__bwp_WithoutRestriction {
	RRC_BandNR__bwp_WithoutRestriction_supported	= 0
} e_RRC_BandNR__bwp_WithoutRestriction;
typedef enum RRC_BandNR__bwp_SameNumerology {
	RRC_BandNR__bwp_SameNumerology_upto2	= 0,
	RRC_BandNR__bwp_SameNumerology_upto4	= 1
} e_RRC_BandNR__bwp_SameNumerology;
typedef enum RRC_BandNR__bwp_DiffNumerology {
	RRC_BandNR__bwp_DiffNumerology_upto4	= 0
} e_RRC_BandNR__bwp_DiffNumerology;
typedef enum RRC_BandNR__crossCarrierScheduling_SameSCS {
	RRC_BandNR__crossCarrierScheduling_SameSCS_supported	= 0
} e_RRC_BandNR__crossCarrierScheduling_SameSCS;
typedef enum RRC_BandNR__pdsch_256QAM_FR2 {
	RRC_BandNR__pdsch_256QAM_FR2_supported	= 0
} e_RRC_BandNR__pdsch_256QAM_FR2;
typedef enum RRC_BandNR__pusch_256QAM {
	RRC_BandNR__pusch_256QAM_supported	= 0
} e_RRC_BandNR__pusch_256QAM;
typedef enum RRC_BandNR__ue_PowerClass {
	RRC_BandNR__ue_PowerClass_pc1	= 0,
	RRC_BandNR__ue_PowerClass_pc2	= 1,
	RRC_BandNR__ue_PowerClass_pc3	= 2,
	RRC_BandNR__ue_PowerClass_pc4	= 3
} e_RRC_BandNR__ue_PowerClass;
typedef enum RRC_BandNR__rateMatchingLTE_CRS {
	RRC_BandNR__rateMatchingLTE_CRS_supported	= 0
} e_RRC_BandNR__rateMatchingLTE_CRS;
typedef enum RRC_BandNR__channelBWs_DL_v1530_PR {
	RRC_BandNR__channelBWs_DL_v1530_PR_NOTHING,	/* No components present */
	RRC_BandNR__channelBWs_DL_v1530_PR_fr1,
	RRC_BandNR__channelBWs_DL_v1530_PR_fr2
} RRC_BandNR__channelBWs_DL_v1530_PR;
typedef enum RRC_BandNR__channelBWs_UL_v1530_PR {
	RRC_BandNR__channelBWs_UL_v1530_PR_NOTHING,	/* No components present */
	RRC_BandNR__channelBWs_UL_v1530_PR_fr1,
	RRC_BandNR__channelBWs_UL_v1530_PR_fr2
} RRC_BandNR__channelBWs_UL_v1530_PR;
typedef enum RRC_BandNR__ext1__maxUplinkDutyCycle_PC2_FR1 {
	RRC_BandNR__ext1__maxUplinkDutyCycle_PC2_FR1_n60	= 0,
	RRC_BandNR__ext1__maxUplinkDutyCycle_PC2_FR1_n70	= 1,
	RRC_BandNR__ext1__maxUplinkDutyCycle_PC2_FR1_n80	= 2,
	RRC_BandNR__ext1__maxUplinkDutyCycle_PC2_FR1_n90	= 3,
	RRC_BandNR__ext1__maxUplinkDutyCycle_PC2_FR1_n100	= 4
} e_RRC_BandNR__ext1__maxUplinkDutyCycle_PC2_FR1;
typedef enum RRC_BandNR__ext2__pucch_SpatialRelInfoMAC_CE {
	RRC_BandNR__ext2__pucch_SpatialRelInfoMAC_CE_supported	= 0
} e_RRC_BandNR__ext2__pucch_SpatialRelInfoMAC_CE;
typedef enum RRC_BandNR__ext2__powerBoosting_pi2BPSK {
	RRC_BandNR__ext2__powerBoosting_pi2BPSK_supported	= 0
} e_RRC_BandNR__ext2__powerBoosting_pi2BPSK;
typedef enum RRC_BandNR__ext3__maxUplinkDutyCycle_FR2 {
	RRC_BandNR__ext3__maxUplinkDutyCycle_FR2_n15	= 0,
	RRC_BandNR__ext3__maxUplinkDutyCycle_FR2_n20	= 1,
	RRC_BandNR__ext3__maxUplinkDutyCycle_FR2_n25	= 2,
	RRC_BandNR__ext3__maxUplinkDutyCycle_FR2_n30	= 3,
	RRC_BandNR__ext3__maxUplinkDutyCycle_FR2_n40	= 4,
	RRC_BandNR__ext3__maxUplinkDutyCycle_FR2_n50	= 5,
	RRC_BandNR__ext3__maxUplinkDutyCycle_FR2_n60	= 6,
	RRC_BandNR__ext3__maxUplinkDutyCycle_FR2_n70	= 7,
	RRC_BandNR__ext3__maxUplinkDutyCycle_FR2_n80	= 8,
	RRC_BandNR__ext3__maxUplinkDutyCycle_FR2_n90	= 9,
	RRC_BandNR__ext3__maxUplinkDutyCycle_FR2_n100	= 10
} e_RRC_BandNR__ext3__maxUplinkDutyCycle_FR2;

/* Forward declarations */
struct RRC_MIMO_ParametersPerBand;

/* RRC_BandNR */
typedef struct RRC_BandNR {
	RRC_FreqBandIndicatorNR_t	 bandNR;
	BIT_STRING_t	*modifiedMPR_Behaviour;	/* OPTIONAL */
	struct RRC_MIMO_ParametersPerBand	*mimo_ParametersPerBand;	/* OPTIONAL */
	long	*extendedCP;	/* OPTIONAL */
	long	*multipleTCI;	/* OPTIONAL */
	long	*bwp_WithoutRestriction;	/* OPTIONAL */
	long	*bwp_SameNumerology;	/* OPTIONAL */
	long	*bwp_DiffNumerology;	/* OPTIONAL */
	long	*crossCarrierScheduling_SameSCS;	/* OPTIONAL */
	long	*pdsch_256QAM_FR2;	/* OPTIONAL */
	long	*pusch_256QAM;	/* OPTIONAL */
	long	*ue_PowerClass;	/* OPTIONAL */
	long	*rateMatchingLTE_CRS;	/* OPTIONAL */
	struct RRC_BandNR__channelBWs_DL_v1530 {
		RRC_BandNR__channelBWs_DL_v1530_PR present;
		union RRC_BandNR__RRC_channelBWs_DL_v1530_u {
			struct RRC_BandNR__channelBWs_DL_v1530__fr1 {
				BIT_STRING_t	*scs_15kHz;	/* OPTIONAL */
				BIT_STRING_t	*scs_30kHz;	/* OPTIONAL */
				BIT_STRING_t	*scs_60kHz;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *fr1;
			struct RRC_BandNR__channelBWs_DL_v1530__fr2 {
				BIT_STRING_t	*scs_60kHz;	/* OPTIONAL */
				BIT_STRING_t	*scs_120kHz;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *fr2;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *channelBWs_DL_v1530;
	struct RRC_BandNR__channelBWs_UL_v1530 {
		RRC_BandNR__channelBWs_UL_v1530_PR present;
		union RRC_BandNR__RRC_channelBWs_UL_v1530_u {
			struct RRC_BandNR__channelBWs_UL_v1530__fr1 {
				BIT_STRING_t	*scs_15kHz;	/* OPTIONAL */
				BIT_STRING_t	*scs_30kHz;	/* OPTIONAL */
				BIT_STRING_t	*scs_60kHz;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *fr1;
			struct RRC_BandNR__channelBWs_UL_v1530__fr2 {
				BIT_STRING_t	*scs_60kHz;	/* OPTIONAL */
				BIT_STRING_t	*scs_120kHz;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *fr2;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *channelBWs_UL_v1530;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RRC_BandNR__ext1 {
		long	*maxUplinkDutyCycle_PC2_FR1;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct RRC_BandNR__ext2 {
		long	*pucch_SpatialRelInfoMAC_CE;	/* OPTIONAL */
		long	*powerBoosting_pi2BPSK;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct RRC_BandNR__ext3 {
		long	*maxUplinkDutyCycle_FR2;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_BandNR_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_extendedCP_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_multipleTCI_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_bwp_WithoutRestriction_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_bwp_SameNumerology_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_bwp_DiffNumerology_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_crossCarrierScheduling_SameSCS_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_pdsch_256QAM_FR2_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_pusch_256QAM_20;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_ue_PowerClass_22;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_rateMatchingLTE_CRS_27;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_maxUplinkDutyCycle_PC2_FR1_47;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_pucch_SpatialRelInfoMAC_CE_54;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_powerBoosting_pi2BPSK_56;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_maxUplinkDutyCycle_FR2_59;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_BandNR;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_BandNR_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_BandNR_1[18];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_BandNR_H_ */
#include <asn_internal.h>
