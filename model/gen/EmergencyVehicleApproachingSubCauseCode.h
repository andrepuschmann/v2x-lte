/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "ITS_CAM_v1.3.2.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_EmergencyVehicleApproachingSubCauseCode_H_
#define	_EmergencyVehicleApproachingSubCauseCode_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EmergencyVehicleApproachingSubCauseCode {
	EmergencyVehicleApproachingSubCauseCode_unavailable	= 0,
	EmergencyVehicleApproachingSubCauseCode_emergencyVehicleApproaching	= 1,
	EmergencyVehicleApproachingSubCauseCode_prioritizedVehicleApproaching	= 2
} e_EmergencyVehicleApproachingSubCauseCode;

/* EmergencyVehicleApproachingSubCauseCode */
typedef long	 EmergencyVehicleApproachingSubCauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EmergencyVehicleApproachingSubCauseCode;
asn_struct_free_f EmergencyVehicleApproachingSubCauseCode_free;
asn_struct_print_f EmergencyVehicleApproachingSubCauseCode_print;
asn_constr_check_f EmergencyVehicleApproachingSubCauseCode_constraint;
ber_type_decoder_f EmergencyVehicleApproachingSubCauseCode_decode_ber;
der_type_encoder_f EmergencyVehicleApproachingSubCauseCode_encode_der;
xer_type_decoder_f EmergencyVehicleApproachingSubCauseCode_decode_xer;
xer_type_encoder_f EmergencyVehicleApproachingSubCauseCode_encode_xer;
per_type_decoder_f EmergencyVehicleApproachingSubCauseCode_decode_uper;
per_type_encoder_f EmergencyVehicleApproachingSubCauseCode_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _EmergencyVehicleApproachingSubCauseCode_H_ */
#include "asn_internal.h"
