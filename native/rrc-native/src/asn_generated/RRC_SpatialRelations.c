/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_SpatialRelations.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_RRC_maxNumberConfiguredSpatialRelations_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_maxNumberActiveSpatialRelations_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_additionalActiveSpatialRelationPUCCH_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_maxNumberDL_RS_QCL_TypeD_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_RRC_maxNumberConfiguredSpatialRelations_value2enum_2[] = {
	{ 0,	2,	"n4" },
	{ 1,	2,	"n8" },
	{ 2,	3,	"n16" },
	{ 3,	3,	"n32" },
	{ 4,	3,	"n64" },
	{ 5,	3,	"n96" }
};
static const unsigned int asn_MAP_RRC_maxNumberConfiguredSpatialRelations_enum2value_2[] = {
	2,	/* n16(2) */
	3,	/* n32(3) */
	0,	/* n4(0) */
	4,	/* n64(4) */
	1,	/* n8(1) */
	5	/* n96(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_maxNumberConfiguredSpatialRelations_specs_2 = {
	asn_MAP_RRC_maxNumberConfiguredSpatialRelations_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_maxNumberConfiguredSpatialRelations_enum2value_2,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_maxNumberConfiguredSpatialRelations_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_maxNumberConfiguredSpatialRelations_2 = {
	"maxNumberConfiguredSpatialRelations",
	"maxNumberConfiguredSpatialRelations",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_maxNumberConfiguredSpatialRelations_tags_2,
	sizeof(asn_DEF_RRC_maxNumberConfiguredSpatialRelations_tags_2)
		/sizeof(asn_DEF_RRC_maxNumberConfiguredSpatialRelations_tags_2[0]) - 1, /* 1 */
	asn_DEF_RRC_maxNumberConfiguredSpatialRelations_tags_2,	/* Same as above */
	sizeof(asn_DEF_RRC_maxNumberConfiguredSpatialRelations_tags_2)
		/sizeof(asn_DEF_RRC_maxNumberConfiguredSpatialRelations_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_maxNumberConfiguredSpatialRelations_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_maxNumberConfiguredSpatialRelations_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_maxNumberActiveSpatialRelations_value2enum_9[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n14" }
};
static const unsigned int asn_MAP_RRC_maxNumberActiveSpatialRelations_enum2value_9[] = {
	0,	/* n1(0) */
	4,	/* n14(4) */
	1,	/* n2(1) */
	2,	/* n4(2) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_maxNumberActiveSpatialRelations_specs_9 = {
	asn_MAP_RRC_maxNumberActiveSpatialRelations_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_maxNumberActiveSpatialRelations_enum2value_9,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_maxNumberActiveSpatialRelations_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_maxNumberActiveSpatialRelations_9 = {
	"maxNumberActiveSpatialRelations",
	"maxNumberActiveSpatialRelations",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_maxNumberActiveSpatialRelations_tags_9,
	sizeof(asn_DEF_RRC_maxNumberActiveSpatialRelations_tags_9)
		/sizeof(asn_DEF_RRC_maxNumberActiveSpatialRelations_tags_9[0]) - 1, /* 1 */
	asn_DEF_RRC_maxNumberActiveSpatialRelations_tags_9,	/* Same as above */
	sizeof(asn_DEF_RRC_maxNumberActiveSpatialRelations_tags_9)
		/sizeof(asn_DEF_RRC_maxNumberActiveSpatialRelations_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_maxNumberActiveSpatialRelations_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_maxNumberActiveSpatialRelations_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_additionalActiveSpatialRelationPUCCH_value2enum_15[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_RRC_additionalActiveSpatialRelationPUCCH_enum2value_15[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_additionalActiveSpatialRelationPUCCH_specs_15 = {
	asn_MAP_RRC_additionalActiveSpatialRelationPUCCH_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_additionalActiveSpatialRelationPUCCH_enum2value_15,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_additionalActiveSpatialRelationPUCCH_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_additionalActiveSpatialRelationPUCCH_15 = {
	"additionalActiveSpatialRelationPUCCH",
	"additionalActiveSpatialRelationPUCCH",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_additionalActiveSpatialRelationPUCCH_tags_15,
	sizeof(asn_DEF_RRC_additionalActiveSpatialRelationPUCCH_tags_15)
		/sizeof(asn_DEF_RRC_additionalActiveSpatialRelationPUCCH_tags_15[0]) - 1, /* 1 */
	asn_DEF_RRC_additionalActiveSpatialRelationPUCCH_tags_15,	/* Same as above */
	sizeof(asn_DEF_RRC_additionalActiveSpatialRelationPUCCH_tags_15)
		/sizeof(asn_DEF_RRC_additionalActiveSpatialRelationPUCCH_tags_15[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_additionalActiveSpatialRelationPUCCH_constr_15, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_additionalActiveSpatialRelationPUCCH_specs_15	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_maxNumberDL_RS_QCL_TypeD_value2enum_17[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n14" }
};
static const unsigned int asn_MAP_RRC_maxNumberDL_RS_QCL_TypeD_enum2value_17[] = {
	0,	/* n1(0) */
	4,	/* n14(4) */
	1,	/* n2(1) */
	2,	/* n4(2) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_maxNumberDL_RS_QCL_TypeD_specs_17 = {
	asn_MAP_RRC_maxNumberDL_RS_QCL_TypeD_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_maxNumberDL_RS_QCL_TypeD_enum2value_17,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_maxNumberDL_RS_QCL_TypeD_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_maxNumberDL_RS_QCL_TypeD_17 = {
	"maxNumberDL-RS-QCL-TypeD",
	"maxNumberDL-RS-QCL-TypeD",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_maxNumberDL_RS_QCL_TypeD_tags_17,
	sizeof(asn_DEF_RRC_maxNumberDL_RS_QCL_TypeD_tags_17)
		/sizeof(asn_DEF_RRC_maxNumberDL_RS_QCL_TypeD_tags_17[0]) - 1, /* 1 */
	asn_DEF_RRC_maxNumberDL_RS_QCL_TypeD_tags_17,	/* Same as above */
	sizeof(asn_DEF_RRC_maxNumberDL_RS_QCL_TypeD_tags_17)
		/sizeof(asn_DEF_RRC_maxNumberDL_RS_QCL_TypeD_tags_17[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_maxNumberDL_RS_QCL_TypeD_constr_17, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_maxNumberDL_RS_QCL_TypeD_specs_17	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRC_SpatialRelations_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_SpatialRelations, maxNumberConfiguredSpatialRelations),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_maxNumberConfiguredSpatialRelations_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumberConfiguredSpatialRelations"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_SpatialRelations, maxNumberActiveSpatialRelations),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_maxNumberActiveSpatialRelations_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumberActiveSpatialRelations"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_SpatialRelations, additionalActiveSpatialRelationPUCCH),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_additionalActiveSpatialRelationPUCCH_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalActiveSpatialRelationPUCCH"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_SpatialRelations, maxNumberDL_RS_QCL_TypeD),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_maxNumberDL_RS_QCL_TypeD_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumberDL-RS-QCL-TypeD"
		},
};
static const int asn_MAP_RRC_SpatialRelations_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_RRC_SpatialRelations_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_SpatialRelations_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxNumberConfiguredSpatialRelations */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxNumberActiveSpatialRelations */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* additionalActiveSpatialRelationPUCCH */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* maxNumberDL-RS-QCL-TypeD */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_SpatialRelations_specs_1 = {
	sizeof(struct RRC_SpatialRelations),
	offsetof(struct RRC_SpatialRelations, _asn_ctx),
	asn_MAP_RRC_SpatialRelations_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_RRC_SpatialRelations_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_SpatialRelations = {
	"SpatialRelations",
	"SpatialRelations",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_SpatialRelations_tags_1,
	sizeof(asn_DEF_RRC_SpatialRelations_tags_1)
		/sizeof(asn_DEF_RRC_SpatialRelations_tags_1[0]), /* 1 */
	asn_DEF_RRC_SpatialRelations_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_SpatialRelations_tags_1)
		/sizeof(asn_DEF_RRC_SpatialRelations_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_SpatialRelations_1,
	4,	/* Elements count */
	&asn_SPC_RRC_SpatialRelations_specs_1	/* Additional specs */
};

