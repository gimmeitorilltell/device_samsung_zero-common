/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_NavModel_CNAVKeplerianSet_H_
#define	_NavModel_CNAVKeplerianSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <INTEGER.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NavModel-CNAVKeplerianSet */
typedef struct NavModel_CNAVKeplerianSet {
	long	 cnavTop;
	long	 cnavURAindex;
	long	 cnavDeltaA;
	long	 cnavAdot;
	long	 cnavDeltaNo;
	long	 cnavDeltaNoDot;
	INTEGER_t	 cnavMo;
	INTEGER_t	 cnavE;
	INTEGER_t	 cnavOmega;
	INTEGER_t	 cnavOMEGA0;
	long	 cnavDeltaOmegaDot;
	INTEGER_t	 cnavIo;
	long	 cnavIoDot;
	long	 cnavCis;
	long	 cnavCic;
	long	 cnavCrs;
	long	 cnavCrc;
	long	 cnavCus;
	long	 cnavCuc;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NavModel_CNAVKeplerianSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NavModel_CNAVKeplerianSet;

#ifdef __cplusplus
}
#endif

#endif	/* _NavModel_CNAVKeplerianSet_H_ */
#include <asn_internal.h>
