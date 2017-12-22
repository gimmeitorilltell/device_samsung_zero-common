/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_NavModel_BDSKeplerianSet_r12_H_
#define	_NavModel_BDSKeplerianSet_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NavModel-BDSKeplerianSet-r12 */
typedef struct NavModel_BDSKeplerianSet_r12 {
	long	 bdsURAI_r12;
	long	 bdsToe_r12;
	unsigned long	 bdsAPowerHalf_r12;
	unsigned long	 bdsE_r12;
	long	 bdsW_r12;
	long	 bdsDeltaN_r12;
	long	 bdsM0_r12;
	long	 bdsOmega0_r12;
	long	 bdsOmegaDot_r12;
	long	 bdsI0_r12;
	long	 bdsIDot_r12;
	long	 bdsCuc_r12;
	long	 bdsCus_r12;
	long	 bdsCrc_r12;
	long	 bdsCrs_r12;
	long	 bdsCic_r12;
	long	 bdsCis_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NavModel_BDSKeplerianSet_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_bdsAPowerHalf_r12_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_bdsE_r12_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NavModel_BDSKeplerianSet_r12;

#ifdef __cplusplus
}
#endif

#endif	/* _NavModel_BDSKeplerianSet_r12_H_ */
#include <asn_internal.h>