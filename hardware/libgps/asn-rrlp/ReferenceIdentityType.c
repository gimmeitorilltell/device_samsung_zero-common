/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#include "ReferenceIdentityType.h"

static asn_per_constraints_t asn_PER_type_ReferenceIdentityType_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ReferenceIdentityType_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReferenceIdentityType, choice.bsicAndCarrier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BSICAndCarrier,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"bsicAndCarrier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReferenceIdentityType, choice.ci),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ci"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReferenceIdentityType, choice.requestIndex),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RequestIndex,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"requestIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReferenceIdentityType, choice.systemInfoIndex),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInfoIndex,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"systemInfoIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReferenceIdentityType, choice.ciAndLAC),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIDAndLAC,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ciAndLAC"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ReferenceIdentityType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bsicAndCarrier */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ci */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* requestIndex */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* systemInfoIndex */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ciAndLAC */
};
static asn_CHOICE_specifics_t asn_SPC_ReferenceIdentityType_specs_1 = {
	sizeof(struct ReferenceIdentityType),
	offsetof(struct ReferenceIdentityType, _asn_ctx),
	offsetof(struct ReferenceIdentityType, present),
	sizeof(((struct ReferenceIdentityType *)0)->present),
	asn_MAP_ReferenceIdentityType_tag2el_1,
	5,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ReferenceIdentityType = {
	"ReferenceIdentityType",
	"ReferenceIdentityType",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_ReferenceIdentityType_constr_1,
	asn_MBR_ReferenceIdentityType_1,
	5,	/* Elements count */
	&asn_SPC_ReferenceIdentityType_specs_1	/* Additional specs */
};

