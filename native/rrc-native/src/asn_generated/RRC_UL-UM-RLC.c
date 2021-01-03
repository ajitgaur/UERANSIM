/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_UL-UM-RLC.h"

asn_TYPE_member_t asn_MBR_RRC_UL_UM_RLC_1[] = {
	{ ATF_POINTER, 1, offsetof(struct RRC_UL_UM_RLC, sn_FieldLength),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_SN_FieldLengthUM,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sn-FieldLength"
		},
};
static const int asn_MAP_RRC_UL_UM_RLC_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_RRC_UL_UM_RLC_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_UL_UM_RLC_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sn-FieldLength */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_UL_UM_RLC_specs_1 = {
	sizeof(struct RRC_UL_UM_RLC),
	offsetof(struct RRC_UL_UM_RLC, _asn_ctx),
	asn_MAP_RRC_UL_UM_RLC_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_RRC_UL_UM_RLC_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_UL_UM_RLC = {
	"UL-UM-RLC",
	"UL-UM-RLC",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_UL_UM_RLC_tags_1,
	sizeof(asn_DEF_RRC_UL_UM_RLC_tags_1)
		/sizeof(asn_DEF_RRC_UL_UM_RLC_tags_1[0]), /* 1 */
	asn_DEF_RRC_UL_UM_RLC_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_UL_UM_RLC_tags_1)
		/sizeof(asn_DEF_RRC_UL_UM_RLC_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_UL_UM_RLC_1,
	1,	/* Elements count */
	&asn_SPC_RRC_UL_UM_RLC_specs_1	/* Additional specs */
};

