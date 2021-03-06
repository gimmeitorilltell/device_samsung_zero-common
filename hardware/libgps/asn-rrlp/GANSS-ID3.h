/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_GANSS_ID3_H_
#define	_GANSS_ID3_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GANSS_ID3_element;

/* GANSS-ID3 */
typedef struct GANSS_ID3 {
	A_SEQUENCE_OF(struct GANSS_ID3_element) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSS_ID3_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSS_ID3;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GANSS-ID3-element.h"

#endif	/* _GANSS_ID3_H_ */
#include <asn_internal.h>
