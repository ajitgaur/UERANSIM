/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_PUSCH_Config_H_
#define	_RRC_PUSCH_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_PUSCH_Config__txConfig {
	RRC_PUSCH_Config__txConfig_codebook	= 0,
	RRC_PUSCH_Config__txConfig_nonCodebook	= 1
} e_RRC_PUSCH_Config__txConfig;
typedef enum RRC_PUSCH_Config__frequencyHopping {
	RRC_PUSCH_Config__frequencyHopping_intraSlot	= 0,
	RRC_PUSCH_Config__frequencyHopping_interSlot	= 1
} e_RRC_PUSCH_Config__frequencyHopping;
typedef enum RRC_PUSCH_Config__resourceAllocation {
	RRC_PUSCH_Config__resourceAllocation_resourceAllocationType0	= 0,
	RRC_PUSCH_Config__resourceAllocation_resourceAllocationType1	= 1,
	RRC_PUSCH_Config__resourceAllocation_dynamicSwitch	= 2
} e_RRC_PUSCH_Config__resourceAllocation;
typedef enum RRC_PUSCH_Config__pusch_AggregationFactor {
	RRC_PUSCH_Config__pusch_AggregationFactor_n2	= 0,
	RRC_PUSCH_Config__pusch_AggregationFactor_n4	= 1,
	RRC_PUSCH_Config__pusch_AggregationFactor_n8	= 2
} e_RRC_PUSCH_Config__pusch_AggregationFactor;
typedef enum RRC_PUSCH_Config__mcs_Table {
	RRC_PUSCH_Config__mcs_Table_qam256	= 0,
	RRC_PUSCH_Config__mcs_Table_qam64LowSE	= 1
} e_RRC_PUSCH_Config__mcs_Table;
typedef enum RRC_PUSCH_Config__mcs_TableTransformPrecoder {
	RRC_PUSCH_Config__mcs_TableTransformPrecoder_qam256	= 0,
	RRC_PUSCH_Config__mcs_TableTransformPrecoder_qam64LowSE	= 1
} e_RRC_PUSCH_Config__mcs_TableTransformPrecoder;
typedef enum RRC_PUSCH_Config__transformPrecoder {
	RRC_PUSCH_Config__transformPrecoder_enabled	= 0,
	RRC_PUSCH_Config__transformPrecoder_disabled	= 1
} e_RRC_PUSCH_Config__transformPrecoder;
typedef enum RRC_PUSCH_Config__codebookSubset {
	RRC_PUSCH_Config__codebookSubset_fullyAndPartialAndNonCoherent	= 0,
	RRC_PUSCH_Config__codebookSubset_partialAndNonCoherent	= 1,
	RRC_PUSCH_Config__codebookSubset_nonCoherent	= 2
} e_RRC_PUSCH_Config__codebookSubset;
typedef enum RRC_PUSCH_Config__rbg_Size {
	RRC_PUSCH_Config__rbg_Size_config2	= 0
} e_RRC_PUSCH_Config__rbg_Size;
typedef enum RRC_PUSCH_Config__tp_pi2BPSK {
	RRC_PUSCH_Config__tp_pi2BPSK_enabled	= 0
} e_RRC_PUSCH_Config__tp_pi2BPSK;

/* Forward declarations */
struct RRC_SetupRelease_DMRS_UplinkConfig;
struct RRC_PUSCH_PowerControl;
struct RRC_SetupRelease_PUSCH_TimeDomainResourceAllocationList;
struct RRC_SetupRelease_UCI_OnPUSCH;

/* RRC_PUSCH-Config */
typedef struct RRC_PUSCH_Config {
	long	*dataScramblingIdentityPUSCH;	/* OPTIONAL */
	long	*txConfig;	/* OPTIONAL */
	struct RRC_SetupRelease_DMRS_UplinkConfig	*dmrs_UplinkForPUSCH_MappingTypeA;	/* OPTIONAL */
	struct RRC_SetupRelease_DMRS_UplinkConfig	*dmrs_UplinkForPUSCH_MappingTypeB;	/* OPTIONAL */
	struct RRC_PUSCH_PowerControl	*pusch_PowerControl;	/* OPTIONAL */
	long	*frequencyHopping;	/* OPTIONAL */
	struct RRC_PUSCH_Config__frequencyHoppingOffsetLists {
		A_SEQUENCE_OF(long) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *frequencyHoppingOffsetLists;
	long	 resourceAllocation;
	struct RRC_SetupRelease_PUSCH_TimeDomainResourceAllocationList	*pusch_TimeDomainAllocationList;	/* OPTIONAL */
	long	*pusch_AggregationFactor;	/* OPTIONAL */
	long	*mcs_Table;	/* OPTIONAL */
	long	*mcs_TableTransformPrecoder;	/* OPTIONAL */
	long	*transformPrecoder;	/* OPTIONAL */
	long	*codebookSubset;	/* OPTIONAL */
	long	*maxRank;	/* OPTIONAL */
	long	*rbg_Size;	/* OPTIONAL */
	struct RRC_SetupRelease_UCI_OnPUSCH	*uci_OnPUSCH;	/* OPTIONAL */
	long	*tp_pi2BPSK;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_PUSCH_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_txConfig_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_frequencyHopping_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_resourceAllocation_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_pusch_AggregationFactor_19;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_mcs_Table_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_mcs_TableTransformPrecoder_26;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_transformPrecoder_29;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_codebookSubset_32;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_rbg_Size_37;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_tp_pi2BPSK_40;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_PUSCH_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_PUSCH_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_PUSCH_Config_1[18];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_PUSCH_Config_H_ */
#include <asn_internal.h>
