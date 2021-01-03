/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_PUSCH-ServingCellConfig.h"

#include "RRC_SetupRelease.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_RRC_maxMIMO_Layers_constraint_10(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 4)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_RRC_rateMatching_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_xOverhead_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_maxMIMO_Layers_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_RRC_rateMatching_value2enum_3[] = {
	{ 0,	15,	"limitedBufferRM" }
};
static const unsigned int asn_MAP_RRC_rateMatching_enum2value_3[] = {
	0	/* limitedBufferRM(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_rateMatching_specs_3 = {
	asn_MAP_RRC_rateMatching_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_rateMatching_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_rateMatching_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_rateMatching_3 = {
	"rateMatching",
	"rateMatching",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_rateMatching_tags_3,
	sizeof(asn_DEF_RRC_rateMatching_tags_3)
		/sizeof(asn_DEF_RRC_rateMatching_tags_3[0]) - 1, /* 1 */
	asn_DEF_RRC_rateMatching_tags_3,	/* Same as above */
	sizeof(asn_DEF_RRC_rateMatching_tags_3)
		/sizeof(asn_DEF_RRC_rateMatching_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_rateMatching_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_rateMatching_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_xOverhead_value2enum_5[] = {
	{ 0,	4,	"xoh6" },
	{ 1,	5,	"xoh12" },
	{ 2,	5,	"xoh18" }
};
static const unsigned int asn_MAP_RRC_xOverhead_enum2value_5[] = {
	1,	/* xoh12(1) */
	2,	/* xoh18(2) */
	0	/* xoh6(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_xOverhead_specs_5 = {
	asn_MAP_RRC_xOverhead_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_xOverhead_enum2value_5,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_xOverhead_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_xOverhead_5 = {
	"xOverhead",
	"xOverhead",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_xOverhead_tags_5,
	sizeof(asn_DEF_RRC_xOverhead_tags_5)
		/sizeof(asn_DEF_RRC_xOverhead_tags_5[0]) - 1, /* 1 */
	asn_DEF_RRC_xOverhead_tags_5,	/* Same as above */
	sizeof(asn_DEF_RRC_xOverhead_tags_5)
		/sizeof(asn_DEF_RRC_xOverhead_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_xOverhead_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_xOverhead_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRC_ext1_10[] = {
	{ ATF_POINTER, 2, offsetof(struct RRC_PUSCH_ServingCellConfig__ext1, maxMIMO_Layers),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_RRC_maxMIMO_Layers_constr_11,  memb_RRC_maxMIMO_Layers_constraint_10 },
		0, 0, /* No default value */
		"maxMIMO-Layers"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_PUSCH_ServingCellConfig__ext1, processingType2Enabled),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"processingType2Enabled"
		},
};
static const int asn_MAP_RRC_ext1_oms_10[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_RRC_ext1_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_ext1_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxMIMO-Layers */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* processingType2Enabled */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRC_ext1_specs_10 = {
	sizeof(struct RRC_PUSCH_ServingCellConfig__ext1),
	offsetof(struct RRC_PUSCH_ServingCellConfig__ext1, _asn_ctx),
	asn_MAP_RRC_ext1_tag2el_10,
	2,	/* Count of tags in the map */
	asn_MAP_RRC_ext1_oms_10,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_ext1_10 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_ext1_tags_10,
	sizeof(asn_DEF_RRC_ext1_tags_10)
		/sizeof(asn_DEF_RRC_ext1_tags_10[0]) - 1, /* 1 */
	asn_DEF_RRC_ext1_tags_10,	/* Same as above */
	sizeof(asn_DEF_RRC_ext1_tags_10)
		/sizeof(asn_DEF_RRC_ext1_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_ext1_10,
	2,	/* Elements count */
	&asn_SPC_RRC_ext1_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRC_PUSCH_ServingCellConfig_1[] = {
	{ ATF_POINTER, 4, offsetof(struct RRC_PUSCH_ServingCellConfig, codeBlockGroupTransmission),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RRC_SetupRelease_PUSCH_CodeBlockGroupTransmission,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"codeBlockGroupTransmission"
		},
	{ ATF_POINTER, 3, offsetof(struct RRC_PUSCH_ServingCellConfig, rateMatching),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_rateMatching_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rateMatching"
		},
	{ ATF_POINTER, 2, offsetof(struct RRC_PUSCH_ServingCellConfig, xOverhead),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_xOverhead_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"xOverhead"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_PUSCH_ServingCellConfig, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_RRC_ext1_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_RRC_PUSCH_ServingCellConfig_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_RRC_PUSCH_ServingCellConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_PUSCH_ServingCellConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* codeBlockGroupTransmission */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rateMatching */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* xOverhead */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_PUSCH_ServingCellConfig_specs_1 = {
	sizeof(struct RRC_PUSCH_ServingCellConfig),
	offsetof(struct RRC_PUSCH_ServingCellConfig, _asn_ctx),
	asn_MAP_RRC_PUSCH_ServingCellConfig_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_RRC_PUSCH_ServingCellConfig_oms_1,	/* Optional members */
	3, 1,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_PUSCH_ServingCellConfig = {
	"PUSCH-ServingCellConfig",
	"PUSCH-ServingCellConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_PUSCH_ServingCellConfig_tags_1,
	sizeof(asn_DEF_RRC_PUSCH_ServingCellConfig_tags_1)
		/sizeof(asn_DEF_RRC_PUSCH_ServingCellConfig_tags_1[0]), /* 1 */
	asn_DEF_RRC_PUSCH_ServingCellConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_PUSCH_ServingCellConfig_tags_1)
		/sizeof(asn_DEF_RRC_PUSCH_ServingCellConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_PUSCH_ServingCellConfig_1,
	4,	/* Elements count */
	&asn_SPC_RRC_PUSCH_ServingCellConfig_specs_1	/* Additional specs */
};

