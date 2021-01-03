/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_OverheatingAssistanceConfig_H_
#define	_RRC_OverheatingAssistanceConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_OverheatingAssistanceConfig__overheatingIndicationProhibitTimer {
	RRC_OverheatingAssistanceConfig__overheatingIndicationProhibitTimer_s0	= 0,
	RRC_OverheatingAssistanceConfig__overheatingIndicationProhibitTimer_s0dot5	= 1,
	RRC_OverheatingAssistanceConfig__overheatingIndicationProhibitTimer_s1	= 2,
	RRC_OverheatingAssistanceConfig__overheatingIndicationProhibitTimer_s2	= 3,
	RRC_OverheatingAssistanceConfig__overheatingIndicationProhibitTimer_s5	= 4,
	RRC_OverheatingAssistanceConfig__overheatingIndicationProhibitTimer_s10	= 5,
	RRC_OverheatingAssistanceConfig__overheatingIndicationProhibitTimer_s20	= 6,
	RRC_OverheatingAssistanceConfig__overheatingIndicationProhibitTimer_s30	= 7,
	RRC_OverheatingAssistanceConfig__overheatingIndicationProhibitTimer_s60	= 8,
	RRC_OverheatingAssistanceConfig__overheatingIndicationProhibitTimer_s90	= 9,
	RRC_OverheatingAssistanceConfig__overheatingIndicationProhibitTimer_s120	= 10,
	RRC_OverheatingAssistanceConfig__overheatingIndicationProhibitTimer_s300	= 11,
	RRC_OverheatingAssistanceConfig__overheatingIndicationProhibitTimer_s600	= 12,
	RRC_OverheatingAssistanceConfig__overheatingIndicationProhibitTimer_spare3	= 13,
	RRC_OverheatingAssistanceConfig__overheatingIndicationProhibitTimer_spare2	= 14,
	RRC_OverheatingAssistanceConfig__overheatingIndicationProhibitTimer_spare1	= 15
} e_RRC_OverheatingAssistanceConfig__overheatingIndicationProhibitTimer;

/* RRC_OverheatingAssistanceConfig */
typedef struct RRC_OverheatingAssistanceConfig {
	long	 overheatingIndicationProhibitTimer;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_OverheatingAssistanceConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_overheatingIndicationProhibitTimer_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_OverheatingAssistanceConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_OverheatingAssistanceConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_OverheatingAssistanceConfig_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_OverheatingAssistanceConfig_H_ */
#include <asn_internal.h>
