/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Descriptions"
 * 	found in "asn/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D ngap -pdu=all`
 */

#include "NGAP_UnsuccessfulOutcome.h"

static const long asn_VAL_1_NGAP_id_AMFConfigurationUpdate = 0;
static const long asn_VAL_1_NGAP_reject = 0;
static const long asn_VAL_2_NGAP_id_HandoverCancel = 10;
static const long asn_VAL_2_NGAP_reject = 0;
static const long asn_VAL_3_NGAP_id_HandoverPreparation = 12;
static const long asn_VAL_3_NGAP_reject = 0;
static const long asn_VAL_4_NGAP_id_HandoverResourceAllocation = 13;
static const long asn_VAL_4_NGAP_reject = 0;
static const long asn_VAL_5_NGAP_id_InitialContextSetup = 14;
static const long asn_VAL_5_NGAP_reject = 0;
static const long asn_VAL_6_NGAP_id_NGReset = 20;
static const long asn_VAL_6_NGAP_reject = 0;
static const long asn_VAL_7_NGAP_id_NGSetup = 21;
static const long asn_VAL_7_NGAP_reject = 0;
static const long asn_VAL_8_NGAP_id_PathSwitchRequest = 25;
static const long asn_VAL_8_NGAP_reject = 0;
static const long asn_VAL_9_NGAP_id_PDUSessionResourceModify = 26;
static const long asn_VAL_9_NGAP_reject = 0;
static const long asn_VAL_10_NGAP_id_PDUSessionResourceModifyIndication = 27;
static const long asn_VAL_10_NGAP_reject = 0;
static const long asn_VAL_11_NGAP_id_PDUSessionResourceRelease = 28;
static const long asn_VAL_11_NGAP_reject = 0;
static const long asn_VAL_12_NGAP_id_PDUSessionResourceSetup = 29;
static const long asn_VAL_12_NGAP_reject = 0;
static const long asn_VAL_13_NGAP_id_PWSCancel = 32;
static const long asn_VAL_13_NGAP_reject = 0;
static const long asn_VAL_14_NGAP_id_RANConfigurationUpdate = 35;
static const long asn_VAL_14_NGAP_reject = 0;
static const long asn_VAL_15_NGAP_id_UEContextModification = 40;
static const long asn_VAL_15_NGAP_reject = 0;
static const long asn_VAL_16_NGAP_id_UEContextRelease = 41;
static const long asn_VAL_16_NGAP_reject = 0;
static const long asn_VAL_17_NGAP_id_UERadioCapabilityCheck = 43;
static const long asn_VAL_17_NGAP_reject = 0;
static const long asn_VAL_18_NGAP_id_WriteReplaceWarning = 51;
static const long asn_VAL_18_NGAP_reject = 0;
static const long asn_VAL_19_NGAP_id_AMFStatusIndication = 1;
static const long asn_VAL_19_NGAP_ignore = 1;
static const long asn_VAL_20_NGAP_id_CellTrafficTrace = 2;
static const long asn_VAL_20_NGAP_ignore = 1;
static const long asn_VAL_21_NGAP_id_DeactivateTrace = 3;
static const long asn_VAL_21_NGAP_ignore = 1;
static const long asn_VAL_22_NGAP_id_DownlinkNASTransport = 4;
static const long asn_VAL_22_NGAP_ignore = 1;
static const long asn_VAL_23_NGAP_id_DownlinkNonUEAssociatedNRPPaTransport = 5;
static const long asn_VAL_23_NGAP_ignore = 1;
static const long asn_VAL_24_NGAP_id_DownlinkRANConfigurationTransfer = 6;
static const long asn_VAL_24_NGAP_ignore = 1;
static const long asn_VAL_25_NGAP_id_DownlinkRANStatusTransfer = 7;
static const long asn_VAL_25_NGAP_ignore = 1;
static const long asn_VAL_26_NGAP_id_DownlinkUEAssociatedNRPPaTransport = 8;
static const long asn_VAL_26_NGAP_ignore = 1;
static const long asn_VAL_27_NGAP_id_ErrorIndication = 9;
static const long asn_VAL_27_NGAP_ignore = 1;
static const long asn_VAL_28_NGAP_id_HandoverNotification = 11;
static const long asn_VAL_28_NGAP_ignore = 1;
static const long asn_VAL_29_NGAP_id_InitialUEMessage = 15;
static const long asn_VAL_29_NGAP_ignore = 1;
static const long asn_VAL_30_NGAP_id_LocationReport = 18;
static const long asn_VAL_30_NGAP_ignore = 1;
static const long asn_VAL_31_NGAP_id_LocationReportingControl = 16;
static const long asn_VAL_31_NGAP_ignore = 1;
static const long asn_VAL_32_NGAP_id_LocationReportingFailureIndication = 17;
static const long asn_VAL_32_NGAP_ignore = 1;
static const long asn_VAL_33_NGAP_id_NASNonDeliveryIndication = 19;
static const long asn_VAL_33_NGAP_ignore = 1;
static const long asn_VAL_34_NGAP_id_OverloadStart = 22;
static const long asn_VAL_34_NGAP_ignore = 1;
static const long asn_VAL_35_NGAP_id_OverloadStop = 23;
static const long asn_VAL_35_NGAP_reject = 0;
static const long asn_VAL_36_NGAP_id_Paging = 24;
static const long asn_VAL_36_NGAP_ignore = 1;
static const long asn_VAL_37_NGAP_id_PDUSessionResourceNotify = 30;
static const long asn_VAL_37_NGAP_ignore = 1;
static const long asn_VAL_38_NGAP_id_PrivateMessage = 31;
static const long asn_VAL_38_NGAP_ignore = 1;
static const long asn_VAL_39_NGAP_id_PWSFailureIndication = 33;
static const long asn_VAL_39_NGAP_ignore = 1;
static const long asn_VAL_40_NGAP_id_PWSRestartIndication = 34;
static const long asn_VAL_40_NGAP_ignore = 1;
static const long asn_VAL_41_NGAP_id_RerouteNASRequest = 36;
static const long asn_VAL_41_NGAP_reject = 0;
static const long asn_VAL_42_NGAP_id_RRCInactiveTransitionReport = 37;
static const long asn_VAL_42_NGAP_ignore = 1;
static const long asn_VAL_43_NGAP_id_SecondaryRATDataUsageReport = 52;
static const long asn_VAL_43_NGAP_ignore = 1;
static const long asn_VAL_44_NGAP_id_TraceFailureIndication = 38;
static const long asn_VAL_44_NGAP_ignore = 1;
static const long asn_VAL_45_NGAP_id_TraceStart = 39;
static const long asn_VAL_45_NGAP_ignore = 1;
static const long asn_VAL_46_NGAP_id_UEContextReleaseRequest = 42;
static const long asn_VAL_46_NGAP_ignore = 1;
static const long asn_VAL_47_NGAP_id_UERadioCapabilityInfoIndication = 44;
static const long asn_VAL_47_NGAP_ignore = 1;
static const long asn_VAL_48_NGAP_id_UETNLABindingRelease = 45;
static const long asn_VAL_48_NGAP_ignore = 1;
static const long asn_VAL_49_NGAP_id_UplinkNASTransport = 46;
static const long asn_VAL_49_NGAP_ignore = 1;
static const long asn_VAL_50_NGAP_id_UplinkNonUEAssociatedNRPPaTransport = 47;
static const long asn_VAL_50_NGAP_ignore = 1;
static const long asn_VAL_51_NGAP_id_UplinkRANConfigurationTransfer = 48;
static const long asn_VAL_51_NGAP_ignore = 1;
static const long asn_VAL_52_NGAP_id_UplinkRANStatusTransfer = 49;
static const long asn_VAL_52_NGAP_ignore = 1;
static const long asn_VAL_53_NGAP_id_UplinkUEAssociatedNRPPaTransport = 50;
static const long asn_VAL_53_NGAP_ignore = 1;
static const asn_ioc_cell_t asn_IOS_NGAP_NGAP_ELEMENTARY_PROCEDURES_1_rows[] = {
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_AMFConfigurationUpdate },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_NGAP_AMFConfigurationUpdateAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_NGAP_AMFConfigurationUpdateFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_1_NGAP_id_AMFConfigurationUpdate },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_1_NGAP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_HandoverCancel },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_NGAP_HandoverCancelAcknowledge },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_2_NGAP_id_HandoverCancel },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_2_NGAP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_HandoverRequired },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_NGAP_HandoverCommand },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_NGAP_HandoverPreparationFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_3_NGAP_id_HandoverPreparation },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_3_NGAP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_HandoverRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_NGAP_HandoverRequestAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_NGAP_HandoverFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_4_NGAP_id_HandoverResourceAllocation },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_4_NGAP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_InitialContextSetupRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_NGAP_InitialContextSetupResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_NGAP_InitialContextSetupFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_5_NGAP_id_InitialContextSetup },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_5_NGAP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_NGReset },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_NGAP_NGResetAcknowledge },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_6_NGAP_id_NGReset },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_6_NGAP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_NGSetupRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_NGAP_NGSetupResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_NGAP_NGSetupFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_7_NGAP_id_NGSetup },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_7_NGAP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_PathSwitchRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_NGAP_PathSwitchRequestAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_NGAP_PathSwitchRequestFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_8_NGAP_id_PathSwitchRequest },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_8_NGAP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_PDUSessionResourceModifyRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_NGAP_PDUSessionResourceModifyResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_9_NGAP_id_PDUSessionResourceModify },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_9_NGAP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_PDUSessionResourceModifyIndication },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_NGAP_PDUSessionResourceModifyConfirm },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_10_NGAP_id_PDUSessionResourceModifyIndication },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_10_NGAP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_PDUSessionResourceReleaseCommand },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_NGAP_PDUSessionResourceReleaseResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_11_NGAP_id_PDUSessionResourceRelease },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_11_NGAP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_PDUSessionResourceSetupRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_NGAP_PDUSessionResourceSetupResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_12_NGAP_id_PDUSessionResourceSetup },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_12_NGAP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_PWSCancelRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_NGAP_PWSCancelResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_13_NGAP_id_PWSCancel },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_13_NGAP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_RANConfigurationUpdate },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_NGAP_RANConfigurationUpdateAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_NGAP_RANConfigurationUpdateFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_14_NGAP_id_RANConfigurationUpdate },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_14_NGAP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_UEContextModificationRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_NGAP_UEContextModificationResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_NGAP_UEContextModificationFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_15_NGAP_id_UEContextModification },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_15_NGAP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_UEContextReleaseCommand },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_NGAP_UEContextReleaseComplete },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_16_NGAP_id_UEContextRelease },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_16_NGAP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_UERadioCapabilityCheckRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_NGAP_UERadioCapabilityCheckResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_17_NGAP_id_UERadioCapabilityCheck },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_17_NGAP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_WriteReplaceWarningRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_NGAP_WriteReplaceWarningResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_18_NGAP_id_WriteReplaceWarning },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_18_NGAP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_AMFStatusIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_19_NGAP_id_AMFStatusIndication },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_19_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_CellTrafficTrace },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_20_NGAP_id_CellTrafficTrace },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_20_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_DeactivateTrace },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_21_NGAP_id_DeactivateTrace },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_21_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_DownlinkNASTransport },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_22_NGAP_id_DownlinkNASTransport },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_22_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_DownlinkNonUEAssociatedNRPPaTransport },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_23_NGAP_id_DownlinkNonUEAssociatedNRPPaTransport },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_23_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_DownlinkRANConfigurationTransfer },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_24_NGAP_id_DownlinkRANConfigurationTransfer },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_24_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_DownlinkRANStatusTransfer },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_25_NGAP_id_DownlinkRANStatusTransfer },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_25_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_DownlinkUEAssociatedNRPPaTransport },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_26_NGAP_id_DownlinkUEAssociatedNRPPaTransport },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_26_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_ErrorIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_27_NGAP_id_ErrorIndication },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_27_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_HandoverNotify },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_28_NGAP_id_HandoverNotification },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_28_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_InitialUEMessage },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_29_NGAP_id_InitialUEMessage },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_29_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_LocationReport },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_30_NGAP_id_LocationReport },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_30_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_LocationReportingControl },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_31_NGAP_id_LocationReportingControl },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_31_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_LocationReportingFailureIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_32_NGAP_id_LocationReportingFailureIndication },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_32_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_NASNonDeliveryIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_33_NGAP_id_NASNonDeliveryIndication },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_33_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_OverloadStart },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_34_NGAP_id_OverloadStart },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_34_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_OverloadStop },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_35_NGAP_id_OverloadStop },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_35_NGAP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_Paging },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_36_NGAP_id_Paging },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_36_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_PDUSessionResourceNotify },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_37_NGAP_id_PDUSessionResourceNotify },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_37_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_PrivateMessage },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_38_NGAP_id_PrivateMessage },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_38_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_PWSFailureIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_39_NGAP_id_PWSFailureIndication },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_39_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_PWSRestartIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_40_NGAP_id_PWSRestartIndication },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_40_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_RerouteNASRequest },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_41_NGAP_id_RerouteNASRequest },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_41_NGAP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_RRCInactiveTransitionReport },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_42_NGAP_id_RRCInactiveTransitionReport },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_42_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_SecondaryRATDataUsageReport },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_43_NGAP_id_SecondaryRATDataUsageReport },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_43_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_TraceFailureIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_44_NGAP_id_TraceFailureIndication },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_44_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_TraceStart },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_45_NGAP_id_TraceStart },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_45_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_UEContextReleaseRequest },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_46_NGAP_id_UEContextReleaseRequest },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_46_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_UERadioCapabilityInfoIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_47_NGAP_id_UERadioCapabilityInfoIndication },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_47_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_UETNLABindingReleaseRequest },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_48_NGAP_id_UETNLABindingRelease },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_48_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_UplinkNASTransport },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_49_NGAP_id_UplinkNASTransport },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_49_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_UplinkNonUEAssociatedNRPPaTransport },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_50_NGAP_id_UplinkNonUEAssociatedNRPPaTransport },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_50_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_UplinkRANConfigurationTransfer },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_51_NGAP_id_UplinkRANConfigurationTransfer },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_51_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_UplinkRANStatusTransfer },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_52_NGAP_id_UplinkRANStatusTransfer },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_52_NGAP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_NGAP_UplinkUEAssociatedNRPPaTransport },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_NGAP_ProcedureCode, &asn_VAL_53_NGAP_id_UplinkUEAssociatedNRPPaTransport },
	{ "&criticality", aioc__value, &asn_DEF_NGAP_Criticality, &asn_VAL_53_NGAP_ignore }
};
static const asn_ioc_set_t asn_IOS_NGAP_NGAP_ELEMENTARY_PROCEDURES_1[] = {
	{ 53, 5, asn_IOS_NGAP_NGAP_ELEMENTARY_PROCEDURES_1_rows }
};
static int
memb_NGAP_procedureCode_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_type_selector_result_t
select_UnsuccessfulOutcome_NGAP_criticality_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_NGAP_NGAP_ELEMENTARY_PROCEDURES_1;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 4; /* &criticality */
	size_t row, presence_index = 0;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct NGAP_UnsuccessfulOutcome, procedureCode));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(type_cell->cell_kind == aioc__undefined)
	        continue;
	
	    presence_index++;
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = presence_index;
	        break;
	    }
	}
	
	return result;
}

