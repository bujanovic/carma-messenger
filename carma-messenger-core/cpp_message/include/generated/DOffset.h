/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_CARMA2.asn1"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_DOffset_H_
#define	_DOffset_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DOffset */
typedef long	 DOffset_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_DOffset_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_DOffset;
asn_struct_free_f DOffset_free;
asn_struct_print_f DOffset_print;
asn_constr_check_f DOffset_constraint;
ber_type_decoder_f DOffset_decode_ber;
der_type_encoder_f DOffset_encode_der;
xer_type_decoder_f DOffset_decode_xer;
xer_type_encoder_f DOffset_encode_xer;
oer_type_decoder_f DOffset_decode_oer;
oer_type_encoder_f DOffset_encode_oer;
per_type_decoder_f DOffset_decode_uper;
per_type_encoder_f DOffset_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _DOffset_H_ */
#include <asn_internal.h>
