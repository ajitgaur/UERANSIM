/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn/NGAP-IEs.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D ngap -pdu=all`
 */

#include "NGAP_TAICancelledEUTRA-Item.h"

#include "NGAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_NGAP_TAICancelledEUTRA_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_TAICancelledEUTRA_Item, tAI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_TAI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tAI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_TAICancelledEUTRA_Item, cancelledCellsInTAI_EUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_CancelledCellsInTAI_EUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cancelledCellsInTAI-EUTRA"
		},
	{ ATF_POINTER, 1, offsetof(struct NGAP_TAICancelledEUTRA_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolExtensionContainer_176P170,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_NGAP_TAICancelledEUTRA_Item_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_NGAP_TAICancelledEUTRA_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_TAICancelledEUTRA_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tAI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cancelledCellsInTAI-EUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NGAP_TAICancelledEUTRA_Item_specs_1 = {
	sizeof(struct NGAP_TAICancelledEUTRA_Item),
	offsetof(struct NGAP_TAICancelledEUTRA_Item, _asn_ctx),
	asn_MAP_NGAP_TAICancelledEUTRA_Item_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NGAP_TAICancelledEUTRA_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_TAICancelledEUTRA_Item = {
	"TAICancelledEUTRA-Item",
	"TAICancelledEUTRA-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_TAICancelledEUTRA_Item_tags_1,
	sizeof(asn_DEF_NGAP_TAICancelledEUTRA_Item_tags_1)
		/sizeof(asn_DEF_NGAP_TAICancelledEUTRA_Item_tags_1[0]), /* 1 */
	asn_DEF_NGAP_TAICancelledEUTRA_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_TAICancelledEUTRA_Item_tags_1)
		/sizeof(asn_DEF_NGAP_TAICancelledEUTRA_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_TAICancelledEUTRA_Item_1,
	3,	/* Elements count */
	&asn_SPC_NGAP_TAICancelledEUTRA_Item_specs_1	/* Additional specs */
};

