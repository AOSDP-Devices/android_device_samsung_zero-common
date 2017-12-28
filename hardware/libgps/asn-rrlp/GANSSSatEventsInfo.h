/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_GANSSSatEventsInfo_H_
#define	_GANSSSatEventsInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GANSSSatEventsInfo */
typedef struct GANSSSatEventsInfo {
	BIT_STRING_t	 eventOccured;
	BIT_STRING_t	 futureEventNoted;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSSSatEventsInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSSSatEventsInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _GANSSSatEventsInfo_H_ */
#include <asn_internal.h>