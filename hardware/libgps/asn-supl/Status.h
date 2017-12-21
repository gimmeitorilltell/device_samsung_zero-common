/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "../ulp-components.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_Status_H_
#define	_Status_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Status {
	Status_stale	= 0,
	Status_current	= 1,
	Status_unknown	= 2
	/*
	 * Enumeration is extensible
	 */
} e_Status;

/* Status */
typedef long	 Status_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Status;
asn_struct_free_f Status_free;
asn_struct_print_f Status_print;
asn_constr_check_f Status_constraint;
ber_type_decoder_f Status_decode_ber;
der_type_encoder_f Status_encode_der;
xer_type_decoder_f Status_decode_xer;
xer_type_encoder_f Status_encode_xer;
per_type_decoder_f Status_decode_uper;
per_type_encoder_f Status_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Status_H_ */
#include <asn_internal.h>
