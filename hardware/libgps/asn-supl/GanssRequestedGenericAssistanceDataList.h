/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Version-2-parameter-extensions"
 * 	found in "../ulp-version2-parameter-extensions.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_GanssRequestedGenericAssistanceDataList_H_
#define	_GanssRequestedGenericAssistanceDataList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GanssReqGenericData;

/* GanssRequestedGenericAssistanceDataList */
typedef struct GanssRequestedGenericAssistanceDataList {
	A_SEQUENCE_OF(struct GanssReqGenericData) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GanssRequestedGenericAssistanceDataList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GanssRequestedGenericAssistanceDataList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GanssReqGenericData.h"

#endif	/* _GanssRequestedGenericAssistanceDataList_H_ */
#include <asn_internal.h>
