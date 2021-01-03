/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_PRACH_ResourceDedicatedBFR_H_
#define	_RRC_PRACH_ResourceDedicatedBFR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_PRACH_ResourceDedicatedBFR_PR {
	RRC_PRACH_ResourceDedicatedBFR_PR_NOTHING,	/* No components present */
	RRC_PRACH_ResourceDedicatedBFR_PR_ssb,
	RRC_PRACH_ResourceDedicatedBFR_PR_csi_RS
} RRC_PRACH_ResourceDedicatedBFR_PR;

/* Forward declarations */
struct RRC_BFR_SSB_Resource;
struct RRC_BFR_CSIRS_Resource;

/* RRC_PRACH-ResourceDedicatedBFR */
typedef struct RRC_PRACH_ResourceDedicatedBFR {
	RRC_PRACH_ResourceDedicatedBFR_PR present;
	union RRC_PRACH_ResourceDedicatedBFR_u {
		struct RRC_BFR_SSB_Resource	*ssb;
		struct RRC_BFR_CSIRS_Resource	*csi_RS;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_PRACH_ResourceDedicatedBFR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_PRACH_ResourceDedicatedBFR;
extern asn_CHOICE_specifics_t asn_SPC_RRC_PRACH_ResourceDedicatedBFR_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_PRACH_ResourceDedicatedBFR_1[2];
extern asn_per_constraints_t asn_PER_type_RRC_PRACH_ResourceDedicatedBFR_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_PRACH_ResourceDedicatedBFR_H_ */
#include <asn_internal.h>
