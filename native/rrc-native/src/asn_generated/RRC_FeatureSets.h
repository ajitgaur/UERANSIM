/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_FeatureSets_H_
#define	_RRC_FeatureSets_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRC_FeatureSetDownlink;
struct RRC_FeatureSetDownlinkPerCC;
struct RRC_FeatureSetUplink;
struct RRC_FeatureSetUplinkPerCC;
struct RRC_FeatureSetDownlink_v1540;
struct RRC_FeatureSetUplink_v1540;
struct RRC_FeatureSetUplinkPerCC_v1540;

/* RRC_FeatureSets */
typedef struct RRC_FeatureSets {
	struct RRC_FeatureSets__featureSetsDownlink {
		A_SEQUENCE_OF(struct RRC_FeatureSetDownlink) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *featureSetsDownlink;
	struct RRC_FeatureSets__featureSetsDownlinkPerCC {
		A_SEQUENCE_OF(struct RRC_FeatureSetDownlinkPerCC) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *featureSetsDownlinkPerCC;
	struct RRC_FeatureSets__featureSetsUplink {
		A_SEQUENCE_OF(struct RRC_FeatureSetUplink) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *featureSetsUplink;
	struct RRC_FeatureSets__featureSetsUplinkPerCC {
		A_SEQUENCE_OF(struct RRC_FeatureSetUplinkPerCC) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *featureSetsUplinkPerCC;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RRC_FeatureSets__ext1 {
		struct RRC_FeatureSets__ext1__featureSetsDownlink_v1540 {
			A_SEQUENCE_OF(struct RRC_FeatureSetDownlink_v1540) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *featureSetsDownlink_v1540;
		struct RRC_FeatureSets__ext1__featureSetsUplink_v1540 {
			A_SEQUENCE_OF(struct RRC_FeatureSetUplink_v1540) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *featureSetsUplink_v1540;
		struct RRC_FeatureSets__ext1__featureSetsUplinkPerCC_v1540 {
			A_SEQUENCE_OF(struct RRC_FeatureSetUplinkPerCC_v1540) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *featureSetsUplinkPerCC_v1540;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_FeatureSets_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_FeatureSets;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_FeatureSets_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_FeatureSets_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_FeatureSets_H_ */
#include <asn_internal.h>
