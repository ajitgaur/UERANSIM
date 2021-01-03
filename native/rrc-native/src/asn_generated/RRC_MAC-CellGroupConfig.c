/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_MAC-CellGroupConfig.h"

#include "RRC_SetupRelease.h"
#include "RRC_SchedulingRequestConfig.h"
#include "RRC_BSR-Config.h"
#include "RRC_TAG-Config.h"
static asn_TYPE_member_t asn_MBR_RRC_ext1_9[] = {
	{ ATF_POINTER, 2, offsetof(struct RRC_MAC_CellGroupConfig__ext1, csi_Mask),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-Mask"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_MAC_CellGroupConfig__ext1, dataInactivityTimer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RRC_SetupRelease_DataInactivityTimer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dataInactivityTimer"
		},
};
static const int asn_MAP_RRC_ext1_oms_9[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_RRC_ext1_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_ext1_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csi-Mask */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dataInactivityTimer */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRC_ext1_specs_9 = {
	sizeof(struct RRC_MAC_CellGroupConfig__ext1),
	offsetof(struct RRC_MAC_CellGroupConfig__ext1, _asn_ctx),
	asn_MAP_RRC_ext1_tag2el_9,
	2,	/* Count of tags in the map */
	asn_MAP_RRC_ext1_oms_9,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_ext1_9 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_ext1_tags_9,
	sizeof(asn_DEF_RRC_ext1_tags_9)
		/sizeof(asn_DEF_RRC_ext1_tags_9[0]) - 1, /* 1 */
	asn_DEF_RRC_ext1_tags_9,	/* Same as above */
	sizeof(asn_DEF_RRC_ext1_tags_9)
		/sizeof(asn_DEF_RRC_ext1_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_ext1_9,
	2,	/* Elements count */
	&asn_SPC_RRC_ext1_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRC_MAC_CellGroupConfig_1[] = {
	{ ATF_POINTER, 5, offsetof(struct RRC_MAC_CellGroupConfig, drx_Config),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RRC_SetupRelease_DRX_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-Config"
		},
	{ ATF_POINTER, 4, offsetof(struct RRC_MAC_CellGroupConfig, schedulingRequestConfig),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_SchedulingRequestConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"schedulingRequestConfig"
		},
	{ ATF_POINTER, 3, offsetof(struct RRC_MAC_CellGroupConfig, bsr_Config),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_BSR_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bsr-Config"
		},
	{ ATF_POINTER, 2, offsetof(struct RRC_MAC_CellGroupConfig, tag_Config),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TAG_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tag-Config"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_MAC_CellGroupConfig, phr_Config),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RRC_SetupRelease_PHR_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phr-Config"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_MAC_CellGroupConfig, skipUplinkTxDynamic),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"skipUplinkTxDynamic"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_MAC_CellGroupConfig, ext1),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_RRC_ext1_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_RRC_MAC_CellGroupConfig_oms_1[] = { 0, 1, 2, 3, 4, 6 };
static const ber_tlv_tag_t asn_DEF_RRC_MAC_CellGroupConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_MAC_CellGroupConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drx-Config */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* schedulingRequestConfig */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* bsr-Config */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* tag-Config */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* phr-Config */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* skipUplinkTxDynamic */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_MAC_CellGroupConfig_specs_1 = {
	sizeof(struct RRC_MAC_CellGroupConfig),
	offsetof(struct RRC_MAC_CellGroupConfig, _asn_ctx),
	asn_MAP_RRC_MAC_CellGroupConfig_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_RRC_MAC_CellGroupConfig_oms_1,	/* Optional members */
	5, 1,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_MAC_CellGroupConfig = {
	"MAC-CellGroupConfig",
	"MAC-CellGroupConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_MAC_CellGroupConfig_tags_1,
	sizeof(asn_DEF_RRC_MAC_CellGroupConfig_tags_1)
		/sizeof(asn_DEF_RRC_MAC_CellGroupConfig_tags_1[0]), /* 1 */
	asn_DEF_RRC_MAC_CellGroupConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_MAC_CellGroupConfig_tags_1)
		/sizeof(asn_DEF_RRC_MAC_CellGroupConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_MAC_CellGroupConfig_1,
	7,	/* Elements count */
	&asn_SPC_RRC_MAC_CellGroupConfig_specs_1	/* Additional specs */
};

