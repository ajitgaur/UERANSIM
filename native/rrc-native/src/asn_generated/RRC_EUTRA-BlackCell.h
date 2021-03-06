/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_EUTRA_BlackCell_H_
#define	_RRC_EUTRA_BlackCell_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_EUTRA-CellIndex.h"
#include "RRC_EUTRA-PhysCellIdRange.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRC_EUTRA-BlackCell */
typedef struct RRC_EUTRA_BlackCell {
	RRC_EUTRA_CellIndex_t	 cellIndexEUTRA;
	RRC_EUTRA_PhysCellIdRange_t	 physCellIdRange;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_EUTRA_BlackCell_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_EUTRA_BlackCell;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_EUTRA_BlackCell_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_EUTRA_BlackCell_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_EUTRA_BlackCell_H_ */
#include <asn_internal.h>
