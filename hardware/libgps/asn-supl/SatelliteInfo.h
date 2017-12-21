/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-POS-INIT"
 * 	found in "../supl-pos-init.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_SatelliteInfo_H_
#define	_SatelliteInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SatelliteInfoElement;

/* SatelliteInfo */
typedef struct SatelliteInfo {
	A_SEQUENCE_OF(struct SatelliteInfoElement) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SatelliteInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SatelliteInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SatelliteInfoElement.h"

#endif	/* _SatelliteInfo_H_ */
#include <asn_internal.h>
