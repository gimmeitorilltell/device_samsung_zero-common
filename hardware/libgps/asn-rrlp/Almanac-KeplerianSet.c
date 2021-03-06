/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#include "Almanac-KeplerianSet.h"

static int
memb_kepAlmanacE_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2047)) {
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
memb_kepAlmanacDeltaI_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -1024 && value <= 1023)) {
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
memb_kepAlmanacOmegaDot_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -1024 && value <= 1023)) {
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
memb_kepSVStatusINAV_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 4)) {
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
memb_kepSVStatusFNAV_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 2)) {
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
memb_kepAlmanacAPowerHalf_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -4096 && value <= 4095)) {
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
memb_kepAlmanacOmega0_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -32768 && value <= 32767)) {
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
memb_kepAlmanacW_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -32768 && value <= 32767)) {
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
memb_kepAlmanacM0_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -32768 && value <= 32767)) {
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
memb_kepAlmanacAF0_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -32768 && value <= 32767)) {
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
memb_kepAlmanacAF1_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -4096 && value <= 4095)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_kepAlmanacE_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  2047 }	/* (0..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_kepAlmanacDeltaI_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11, -1024,  1023 }	/* (-1024..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_kepAlmanacOmegaDot_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11, -1024,  1023 }	/* (-1024..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_kepSVStatusINAV_constr_6 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_kepSVStatusFNAV_constr_7 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_kepAlmanacAPowerHalf_constr_8 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 13,  13, -4096,  4095 }	/* (-4096..4095) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_kepAlmanacOmega0_constr_9 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16, -32768,  32767 }	/* (-32768..32767) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_kepAlmanacW_constr_10 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16, -32768,  32767 }	/* (-32768..32767) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_kepAlmanacM0_constr_11 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16, -32768,  32767 }	/* (-32768..32767) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_kepAlmanacAF0_constr_12 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16, -32768,  32767 }	/* (-32768..32767) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_kepAlmanacAF1_constr_13 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 13,  13, -4096,  4095 }	/* (-4096..4095) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_Almanac_KeplerianSet_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Almanac_KeplerianSet, svID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SVID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"svID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Almanac_KeplerianSet, kepAlmanacE),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_kepAlmanacE_constraint_1,
		&asn_PER_memb_kepAlmanacE_constr_3,
		0,
		"kepAlmanacE"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Almanac_KeplerianSet, kepAlmanacDeltaI),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_kepAlmanacDeltaI_constraint_1,
		&asn_PER_memb_kepAlmanacDeltaI_constr_4,
		0,
		"kepAlmanacDeltaI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Almanac_KeplerianSet, kepAlmanacOmegaDot),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_kepAlmanacOmegaDot_constraint_1,
		&asn_PER_memb_kepAlmanacOmegaDot_constr_5,
		0,
		"kepAlmanacOmegaDot"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Almanac_KeplerianSet, kepSVStatusINAV),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_kepSVStatusINAV_constraint_1,
		&asn_PER_memb_kepSVStatusINAV_constr_6,
		0,
		"kepSVStatusINAV"
		},
	{ ATF_POINTER, 1, offsetof(struct Almanac_KeplerianSet, kepSVStatusFNAV),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_kepSVStatusFNAV_constraint_1,
		&asn_PER_memb_kepSVStatusFNAV_constr_7,
		0,
		"kepSVStatusFNAV"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Almanac_KeplerianSet, kepAlmanacAPowerHalf),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_kepAlmanacAPowerHalf_constraint_1,
		&asn_PER_memb_kepAlmanacAPowerHalf_constr_8,
		0,
		"kepAlmanacAPowerHalf"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Almanac_KeplerianSet, kepAlmanacOmega0),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_kepAlmanacOmega0_constraint_1,
		&asn_PER_memb_kepAlmanacOmega0_constr_9,
		0,
		"kepAlmanacOmega0"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Almanac_KeplerianSet, kepAlmanacW),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_kepAlmanacW_constraint_1,
		&asn_PER_memb_kepAlmanacW_constr_10,
		0,
		"kepAlmanacW"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Almanac_KeplerianSet, kepAlmanacM0),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_kepAlmanacM0_constraint_1,
		&asn_PER_memb_kepAlmanacM0_constr_11,
		0,
		"kepAlmanacM0"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Almanac_KeplerianSet, kepAlmanacAF0),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_kepAlmanacAF0_constraint_1,
		&asn_PER_memb_kepAlmanacAF0_constr_12,
		0,
		"kepAlmanacAF0"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Almanac_KeplerianSet, kepAlmanacAF1),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_kepAlmanacAF1_constraint_1,
		&asn_PER_memb_kepAlmanacAF1_constr_13,
		0,
		"kepAlmanacAF1"
		},
};
static const int asn_MAP_Almanac_KeplerianSet_oms_1[] = { 5 };
static const ber_tlv_tag_t asn_DEF_Almanac_KeplerianSet_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Almanac_KeplerianSet_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* svID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* kepAlmanacE */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* kepAlmanacDeltaI */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* kepAlmanacOmegaDot */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* kepSVStatusINAV */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* kepSVStatusFNAV */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* kepAlmanacAPowerHalf */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* kepAlmanacOmega0 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* kepAlmanacW */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* kepAlmanacM0 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* kepAlmanacAF0 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* kepAlmanacAF1 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Almanac_KeplerianSet_specs_1 = {
	sizeof(struct Almanac_KeplerianSet),
	offsetof(struct Almanac_KeplerianSet, _asn_ctx),
	asn_MAP_Almanac_KeplerianSet_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_Almanac_KeplerianSet_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Almanac_KeplerianSet = {
	"Almanac-KeplerianSet",
	"Almanac-KeplerianSet",
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
	asn_DEF_Almanac_KeplerianSet_tags_1,
	sizeof(asn_DEF_Almanac_KeplerianSet_tags_1)
		/sizeof(asn_DEF_Almanac_KeplerianSet_tags_1[0]), /* 1 */
	asn_DEF_Almanac_KeplerianSet_tags_1,	/* Same as above */
	sizeof(asn_DEF_Almanac_KeplerianSet_tags_1)
		/sizeof(asn_DEF_Almanac_KeplerianSet_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Almanac_KeplerianSet_1,
	12,	/* Elements count */
	&asn_SPC_Almanac_KeplerianSet_specs_1	/* Additional specs */
};

