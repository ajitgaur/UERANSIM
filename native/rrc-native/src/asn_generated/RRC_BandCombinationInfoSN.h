/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_BandCombinationInfoSN_H_
#define	_RRC_BandCombinationInfoSN_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_BandCombinationIndex.h"
#include "RRC_FeatureSetEntryIndex.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRC_BandCombinationInfoSN */
typedef struct RRC_BandCombinationInfoSN {
	RRC_BandCombinationIndex_t	 bandCombinationIndex;
	RRC_FeatureSetEntryIndex_t	 requestedFeatureSets;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_BandCombinationInfoSN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_BandCombinationInfoSN;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_BandCombinationInfoSN_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_BandCombinationInfoSN_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_BandCombinationInfoSN_H_ */
#include <asn_internal.h>
