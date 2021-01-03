/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_CA-ParametersEUTRA-v1560.h"

static int
memb_RRC_totalWeightedLayers_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 128)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_RRC_totalWeightedLayers_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  2,  128 }	/* (2..128) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_RRC_CA_ParametersEUTRA_v1560_1[] = {
	{ ATF_POINTER, 1, offsetof(struct RRC_CA_ParametersEUTRA_v1560, totalWeightedLayers),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_RRC_totalWeightedLayers_constr_2,  memb_RRC_totalWeightedLayers_constraint_1 },
		0, 0, /* No default value */
		"totalWeightedLayers"
		},
};
static const int asn_MAP_RRC_CA_ParametersEUTRA_v1560_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_RRC_CA_ParametersEUTRA_v1560_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_CA_ParametersEUTRA_v1560_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* totalWeightedLayers */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_CA_ParametersEUTRA_v1560_specs_1 = {
	sizeof(struct RRC_CA_ParametersEUTRA_v1560),
	offsetof(struct RRC_CA_ParametersEUTRA_v1560, _asn_ctx),
	asn_MAP_RRC_CA_ParametersEUTRA_v1560_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_RRC_CA_ParametersEUTRA_v1560_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_CA_ParametersEUTRA_v1560 = {
	"CA-ParametersEUTRA-v1560",
	"CA-ParametersEUTRA-v1560",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_CA_ParametersEUTRA_v1560_tags_1,
	sizeof(asn_DEF_RRC_CA_ParametersEUTRA_v1560_tags_1)
		/sizeof(asn_DEF_RRC_CA_ParametersEUTRA_v1560_tags_1[0]), /* 1 */
	asn_DEF_RRC_CA_ParametersEUTRA_v1560_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_CA_ParametersEUTRA_v1560_tags_1)
		/sizeof(asn_DEF_RRC_CA_ParametersEUTRA_v1560_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_CA_ParametersEUTRA_v1560_1,
	1,	/* Elements count */
	&asn_SPC_RRC_CA_ParametersEUTRA_v1560_specs_1	/* Additional specs */
};

