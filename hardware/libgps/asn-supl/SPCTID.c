/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "../ver2-ulp-components.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "SPCTID.h"

static int
memb_rAND_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 128)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_rAND_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  128,  128 }	/* (SIZE(128..128)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_SPCTID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SPCTID, rAND),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_rAND_constraint_1,
		&asn_PER_memb_rAND_constr_2,
		0,
		"rAND"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SPCTID, slpFQDN),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FQDN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"slpFQDN"
		},
};
static const ber_tlv_tag_t asn_DEF_SPCTID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SPCTID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rAND */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* slpFQDN */
};
static asn_SEQUENCE_specifics_t asn_SPC_SPCTID_specs_1 = {
	sizeof(struct SPCTID),
	offsetof(struct SPCTID, _asn_ctx),
	asn_MAP_SPCTID_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SPCTID = {
	"SPCTID",
	"SPCTID",
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
	asn_DEF_SPCTID_tags_1,
	sizeof(asn_DEF_SPCTID_tags_1)
		/sizeof(asn_DEF_SPCTID_tags_1[0]), /* 1 */
	asn_DEF_SPCTID_tags_1,	/* Same as above */
	sizeof(asn_DEF_SPCTID_tags_1)
		/sizeof(asn_DEF_SPCTID_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SPCTID_1,
	2,	/* Elements count */
	&asn_SPC_SPCTID_specs_1	/* Additional specs */
};

