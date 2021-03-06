/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_TDD_UL_DL_SlotConfig_H_
#define	_RRC_TDD_UL_DL_SlotConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_TDD-UL-DL-SlotIndex.h"
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_TDD_UL_DL_SlotConfig__symbols_PR {
	RRC_TDD_UL_DL_SlotConfig__symbols_PR_NOTHING,	/* No components present */
	RRC_TDD_UL_DL_SlotConfig__symbols_PR_allDownlink,
	RRC_TDD_UL_DL_SlotConfig__symbols_PR_allUplink,
	RRC_TDD_UL_DL_SlotConfig__symbols_PR_explicit
} RRC_TDD_UL_DL_SlotConfig__symbols_PR;

/* RRC_TDD-UL-DL-SlotConfig */
typedef struct RRC_TDD_UL_DL_SlotConfig {
	RRC_TDD_UL_DL_SlotIndex_t	 slotIndex;
	struct RRC_TDD_UL_DL_SlotConfig__symbols {
		RRC_TDD_UL_DL_SlotConfig__symbols_PR present;
		union RRC_TDD_UL_DL_SlotConfig__RRC_symbols_u {
			NULL_t	 allDownlink;
			NULL_t	 allUplink;
			struct RRC_TDD_UL_DL_SlotConfig__symbols__explicit {
				long	*nrofDownlinkSymbols;	/* OPTIONAL */
				long	*nrofUplinkSymbols;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *Explicit;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} symbols;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_TDD_UL_DL_SlotConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_TDD_UL_DL_SlotConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_TDD_UL_DL_SlotConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_TDD_UL_DL_SlotConfig_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_TDD_UL_DL_SlotConfig_H_ */
#include <asn_internal.h>
