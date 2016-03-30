/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "ITS_CAM_v1.3.2.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_RelevanceDistance_H_
#define	_RelevanceDistance_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RelevanceDistance {
	RelevanceDistance_lessThan50m	= 0,
	RelevanceDistance_lessThan100m	= 1,
	RelevanceDistance_lessThan200m	= 2,
	RelevanceDistance_lessThan500m	= 3,
	RelevanceDistance_lessThan1000m	= 4,
	RelevanceDistance_lessThan5km	= 5,
	RelevanceDistance_lessThan10km	= 6,
	RelevanceDistance_over10km	= 7
} e_RelevanceDistance;

/* RelevanceDistance */
typedef long	 RelevanceDistance_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RelevanceDistance;
asn_struct_free_f RelevanceDistance_free;
asn_struct_print_f RelevanceDistance_print;
asn_constr_check_f RelevanceDistance_constraint;
ber_type_decoder_f RelevanceDistance_decode_ber;
der_type_encoder_f RelevanceDistance_encode_der;
xer_type_decoder_f RelevanceDistance_decode_xer;
xer_type_encoder_f RelevanceDistance_encode_xer;
per_type_decoder_f RelevanceDistance_decode_uper;
per_type_encoder_f RelevanceDistance_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RelevanceDistance_H_ */
#include "asn_internal.h"
