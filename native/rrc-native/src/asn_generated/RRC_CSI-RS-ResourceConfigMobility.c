/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_CSI-RS-ResourceConfigMobility.h"

#include "RRC_CSI-RS-CellMobility.h"
static int
memb_RRC_csi_RS_CellList_Mobility_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 96)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_RRC_csi_RS_CellList_Mobility_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 7,  7,  1,  96 }	/* (SIZE(1..96)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_csi_RS_CellList_Mobility_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 7,  7,  1,  96 }	/* (SIZE(1..96)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_RRC_csi_RS_CellList_Mobility_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RRC_CSI_RS_CellMobility,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_RRC_csi_RS_CellList_Mobility_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_RRC_csi_RS_CellList_Mobility_specs_3 = {
	sizeof(struct RRC_CSI_RS_ResourceConfigMobility__csi_RS_CellList_Mobility),
	offsetof(struct RRC_CSI_RS_ResourceConfigMobility__csi_RS_CellList_Mobility, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_csi_RS_CellList_Mobility_3 = {
	"csi-RS-CellList-Mobility",
	"csi-RS-CellList-Mobility",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_RRC_csi_RS_CellList_Mobility_tags_3,
	sizeof(asn_DEF_RRC_csi_RS_CellList_Mobility_tags_3)
		/sizeof(asn_DEF_RRC_csi_RS_CellList_Mobility_tags_3[0]) - 1, /* 1 */
	asn_DEF_RRC_csi_RS_CellList_Mobility_tags_3,	/* Same as above */
	sizeof(asn_DEF_RRC_csi_RS_CellList_Mobility_tags_3)
		/sizeof(asn_DEF_RRC_csi_RS_CellList_Mobility_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_csi_RS_CellList_Mobility_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_RRC_csi_RS_CellList_Mobility_3,
	1,	/* Single element */
	&asn_SPC_RRC_csi_RS_CellList_Mobility_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRC_ext1_6[] = {
	{ ATF_POINTER, 1, offsetof(struct RRC_CSI_RS_ResourceConfigMobility__ext1, refServCellIndex_v1530),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_ServCellIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"refServCellIndex-v1530"
		},
};
static const int asn_MAP_RRC_ext1_oms_6[] = { 0 };
static const ber_tlv_tag_t asn_DEF_RRC_ext1_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_ext1_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* refServCellIndex-v1530 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRC_ext1_specs_6 = {
	sizeof(struct RRC_CSI_RS_ResourceConfigMobility__ext1),
	offsetof(struct RRC_CSI_RS_ResourceConfigMobility__ext1, _asn_ctx),
	asn_MAP_RRC_ext1_tag2el_6,
	1,	/* Count of tags in the map */
	asn_MAP_RRC_ext1_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_ext1_6 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_ext1_tags_6,
	sizeof(asn_DEF_RRC_ext1_tags_6)
		/sizeof(asn_DEF_RRC_ext1_tags_6[0]) - 1, /* 1 */
	asn_DEF_RRC_ext1_tags_6,	/* Same as above */
	sizeof(asn_DEF_RRC_ext1_tags_6)
		/sizeof(asn_DEF_RRC_ext1_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_ext1_6,
	1,	/* Elements count */
	&asn_SPC_RRC_ext1_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRC_CSI_RS_ResourceConfigMobility_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_CSI_RS_ResourceConfigMobility, subcarrierSpacing),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_SubcarrierSpacing,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subcarrierSpacing"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_CSI_RS_ResourceConfigMobility, csi_RS_CellList_Mobility),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_RRC_csi_RS_CellList_Mobility_3,
		0,
		{ 0, &asn_PER_memb_RRC_csi_RS_CellList_Mobility_constr_3,  memb_RRC_csi_RS_CellList_Mobility_constraint_1 },
		0, 0, /* No default value */
		"csi-RS-CellList-Mobility"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_CSI_RS_ResourceConfigMobility, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_RRC_ext1_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_RRC_CSI_RS_ResourceConfigMobility_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_RRC_CSI_RS_ResourceConfigMobility_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_CSI_RS_ResourceConfigMobility_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* subcarrierSpacing */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* csi-RS-CellList-Mobility */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_CSI_RS_ResourceConfigMobility_specs_1 = {
	sizeof(struct RRC_CSI_RS_ResourceConfigMobility),
	offsetof(struct RRC_CSI_RS_ResourceConfigMobility, _asn_ctx),
	asn_MAP_RRC_CSI_RS_ResourceConfigMobility_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RRC_CSI_RS_ResourceConfigMobility_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_CSI_RS_ResourceConfigMobility = {
	"CSI-RS-ResourceConfigMobility",
	"CSI-RS-ResourceConfigMobility",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_CSI_RS_ResourceConfigMobility_tags_1,
	sizeof(asn_DEF_RRC_CSI_RS_ResourceConfigMobility_tags_1)
		/sizeof(asn_DEF_RRC_CSI_RS_ResourceConfigMobility_tags_1[0]), /* 1 */
	asn_DEF_RRC_CSI_RS_ResourceConfigMobility_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_CSI_RS_ResourceConfigMobility_tags_1)
		/sizeof(asn_DEF_RRC_CSI_RS_ResourceConfigMobility_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_CSI_RS_ResourceConfigMobility_1,
	3,	/* Elements count */
	&asn_SPC_RRC_CSI_RS_ResourceConfigMobility_specs_1	/* Additional specs */
};

