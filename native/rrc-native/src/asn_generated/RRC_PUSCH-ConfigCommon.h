/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_PUSCH_ConfigCommon_H_
#define	_RRC_PUSCH_ConfigCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_PUSCH_ConfigCommon__groupHoppingEnabledTransformPrecoding {
	RRC_PUSCH_ConfigCommon__groupHoppingEnabledTransformPrecoding_enabled	= 0
} e_RRC_PUSCH_ConfigCommon__groupHoppingEnabledTransformPrecoding;

/* Forward declarations */
struct RRC_PUSCH_TimeDomainResourceAllocationList;

/* RRC_PUSCH-ConfigCommon */
typedef struct RRC_PUSCH_ConfigCommon {
	long	*groupHoppingEnabledTransformPrecoding;	/* OPTIONAL */
	struct RRC_PUSCH_TimeDomainResourceAllocationList	*pusch_TimeDomainAllocationList;	/* OPTIONAL */
	long	*msg3_DeltaPreamble;	/* OPTIONAL */
	long	*p0_NominalWithGrant;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_PUSCH_ConfigCommon_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_groupHoppingEnabledTransformPrecoding_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_PUSCH_ConfigCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_PUSCH_ConfigCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_PUSCH_ConfigCommon_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_PUSCH_ConfigCommon_H_ */
#include <asn_internal.h>
