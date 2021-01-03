/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "ASN_RRC_BWP-UplinkCommon.h"

#include "ASN_RRC_SetupRelease.h"
asn_TYPE_member_t asn_MBR_ASN_RRC_BWP_UplinkCommon_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_BWP_UplinkCommon, genericParameters),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_BWP,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"genericParameters"
		},
	{ ATF_POINTER, 3, offsetof(struct ASN_RRC_BWP_UplinkCommon, rach_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ASN_RRC_SetupRelease_RACH_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rach-ConfigCommon"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_RRC_BWP_UplinkCommon, pusch_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ASN_RRC_SetupRelease_PUSCH_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-ConfigCommon"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_RRC_BWP_UplinkCommon, pucch_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ASN_RRC_SetupRelease_PUCCH_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-ConfigCommon"
		},
};
static const int asn_MAP_ASN_RRC_BWP_UplinkCommon_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_ASN_RRC_BWP_UplinkCommon_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_RRC_BWP_UplinkCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* genericParameters */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rach-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pusch-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* pucch-ConfigCommon */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_BWP_UplinkCommon_specs_1 = {
	sizeof(struct ASN_RRC_BWP_UplinkCommon),
	offsetof(struct ASN_RRC_BWP_UplinkCommon, _asn_ctx),
	asn_MAP_ASN_RRC_BWP_UplinkCommon_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_ASN_RRC_BWP_UplinkCommon_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_BWP_UplinkCommon = {
	"BWP-UplinkCommon",
	"BWP-UplinkCommon",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_RRC_BWP_UplinkCommon_tags_1,
	sizeof(asn_DEF_ASN_RRC_BWP_UplinkCommon_tags_1)
		/sizeof(asn_DEF_ASN_RRC_BWP_UplinkCommon_tags_1[0]), /* 1 */
	asn_DEF_ASN_RRC_BWP_UplinkCommon_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_BWP_UplinkCommon_tags_1)
		/sizeof(asn_DEF_ASN_RRC_BWP_UplinkCommon_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_RRC_BWP_UplinkCommon_1,
	4,	/* Elements count */
	&asn_SPC_ASN_RRC_BWP_UplinkCommon_specs_1	/* Additional specs */
};

