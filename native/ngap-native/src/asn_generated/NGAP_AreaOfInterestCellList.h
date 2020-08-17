/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn/NGAP-IEs.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D ngap -pdu=all`
 */

#ifndef	_NGAP_AreaOfInterestCellList_H_
#define	_NGAP_AreaOfInterestCellList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_AreaOfInterestCellItem;

/* NGAP_AreaOfInterestCellList */
typedef struct NGAP_AreaOfInterestCellList {
	A_SEQUENCE_OF(struct NGAP_AreaOfInterestCellItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_AreaOfInterestCellList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_AreaOfInterestCellList;
extern asn_SET_OF_specifics_t asn_SPC_NGAP_AreaOfInterestCellList_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_AreaOfInterestCellList_1[1];
extern asn_per_constraints_t asn_PER_type_NGAP_AreaOfInterestCellList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_AreaOfInterestCellList_H_ */
#include <asn_internal.h>
