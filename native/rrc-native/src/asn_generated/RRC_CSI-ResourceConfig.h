/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_CSI_ResourceConfig_H_
#define	_RRC_CSI_ResourceConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_CSI-ResourceConfigId.h"
#include "RRC_BWP-Id.h"
#include <NativeEnumerated.h>
#include "RRC_NZP-CSI-RS-ResourceSetId.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "RRC_CSI-SSB-ResourceSetId.h"
#include <constr_SEQUENCE.h>
#include "RRC_CSI-IM-ResourceSetId.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_CSI_ResourceConfig__csi_RS_ResourceSetList_PR {
	RRC_CSI_ResourceConfig__csi_RS_ResourceSetList_PR_NOTHING,	/* No components present */
	RRC_CSI_ResourceConfig__csi_RS_ResourceSetList_PR_nzp_CSI_RS_SSB,
	RRC_CSI_ResourceConfig__csi_RS_ResourceSetList_PR_csi_IM_ResourceSetList
} RRC_CSI_ResourceConfig__csi_RS_ResourceSetList_PR;
typedef enum RRC_CSI_ResourceConfig__resourceType {
	RRC_CSI_ResourceConfig__resourceType_aperiodic	= 0,
	RRC_CSI_ResourceConfig__resourceType_semiPersistent	= 1,
	RRC_CSI_ResourceConfig__resourceType_periodic	= 2
} e_RRC_CSI_ResourceConfig__resourceType;

/* RRC_CSI-ResourceConfig */
typedef struct RRC_CSI_ResourceConfig {
	RRC_CSI_ResourceConfigId_t	 csi_ResourceConfigId;
	struct RRC_CSI_ResourceConfig__csi_RS_ResourceSetList {
		RRC_CSI_ResourceConfig__csi_RS_ResourceSetList_PR present;
		union RRC_CSI_ResourceConfig__RRC_csi_RS_ResourceSetList_u {
			struct RRC_CSI_ResourceConfig__csi_RS_ResourceSetList__nzp_CSI_RS_SSB {
				struct RRC_CSI_ResourceConfig__csi_RS_ResourceSetList__nzp_CSI_RS_SSB__nzp_CSI_RS_ResourceSetList {
					A_SEQUENCE_OF(RRC_NZP_CSI_RS_ResourceSetId_t) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *nzp_CSI_RS_ResourceSetList;
				struct RRC_CSI_ResourceConfig__csi_RS_ResourceSetList__nzp_CSI_RS_SSB__csi_SSB_ResourceSetList {
					A_SEQUENCE_OF(RRC_CSI_SSB_ResourceSetId_t) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *csi_SSB_ResourceSetList;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *nzp_CSI_RS_SSB;
			struct RRC_CSI_ResourceConfig__csi_RS_ResourceSetList__csi_IM_ResourceSetList {
				A_SEQUENCE_OF(RRC_CSI_IM_ResourceSetId_t) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *csi_IM_ResourceSetList;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} csi_RS_ResourceSetList;
	RRC_BWP_Id_t	 bwp_Id;
	long	 resourceType;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_CSI_ResourceConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_resourceType_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_CSI_ResourceConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_CSI_ResourceConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_CSI_ResourceConfig_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_CSI_ResourceConfig_H_ */
#include <asn_internal.h>
