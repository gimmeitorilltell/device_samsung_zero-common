/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Version-2-parameter-extensions"
 * 	found in "../ulp-version2-parameter-extensions.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "GanssReqGenericData.h"

static int
memb_ganssId_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ganssSBASid_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ganssTimeModels_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_ganssId_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ganssSBASid_constr_3 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  3,  3 }	/* (SIZE(3..3)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ganssTimeModels_constr_8 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_GanssReqGenericData_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GanssReqGenericData, ganssId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_ganssId_constraint_1,
		&asn_PER_memb_ganssId_constr_2,
		0,
		"ganssId"
		},
	{ ATF_POINTER, 1, offsetof(struct GanssReqGenericData, ganssSBASid),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_ganssSBASid_constraint_1,
		&asn_PER_memb_ganssSBASid_constr_3,
		0,
		"ganssSBASid"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GanssReqGenericData, ganssRealTimeIntegrity),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ganssRealTimeIntegrity"
		},
	{ ATF_POINTER, 1, offsetof(struct GanssReqGenericData, ganssDifferentialCorrection),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DGANSS_Sig_Id_Req,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ganssDifferentialCorrection"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GanssReqGenericData, ganssAlmanac),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ganssAlmanac"
		},
	{ ATF_POINTER, 2, offsetof(struct GanssReqGenericData, ganssNavigationModelData),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GanssNavigationModelData,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ganssNavigationModelData"
		},
	{ ATF_POINTER, 1, offsetof(struct GanssReqGenericData, ganssTimeModels),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_ganssTimeModels_constraint_1,
		&asn_PER_memb_ganssTimeModels_constr_8,
		0,
		"ganssTimeModels"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GanssReqGenericData, ganssReferenceMeasurementInfo),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ganssReferenceMeasurementInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct GanssReqGenericData, ganssDataBits),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GanssDataBits,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ganssDataBits"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GanssReqGenericData, ganssUTCModel),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ganssUTCModel"
		},
	{ ATF_POINTER, 1, offsetof(struct GanssReqGenericData, ganssAdditionalDataChoices),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GanssAdditionalDataChoices,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ganssAdditionalDataChoices"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GanssReqGenericData, ganssAuxiliaryInformation),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ganssAuxiliaryInformation"
		},
	{ ATF_POINTER, 2, offsetof(struct GanssReqGenericData, ganssExtendedEphemeris),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtendedEphemeris,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ganssExtendedEphemeris"
		},
	{ ATF_POINTER, 1, offsetof(struct GanssReqGenericData, ganssExtendedEphemerisCheck),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GanssExtendedEphCheck,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ganssExtendedEphemerisCheck"
		},
};
static const int asn_MAP_GanssReqGenericData_oms_1[] = { 1, 3, 5, 6, 8, 10, 12, 13 };
static const ber_tlv_tag_t asn_DEF_GanssReqGenericData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GanssReqGenericData_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ganssId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ganssSBASid */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ganssRealTimeIntegrity */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ganssDifferentialCorrection */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ganssAlmanac */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ganssNavigationModelData */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ganssTimeModels */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ganssReferenceMeasurementInfo */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* ganssDataBits */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ganssUTCModel */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* ganssAdditionalDataChoices */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ganssAuxiliaryInformation */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* ganssExtendedEphemeris */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 } /* ganssExtendedEphemerisCheck */
};
static asn_SEQUENCE_specifics_t asn_SPC_GanssReqGenericData_specs_1 = {
	sizeof(struct GanssReqGenericData),
	offsetof(struct GanssReqGenericData, _asn_ctx),
	asn_MAP_GanssReqGenericData_tag2el_1,
	14,	/* Count of tags in the map */
	asn_MAP_GanssReqGenericData_oms_1,	/* Optional members */
	8, 0,	/* Root/Additions */
	13,	/* Start extensions */
	15	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GanssReqGenericData = {
	"GanssReqGenericData",
	"GanssReqGenericData",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_GanssReqGenericData_tags_1,
	sizeof(asn_DEF_GanssReqGenericData_tags_1)
		/sizeof(asn_DEF_GanssReqGenericData_tags_1[0]), /* 1 */
	asn_DEF_GanssReqGenericData_tags_1,	/* Same as above */
	sizeof(asn_DEF_GanssReqGenericData_tags_1)
		/sizeof(asn_DEF_GanssReqGenericData_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_GanssReqGenericData_1,
	14,	/* Elements count */
	&asn_SPC_GanssReqGenericData_specs_1	/* Additional specs */
};

