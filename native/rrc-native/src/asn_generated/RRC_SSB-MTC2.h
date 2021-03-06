/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_SSB_MTC2_H_
#define	_RRC_SSB_MTC2_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "RRC_PhysCellId.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_SSB_MTC2__periodicity {
	RRC_SSB_MTC2__periodicity_sf5	= 0,
	RRC_SSB_MTC2__periodicity_sf10	= 1,
	RRC_SSB_MTC2__periodicity_sf20	= 2,
	RRC_SSB_MTC2__periodicity_sf40	= 3,
	RRC_SSB_MTC2__periodicity_sf80	= 4,
	RRC_SSB_MTC2__periodicity_spare3	= 5,
	RRC_SSB_MTC2__periodicity_spare2	= 6,
	RRC_SSB_MTC2__periodicity_spare1	= 7
} e_RRC_SSB_MTC2__periodicity;

/* RRC_SSB-MTC2 */
typedef struct RRC_SSB_MTC2 {
	struct RRC_SSB_MTC2__pci_List {
		A_SEQUENCE_OF(RRC_PhysCellId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pci_List;
	long	 periodicity;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_SSB_MTC2_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_periodicity_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_SSB_MTC2;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_SSB_MTC2_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_SSB_MTC2_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_SSB_MTC2_H_ */
#include <asn_internal.h>
