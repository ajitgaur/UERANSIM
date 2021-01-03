/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_BSR-Config.h"

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
static asn_per_constraints_t asn_PER_type_RRC_periodicBSR_Timer_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_retxBSR_Timer_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_logicalChannelSR_DelayTimer_constr_36 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_RRC_periodicBSR_Timer_value2enum_2[] = {
	{ 0,	3,	"sf1" },
	{ 1,	3,	"sf5" },
	{ 2,	4,	"sf10" },
	{ 3,	4,	"sf16" },
	{ 4,	4,	"sf20" },
	{ 5,	4,	"sf32" },
	{ 6,	4,	"sf40" },
	{ 7,	4,	"sf64" },
	{ 8,	4,	"sf80" },
	{ 9,	5,	"sf128" },
	{ 10,	5,	"sf160" },
	{ 11,	5,	"sf320" },
	{ 12,	5,	"sf640" },
	{ 13,	6,	"sf1280" },
	{ 14,	6,	"sf2560" },
	{ 15,	8,	"infinity" }
};
static const unsigned int asn_MAP_RRC_periodicBSR_Timer_enum2value_2[] = {
	15,	/* infinity(15) */
	0,	/* sf1(0) */
	2,	/* sf10(2) */
	9,	/* sf128(9) */
	13,	/* sf1280(13) */
	3,	/* sf16(3) */
	10,	/* sf160(10) */
	4,	/* sf20(4) */
	14,	/* sf2560(14) */
	5,	/* sf32(5) */
	11,	/* sf320(11) */
	6,	/* sf40(6) */
	1,	/* sf5(1) */
	7,	/* sf64(7) */
	12,	/* sf640(12) */
	8	/* sf80(8) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_periodicBSR_Timer_specs_2 = {
	asn_MAP_RRC_periodicBSR_Timer_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_periodicBSR_Timer_enum2value_2,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_periodicBSR_Timer_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_periodicBSR_Timer_2 = {
	"periodicBSR-Timer",
	"periodicBSR-Timer",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_periodicBSR_Timer_tags_2,
	sizeof(asn_DEF_RRC_periodicBSR_Timer_tags_2)
		/sizeof(asn_DEF_RRC_periodicBSR_Timer_tags_2[0]) - 1, /* 1 */
	asn_DEF_RRC_periodicBSR_Timer_tags_2,	/* Same as above */
	sizeof(asn_DEF_RRC_periodicBSR_Timer_tags_2)
		/sizeof(asn_DEF_RRC_periodicBSR_Timer_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_periodicBSR_Timer_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_periodicBSR_Timer_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_retxBSR_Timer_value2enum_19[] = {
	{ 0,	4,	"sf10" },
	{ 1,	4,	"sf20" },
	{ 2,	4,	"sf40" },
	{ 3,	4,	"sf80" },
	{ 4,	5,	"sf160" },
	{ 5,	5,	"sf320" },
	{ 6,	5,	"sf640" },
	{ 7,	6,	"sf1280" },
	{ 8,	6,	"sf2560" },
	{ 9,	6,	"sf5120" },
	{ 10,	7,	"sf10240" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_RRC_retxBSR_Timer_enum2value_19[] = {
	0,	/* sf10(0) */
	10,	/* sf10240(10) */
	7,	/* sf1280(7) */
	4,	/* sf160(4) */
	1,	/* sf20(1) */
	8,	/* sf2560(8) */
	5,	/* sf320(5) */
	2,	/* sf40(2) */
	9,	/* sf5120(9) */
	6,	/* sf640(6) */
	3,	/* sf80(3) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11	/* spare5(11) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_retxBSR_Timer_specs_19 = {
	asn_MAP_RRC_retxBSR_Timer_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_retxBSR_Timer_enum2value_19,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_retxBSR_Timer_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_retxBSR_Timer_19 = {
	"retxBSR-Timer",
	"retxBSR-Timer",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_retxBSR_Timer_tags_19,
	sizeof(asn_DEF_RRC_retxBSR_Timer_tags_19)
		/sizeof(asn_DEF_RRC_retxBSR_Timer_tags_19[0]) - 1, /* 1 */
	asn_DEF_RRC_retxBSR_Timer_tags_19,	/* Same as above */
	sizeof(asn_DEF_RRC_retxBSR_Timer_tags_19)
		/sizeof(asn_DEF_RRC_retxBSR_Timer_tags_19[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_retxBSR_Timer_constr_19, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_retxBSR_Timer_specs_19	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_logicalChannelSR_DelayTimer_value2enum_36[] = {
	{ 0,	4,	"sf20" },
	{ 1,	4,	"sf40" },
	{ 2,	4,	"sf64" },
	{ 3,	5,	"sf128" },
	{ 4,	5,	"sf512" },
	{ 5,	6,	"sf1024" },
	{ 6,	6,	"sf2560" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_RRC_logicalChannelSR_DelayTimer_enum2value_36[] = {
	5,	/* sf1024(5) */
	3,	/* sf128(3) */
	0,	/* sf20(0) */
	6,	/* sf2560(6) */
	1,	/* sf40(1) */
	4,	/* sf512(4) */
	2,	/* sf64(2) */
	7	/* spare1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_logicalChannelSR_DelayTimer_specs_36 = {
	asn_MAP_RRC_logicalChannelSR_DelayTimer_value2enum_36,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_logicalChannelSR_DelayTimer_enum2value_36,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_logicalChannelSR_DelayTimer_tags_36[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_logicalChannelSR_DelayTimer_36 = {
	"logicalChannelSR-DelayTimer",
	"logicalChannelSR-DelayTimer",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_logicalChannelSR_DelayTimer_tags_36,
	sizeof(asn_DEF_RRC_logicalChannelSR_DelayTimer_tags_36)
		/sizeof(asn_DEF_RRC_logicalChannelSR_DelayTimer_tags_36[0]) - 1, /* 1 */
	asn_DEF_RRC_logicalChannelSR_DelayTimer_tags_36,	/* Same as above */
	sizeof(asn_DEF_RRC_logicalChannelSR_DelayTimer_tags_36)
		/sizeof(asn_DEF_RRC_logicalChannelSR_DelayTimer_tags_36[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_logicalChannelSR_DelayTimer_constr_36, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_logicalChannelSR_DelayTimer_specs_36	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRC_BSR_Config_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_BSR_Config, periodicBSR_Timer),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_periodicBSR_Timer_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodicBSR-Timer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_BSR_Config, retxBSR_Timer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_retxBSR_Timer_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"retxBSR-Timer"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_BSR_Config, logicalChannelSR_DelayTimer),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_logicalChannelSR_DelayTimer_36,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logicalChannelSR-DelayTimer"
		},
};
static const int asn_MAP_RRC_BSR_Config_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_RRC_BSR_Config_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_BSR_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* periodicBSR-Timer */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* retxBSR-Timer */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* logicalChannelSR-DelayTimer */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_BSR_Config_specs_1 = {
	sizeof(struct RRC_BSR_Config),
	offsetof(struct RRC_BSR_Config, _asn_ctx),
	asn_MAP_RRC_BSR_Config_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RRC_BSR_Config_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_BSR_Config = {
	"BSR-Config",
	"BSR-Config",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_BSR_Config_tags_1,
	sizeof(asn_DEF_RRC_BSR_Config_tags_1)
		/sizeof(asn_DEF_RRC_BSR_Config_tags_1[0]), /* 1 */
	asn_DEF_RRC_BSR_Config_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_BSR_Config_tags_1)
		/sizeof(asn_DEF_RRC_BSR_Config_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_BSR_Config_1,
	3,	/* Elements count */
	&asn_SPC_RRC_BSR_Config_specs_1	/* Additional specs */
};

