/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_FR_Info_H_
#define	_RRC_FR_Info_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_ServCellIndex.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_FR_Info__fr_Type {
	RRC_FR_Info__fr_Type_fr1	= 0,
	RRC_FR_Info__fr_Type_fr2	= 1
} e_RRC_FR_Info__fr_Type;

/* RRC_FR-Info */
typedef struct RRC_FR_Info {
	RRC_ServCellIndex_t	 servCellIndex;
	long	 fr_Type;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_FR_Info_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_fr_Type_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_FR_Info;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_FR_Info_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_FR_Info_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_FR_Info_H_ */
#include <asn_internal.h>