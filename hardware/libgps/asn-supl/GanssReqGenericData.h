/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Version-2-parameter-extensions"
 * 	found in "../ulp-version2-parameter-extensions.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_GanssReqGenericData_H_
#define	_GanssReqGenericData_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <BOOLEAN.h>
#include "DGANSS-Sig-Id-Req.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GanssNavigationModelData;
struct GanssDataBits;
struct GanssAdditionalDataChoices;
struct ExtendedEphemeris;
struct GanssExtendedEphCheck;

/* GanssReqGenericData */
typedef struct GanssReqGenericData {
	long	 ganssId;
	BIT_STRING_t	*ganssSBASid	/* OPTIONAL */;
	BOOLEAN_t	 ganssRealTimeIntegrity;
	DGANSS_Sig_Id_Req_t	*ganssDifferentialCorrection	/* OPTIONAL */;
	BOOLEAN_t	 ganssAlmanac;
	struct GanssNavigationModelData	*ganssNavigationModelData	/* OPTIONAL */;
	BIT_STRING_t	*ganssTimeModels	/* OPTIONAL */;
	BOOLEAN_t	 ganssReferenceMeasurementInfo;
	struct GanssDataBits	*ganssDataBits	/* OPTIONAL */;
	BOOLEAN_t	 ganssUTCModel;
	struct GanssAdditionalDataChoices	*ganssAdditionalDataChoices	/* OPTIONAL */;
	BOOLEAN_t	 ganssAuxiliaryInformation;
	struct ExtendedEphemeris	*ganssExtendedEphemeris	/* OPTIONAL */;
	struct GanssExtendedEphCheck	*ganssExtendedEphemerisCheck	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GanssReqGenericData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GanssReqGenericData;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GanssNavigationModelData.h"
#include "GanssDataBits.h"
#include "GanssAdditionalDataChoices.h"
#include "ExtendedEphemeris.h"
#include "GanssExtendedEphCheck.h"

#endif	/* _GanssReqGenericData_H_ */
#include <asn_internal.h>
