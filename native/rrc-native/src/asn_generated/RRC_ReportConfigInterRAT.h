/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_ReportConfigInterRAT_H_
#define	_RRC_ReportConfigInterRAT_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_ReportConfigInterRAT__reportType_PR {
	RRC_ReportConfigInterRAT__reportType_PR_NOTHING,	/* No components present */
	RRC_ReportConfigInterRAT__reportType_PR_periodical,
	RRC_ReportConfigInterRAT__reportType_PR_eventTriggered,
	RRC_ReportConfigInterRAT__reportType_PR_reportCGI,
	/* Extensions may appear below */
	RRC_ReportConfigInterRAT__reportType_PR_reportSFTD
} RRC_ReportConfigInterRAT__reportType_PR;

/* Forward declarations */
struct RRC_PeriodicalReportConfigInterRAT;
struct RRC_EventTriggerConfigInterRAT;
struct RRC_ReportCGI_EUTRA;
struct RRC_ReportSFTD_EUTRA;

/* RRC_ReportConfigInterRAT */
typedef struct RRC_ReportConfigInterRAT {
	struct RRC_ReportConfigInterRAT__reportType {
		RRC_ReportConfigInterRAT__reportType_PR present;
		union RRC_ReportConfigInterRAT__RRC_reportType_u {
			struct RRC_PeriodicalReportConfigInterRAT	*periodical;
			struct RRC_EventTriggerConfigInterRAT	*eventTriggered;
			struct RRC_ReportCGI_EUTRA	*reportCGI;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			struct RRC_ReportSFTD_EUTRA	*reportSFTD;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} reportType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_ReportConfigInterRAT_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_ReportConfigInterRAT;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_ReportConfigInterRAT_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_ReportConfigInterRAT_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_ReportConfigInterRAT_H_ */
#include <asn_internal.h>
