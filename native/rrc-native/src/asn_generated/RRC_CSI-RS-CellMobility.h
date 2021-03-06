/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_CSI_RS_CellMobility_H_
#define	_RRC_CSI_RS_CellMobility_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_PhysCellId.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_CSI_RS_CellMobility__csi_rs_MeasurementBW__nrofPRBs {
	RRC_CSI_RS_CellMobility__csi_rs_MeasurementBW__nrofPRBs_size24	= 0,
	RRC_CSI_RS_CellMobility__csi_rs_MeasurementBW__nrofPRBs_size48	= 1,
	RRC_CSI_RS_CellMobility__csi_rs_MeasurementBW__nrofPRBs_size96	= 2,
	RRC_CSI_RS_CellMobility__csi_rs_MeasurementBW__nrofPRBs_size192	= 3,
	RRC_CSI_RS_CellMobility__csi_rs_MeasurementBW__nrofPRBs_size264	= 4
} e_RRC_CSI_RS_CellMobility__csi_rs_MeasurementBW__nrofPRBs;
typedef enum RRC_CSI_RS_CellMobility__density {
	RRC_CSI_RS_CellMobility__density_d1	= 0,
	RRC_CSI_RS_CellMobility__density_d3	= 1
} e_RRC_CSI_RS_CellMobility__density;

/* Forward declarations */
struct RRC_CSI_RS_Resource_Mobility;

/* RRC_CSI-RS-CellMobility */
typedef struct RRC_CSI_RS_CellMobility {
	RRC_PhysCellId_t	 cellId;
	struct RRC_CSI_RS_CellMobility__csi_rs_MeasurementBW {
		long	 nrofPRBs;
		long	 startPRB;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} csi_rs_MeasurementBW;
	long	*density;	/* OPTIONAL */
	struct RRC_CSI_RS_CellMobility__csi_rs_ResourceList_Mobility {
		A_SEQUENCE_OF(struct RRC_CSI_RS_Resource_Mobility) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} csi_rs_ResourceList_Mobility;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_CSI_RS_CellMobility_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_nrofPRBs_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_density_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_CSI_RS_CellMobility;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_CSI_RS_CellMobility_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_CSI_RS_CellMobility_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_CSI_RS_CellMobility_H_ */
#include <asn_internal.h>
