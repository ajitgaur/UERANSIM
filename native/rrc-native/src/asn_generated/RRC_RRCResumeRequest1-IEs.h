/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_RRCResumeRequest1_IEs_H_
#define	_RRC_RRCResumeRequest1_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_I-RNTI-Value.h"
#include <BIT_STRING.h>
#include "RRC_ResumeCause.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRC_RRCResumeRequest1-IEs */
typedef struct RRC_RRCResumeRequest1_IEs {
	RRC_I_RNTI_Value_t	 resumeIdentity;
	BIT_STRING_t	 resumeMAC_I;
	RRC_ResumeCause_t	 resumeCause;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_RRCResumeRequest1_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_RRCResumeRequest1_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_RRCResumeRequest1_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_RRCResumeRequest1_IEs_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_RRCResumeRequest1_IEs_H_ */
#include <asn_internal.h>
