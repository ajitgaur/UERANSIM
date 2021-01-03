/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_PUCCH-CSI-Resource.h"

asn_TYPE_member_t asn_MBR_RRC_PUCCH_CSI_Resource_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_PUCCH_CSI_Resource, uplinkBandwidthPartId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_BWP_Id,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkBandwidthPartId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_PUCCH_CSI_Resource, pucch_Resource),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_PUCCH_ResourceId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-Resource"
		},
};
static const ber_tlv_tag_t asn_DEF_RRC_PUCCH_CSI_Resource_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_PUCCH_CSI_Resource_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uplinkBandwidthPartId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pucch-Resource */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_PUCCH_CSI_Resource_specs_1 = {
	sizeof(struct RRC_PUCCH_CSI_Resource),
	offsetof(struct RRC_PUCCH_CSI_Resource, _asn_ctx),
	asn_MAP_RRC_PUCCH_CSI_Resource_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_PUCCH_CSI_Resource = {
	"PUCCH-CSI-Resource",
	"PUCCH-CSI-Resource",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_PUCCH_CSI_Resource_tags_1,
	sizeof(asn_DEF_RRC_PUCCH_CSI_Resource_tags_1)
		/sizeof(asn_DEF_RRC_PUCCH_CSI_Resource_tags_1[0]), /* 1 */
	asn_DEF_RRC_PUCCH_CSI_Resource_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_PUCCH_CSI_Resource_tags_1)
		/sizeof(asn_DEF_RRC_PUCCH_CSI_Resource_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_PUCCH_CSI_Resource_1,
	2,	/* Elements count */
	&asn_SPC_RRC_PUCCH_CSI_Resource_specs_1	/* Additional specs */
};

