/*
 * MIT License
 *
 * Copyright (c) 2020 ALİ GÜNGÖR
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

package tr.havelsan.ueransim.ngap0;

public enum NgapMessageType {
    AMFConfigurationUpdateAcknowledge,
    AMFConfigurationUpdateFailure,
    AMFConfigurationUpdate,
    AMFStatusIndication,
    CellTrafficTrace,
    DeactivateTrace,
    DownlinkNASTransport,
    DownlinkNonUEAssociatedNRPPaTransport,
    DownlinkRANConfigurationTransfer,
    DownlinkRANStatusTransfer,
    DownlinkUEAssociatedNRPPaTransport,
    ErrorIndication,
    HandoverCancelAcknowledge,
    HandoverCancel,
    HandoverCommand,
    HandoverFailure,
    HandoverNotify,
    HandoverPreparationFailure,
    HandoverRequestAcknowledge,
    HandoverRequest,
    HandoverRequired,
    InitialContextSetupFailure,
    InitialContextSetupRequest,
    InitialContextSetupResponse,
    InitialUEMessage,
    LocationReportingControl,
    LocationReportingFailureIndication,
    LocationReport,
    NASNonDeliveryIndication,
    NGResetAcknowledge,
    NGReset,
    NGSetupFailure,
    NGSetupRequest,
    NGSetupResponse,
    OverloadStart,
    OverloadStop,
    Paging,
    PathSwitchRequestAcknowledge,
    PathSwitchRequestFailure,
    PathSwitchRequest,
    PDUSessionResourceModifyConfirm,
    PDUSessionResourceModifyIndication,
    PDUSessionResourceModifyRequest,
    PDUSessionResourceModifyResponse,
    PDUSessionResourceNotify,
    PDUSessionResourceReleaseCommand,
    PDUSessionResourceReleaseResponse,
    PDUSessionResourceSetupRequest,
    PDUSessionResourceSetupResponse,
    PrivateMessage,
    PWSCancelRequest,
    PWSCancelResponse,
    PWSFailureIndication,
    PWSRestartIndication,
    RANConfigurationUpdateAcknowledge,
    RANConfigurationUpdateFailure,
    RANConfigurationUpdate,
    RerouteNASRequest,
    RRCInactiveTransitionReport,
    TraceFailureIndication,
    TraceStart,
    UEContextModificationFailure,
    UEContextModificationRequest,
    UEContextModificationResponse,
    UEContextReleaseCommand,
    UEContextReleaseComplete,
    UEContextReleaseRequest,
    UERadioCapabilityCheckRequest,
    UERadioCapabilityCheckResponse,
    UERadioCapabilityInfoIndication,
    UETNLABindingReleaseRequest,
    UplinkNASTransport,
    UplinkNonUEAssociatedNRPPaTransport,
    UplinkRANConfigurationTransfer,
    UplinkRANStatusTransfer,
    UplinkUEAssociatedNRPPaTransport,
    WriteReplaceWarningRequest,
    WriteReplaceWarningResponse;
}
