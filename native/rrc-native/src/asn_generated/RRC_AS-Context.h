/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_AS_Context_H_
#define	_RRC_AS_Context_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRC_ReestablishmentInfo;
struct RRC_ConfigRestrictInfoSCG;
struct RRC_RAN_NotificationAreaInfo;
struct RRC_BandCombinationInfoSN;

/* RRC_AS-Context */
typedef struct RRC_AS_Context {
	struct RRC_ReestablishmentInfo	*reestablishmentInfo;	/* OPTIONAL */
	struct RRC_ConfigRestrictInfoSCG	*configRestrictInfo;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RRC_AS_Context__ext1 {
		struct RRC_RAN_NotificationAreaInfo	*ran_NotificationAreaInfo;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct RRC_AS_Context__ext2 {
		OCTET_STRING_t	*ueAssistanceInformation;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct RRC_AS_Context__ext3 {
		struct RRC_BandCombinationInfoSN	*selectedBandCombinationSN;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_AS_Context_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_AS_Context;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_AS_Context_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_AS_Context_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_AS_Context_H_ */
#include <asn_internal.h>
