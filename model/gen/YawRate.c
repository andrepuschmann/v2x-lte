/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "ITS_CAM_v1.3.2.asn"
 * 	`asn1c -gen-PER`
 */

#include "YawRate.h"

static asn_TYPE_member_t asn_MBR_YawRate_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct YawRate, yawRateValue),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_YawRateValue,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"yawRateValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct YawRate, yawRateConfidence),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_YawRateConfidence,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"yawRateConfidence"
		},
};
static ber_tlv_tag_t asn_DEF_YawRate_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_YawRate_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* yawRateValue */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* yawRateConfidence */
};
static asn_SEQUENCE_specifics_t asn_SPC_YawRate_specs_1 = {
	sizeof(struct YawRate),
	offsetof(struct YawRate, _asn_ctx),
	asn_MAP_YawRate_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_YawRate = {
	"YawRate",
	"YawRate",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_YawRate_tags_1,
	sizeof(asn_DEF_YawRate_tags_1)
		/sizeof(asn_DEF_YawRate_tags_1[0]), /* 1 */
	asn_DEF_YawRate_tags_1,	/* Same as above */
	sizeof(asn_DEF_YawRate_tags_1)
		/sizeof(asn_DEF_YawRate_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_YawRate_1,
	2,	/* Elements count */
	&asn_SPC_YawRate_specs_1	/* Additional specs */
};

