/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_PDCCH_ConfigCommon_H_
#define	_RRC_PDCCH_ConfigCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_ControlResourceSetZero.h"
#include "RRC_SearchSpaceZero.h"
#include "RRC_SearchSpaceId.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR {
	RRC_PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR_NOTHING,	/* No components present */
	RRC_PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR_sCS15KHZoneT,
	RRC_PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR_sCS30KHZoneT_SCS15KHZhalfT,
	RRC_PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR_sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT,
	RRC_PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR_sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT,
	RRC_PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR_sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT,
	RRC_PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR_sCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT,
	RRC_PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR_sCS120KHZoneEighthT_SCS60KHZoneSixteenthT,
	RRC_PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR_sCS120KHZoneSixteenthT
} RRC_PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR;

/* Forward declarations */
struct RRC_ControlResourceSet;
struct RRC_SearchSpace;

/* RRC_PDCCH-ConfigCommon */
typedef struct RRC_PDCCH_ConfigCommon {
	RRC_ControlResourceSetZero_t	*controlResourceSetZero;	/* OPTIONAL */
	struct RRC_ControlResourceSet	*commonControlResourceSet;	/* OPTIONAL */
	RRC_SearchSpaceZero_t	*searchSpaceZero;	/* OPTIONAL */
	struct RRC_PDCCH_ConfigCommon__commonSearchSpaceList {
		A_SEQUENCE_OF(struct RRC_SearchSpace) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *commonSearchSpaceList;
	RRC_SearchSpaceId_t	*searchSpaceSIB1;	/* OPTIONAL */
	RRC_SearchSpaceId_t	*searchSpaceOtherSystemInformation;	/* OPTIONAL */
	RRC_SearchSpaceId_t	*pagingSearchSpace;	/* OPTIONAL */
	RRC_SearchSpaceId_t	*ra_SearchSpace;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RRC_PDCCH_ConfigCommon__ext1 {
		struct RRC_PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO {
			RRC_PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR present;
			union RRC_PDCCH_ConfigCommon__RRC_ext1__RRC_firstPDCCH_MonitoringOccasionOfPO_u {
				struct RRC_PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO__sCS15KHZoneT {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *sCS15KHZoneT;
				struct RRC_PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO__sCS30KHZoneT_SCS15KHZhalfT {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *sCS30KHZoneT_SCS15KHZhalfT;
				struct RRC_PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO__sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT;
				struct RRC_PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO__sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT;
				struct RRC_PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO__sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT;
				struct RRC_PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO__sCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *sCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT;
				struct RRC_PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO__sCS120KHZoneEighthT_SCS60KHZoneSixteenthT {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *sCS120KHZoneEighthT_SCS60KHZoneSixteenthT;
				struct RRC_PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO__sCS120KHZoneSixteenthT {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *sCS120KHZoneSixteenthT;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *firstPDCCH_MonitoringOccasionOfPO;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_PDCCH_ConfigCommon_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_PDCCH_ConfigCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_PDCCH_ConfigCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_PDCCH_ConfigCommon_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_PDCCH_ConfigCommon_H_ */
#include <asn_internal.h>
