/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_UE_NR_Capability_v1530_H_
#define	_RRC_UE_NR_Capability_v1530_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_UE_NR_Capability_v1530__dummy {
	RRC_UE_NR_Capability_v1530__dummy_supported	= 0
} e_RRC_UE_NR_Capability_v1530__dummy;
typedef enum RRC_UE_NR_Capability_v1530__inactiveState {
	RRC_UE_NR_Capability_v1530__inactiveState_supported	= 0
} e_RRC_UE_NR_Capability_v1530__inactiveState;
typedef enum RRC_UE_NR_Capability_v1530__delayBudgetReporting {
	RRC_UE_NR_Capability_v1530__delayBudgetReporting_supported	= 0
} e_RRC_UE_NR_Capability_v1530__delayBudgetReporting;

/* Forward declarations */
struct RRC_UE_NR_CapabilityAddXDD_Mode_v1530;
struct RRC_InterRAT_Parameters;
struct RRC_UE_NR_Capability_v1540;

/* RRC_UE-NR-Capability-v1530 */
typedef struct RRC_UE_NR_Capability_v1530 {
	struct RRC_UE_NR_CapabilityAddXDD_Mode_v1530	*fdd_Add_UE_NR_Capabilities_v1530;	/* OPTIONAL */
	struct RRC_UE_NR_CapabilityAddXDD_Mode_v1530	*tdd_Add_UE_NR_Capabilities_v1530;	/* OPTIONAL */
	long	*dummy;	/* OPTIONAL */
	struct RRC_InterRAT_Parameters	*interRAT_Parameters;	/* OPTIONAL */
	long	*inactiveState;	/* OPTIONAL */
	long	*delayBudgetReporting;	/* OPTIONAL */
	struct RRC_UE_NR_Capability_v1540	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_UE_NR_Capability_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_dummy_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_inactiveState_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_delayBudgetReporting_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_UE_NR_Capability_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_UE_NR_Capability_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_UE_NR_Capability_v1530_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_UE_NR_Capability_v1530_H_ */
#include <asn_internal.h>