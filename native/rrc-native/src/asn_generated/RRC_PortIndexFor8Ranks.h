/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_PortIndexFor8Ranks_H_
#define	_RRC_PortIndexFor8Ranks_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "RRC_PortIndex8.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>
#include "RRC_PortIndex4.h"
#include "RRC_PortIndex2.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_PortIndexFor8Ranks_PR {
	RRC_PortIndexFor8Ranks_PR_NOTHING,	/* No components present */
	RRC_PortIndexFor8Ranks_PR_portIndex8,
	RRC_PortIndexFor8Ranks_PR_portIndex4,
	RRC_PortIndexFor8Ranks_PR_portIndex2,
	RRC_PortIndexFor8Ranks_PR_portIndex1
} RRC_PortIndexFor8Ranks_PR;

/* RRC_PortIndexFor8Ranks */
typedef struct RRC_PortIndexFor8Ranks {
	RRC_PortIndexFor8Ranks_PR present;
	union RRC_PortIndexFor8Ranks_u {
		struct RRC_PortIndexFor8Ranks__portIndex8 {
			RRC_PortIndex8_t	*rank1_8;	/* OPTIONAL */
			struct RRC_PortIndexFor8Ranks__portIndex8__rank2_8 {
				A_SEQUENCE_OF(RRC_PortIndex8_t) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *rank2_8;
			struct RRC_PortIndexFor8Ranks__portIndex8__rank3_8 {
				A_SEQUENCE_OF(RRC_PortIndex8_t) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *rank3_8;
			struct RRC_PortIndexFor8Ranks__portIndex8__rank4_8 {
				A_SEQUENCE_OF(RRC_PortIndex8_t) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *rank4_8;
			struct RRC_PortIndexFor8Ranks__portIndex8__rank5_8 {
				A_SEQUENCE_OF(RRC_PortIndex8_t) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *rank5_8;
			struct RRC_PortIndexFor8Ranks__portIndex8__rank6_8 {
				A_SEQUENCE_OF(RRC_PortIndex8_t) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *rank6_8;
			struct RRC_PortIndexFor8Ranks__portIndex8__rank7_8 {
				A_SEQUENCE_OF(RRC_PortIndex8_t) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *rank7_8;
			struct RRC_PortIndexFor8Ranks__portIndex8__rank8_8 {
				A_SEQUENCE_OF(RRC_PortIndex8_t) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *rank8_8;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *portIndex8;
		struct RRC_PortIndexFor8Ranks__portIndex4 {
			RRC_PortIndex4_t	*rank1_4;	/* OPTIONAL */
			struct RRC_PortIndexFor8Ranks__portIndex4__rank2_4 {
				A_SEQUENCE_OF(RRC_PortIndex4_t) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *rank2_4;
			struct RRC_PortIndexFor8Ranks__portIndex4__rank3_4 {
				A_SEQUENCE_OF(RRC_PortIndex4_t) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *rank3_4;
			struct RRC_PortIndexFor8Ranks__portIndex4__rank4_4 {
				A_SEQUENCE_OF(RRC_PortIndex4_t) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *rank4_4;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *portIndex4;
		struct RRC_PortIndexFor8Ranks__portIndex2 {
			RRC_PortIndex2_t	*rank1_2;	/* OPTIONAL */
			struct RRC_PortIndexFor8Ranks__portIndex2__rank2_2 {
				A_SEQUENCE_OF(RRC_PortIndex2_t) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *rank2_2;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *portIndex2;
		NULL_t	 portIndex1;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_PortIndexFor8Ranks_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_PortIndexFor8Ranks;
extern asn_CHOICE_specifics_t asn_SPC_RRC_PortIndexFor8Ranks_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_PortIndexFor8Ranks_1[4];
extern asn_per_constraints_t asn_PER_type_RRC_PortIndexFor8Ranks_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_PortIndexFor8Ranks_H_ */
#include <asn_internal.h>