static int
memb_NGAP_criticality_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_type_selector_result_t
select_UnsuccessfulOutcome_NGAP_value_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_NGAP_NGAP_ELEMENTARY_PROCEDURES_1;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 2; /* &UnsuccessfulOutcome */
	size_t row, presence_index = 0;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct NGAP_UnsuccessfulOutcome, procedureCode));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(type_cell->cell_kind == aioc__undefined)
	        continue;
	
	    presence_index++;
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = presence_index;
	        break;
	    }
	}
	
	return result;
}

static int
memb_NGAP_value_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_per_constraints_t asn_PER_memb_NGAP_procedureCode_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NGAP_criticality_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NGAP_value_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NGAP_value_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_UnsuccessfulOutcome__value, choice.AMFConfigurationUpdateFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NGAP_AMFConfigurationUpdateFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"AMFConfigurationUpdateFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_UnsuccessfulOutcome__value, choice.HandoverPreparationFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NGAP_HandoverPreparationFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"HandoverPreparationFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_UnsuccessfulOutcome__value, choice.HandoverFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NGAP_HandoverFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"HandoverFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_UnsuccessfulOutcome__value, choice.InitialContextSetupFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NGAP_InitialContextSetupFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"InitialContextSetupFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_UnsuccessfulOutcome__value, choice.NGSetupFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NGAP_NGSetupFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"NGSetupFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_UnsuccessfulOutcome__value, choice.PathSwitchRequestFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NGAP_PathSwitchRequestFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"PathSwitchRequestFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_UnsuccessfulOutcome__value, choice.RANConfigurationUpdateFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NGAP_RANConfigurationUpdateFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"RANConfigurationUpdateFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_UnsuccessfulOutcome__value, choice.UEContextModificationFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NGAP_UEContextModificationFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"UEContextModificationFailure"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_value_tag2el_4[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 7 }, /* AMFConfigurationUpdateFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 6 }, /* HandoverPreparationFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -2, 5 }, /* HandoverFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, -3, 4 }, /* InitialContextSetupFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 4, -4, 3 }, /* NGSetupFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 5, -5, 2 }, /* PathSwitchRequestFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 6, -6, 1 }, /* RANConfigurationUpdateFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 7, -7, 0 } /* UEContextModificationFailure */
};
static asn_CHOICE_specifics_t asn_SPC_NGAP_value_specs_4 = {
	sizeof(struct NGAP_UnsuccessfulOutcome__value),
	offsetof(struct NGAP_UnsuccessfulOutcome__value, _asn_ctx),
	offsetof(struct NGAP_UnsuccessfulOutcome__value, present),
	sizeof(((struct NGAP_UnsuccessfulOutcome__value *)0)->present),
	asn_MAP_NGAP_value_tag2el_4,
	8,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NGAP_value_4 = {
	"value",
	"value",
	&asn_OP_OPEN_TYPE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, 0, OPEN_TYPE_constraint },
	asn_MBR_NGAP_value_4,
	8,	/* Elements count */
	&asn_SPC_NGAP_value_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NGAP_UnsuccessfulOutcome_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_UnsuccessfulOutcome, procedureCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProcedureCode,
		0,
		{ 0, &asn_PER_memb_NGAP_procedureCode_constr_2,  memb_NGAP_procedureCode_constraint_1 },
		0, 0, /* No default value */
		"procedureCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_UnsuccessfulOutcome, criticality),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_Criticality,
		select_UnsuccessfulOutcome_NGAP_criticality_type,
		{ 0, &asn_PER_memb_NGAP_criticality_constr_3,  memb_NGAP_criticality_constraint_1 },
		0, 0, /* No default value */
		"criticality"
		},
	{ ATF_OPEN_TYPE | ATF_NOFLAGS, 0, offsetof(struct NGAP_UnsuccessfulOutcome, value),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NGAP_value_4,
		select_UnsuccessfulOutcome_NGAP_value_type,
		{ 0, &asn_PER_memb_NGAP_value_constr_4,  memb_NGAP_value_constraint_1 },
		0, 0, /* No default value */
		"value"
		},
};
static const ber_tlv_tag_t asn_DEF_NGAP_UnsuccessfulOutcome_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_UnsuccessfulOutcome_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* procedureCode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* criticality */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* value */
};
asn_SEQUENCE_specifics_t asn_SPC_NGAP_UnsuccessfulOutcome_specs_1 = {
	sizeof(struct NGAP_UnsuccessfulOutcome),
	offsetof(struct NGAP_UnsuccessfulOutcome, _asn_ctx),
	asn_MAP_NGAP_UnsuccessfulOutcome_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_UnsuccessfulOutcome = {
	"UnsuccessfulOutcome",
	"UnsuccessfulOutcome",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_UnsuccessfulOutcome_tags_1,
	sizeof(asn_DEF_NGAP_UnsuccessfulOutcome_tags_1)
		/sizeof(asn_DEF_NGAP_UnsuccessfulOutcome_tags_1[0]), /* 1 */
	asn_DEF_NGAP_UnsuccessfulOutcome_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_UnsuccessfulOutcome_tags_1)
		/sizeof(asn_DEF_NGAP_UnsuccessfulOutcome_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGAP_UnsuccessfulOutcome_1,
	3,	/* Elements count */
	&asn_SPC_NGAP_UnsuccessfulOutcome_specs_1	/* Additional specs */
};

