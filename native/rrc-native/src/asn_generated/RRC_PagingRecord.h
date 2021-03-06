/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_PagingRecord_H_
#define	_RRC_PagingRecord_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_PagingUE-Identity.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_PagingRecord__accessType {
	RRC_PagingRecord__accessType_non3GPP	= 0
} e_RRC_PagingRecord__accessType;

/* RRC_PagingRecord */
typedef struct RRC_PagingRecord {
	RRC_PagingUE_Identity_t	 ue_Identity;
	long	*accessType;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_PagingRecord_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_accessType_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_PagingRecord;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_PagingRecord_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_PagingRecord_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_PagingRecord_H_ */
#include <asn_internal.h>
