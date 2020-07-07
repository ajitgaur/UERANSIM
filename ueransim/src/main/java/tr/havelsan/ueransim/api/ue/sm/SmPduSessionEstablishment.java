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
 *
 * @author Ali Güngör (aligng1620@gmail.com)
 */

package tr.havelsan.ueransim.api.ue.sm;

import tr.havelsan.ueransim.configs.PduSessionEstablishmentConfig;
import tr.havelsan.ueransim.core.UeSimContext;
import tr.havelsan.ueransim.nas.NasEncoder;
import tr.havelsan.ueransim.nas.impl.enums.EPduSessionType;
import tr.havelsan.ueransim.nas.impl.ies.*;
import tr.havelsan.ueransim.nas.impl.messages.PduSessionEstablishmentAccept;
import tr.havelsan.ueransim.nas.impl.messages.PduSessionEstablishmentReject;
import tr.havelsan.ueransim.nas.impl.messages.PduSessionEstablishmentRequest;
import tr.havelsan.ueransim.nas.impl.messages.UlNasTransport;
import tr.havelsan.ueransim.utils.Logging;
import tr.havelsan.ueransim.utils.Tag;

class SmPduSessionEstablishment {

    public static void sendEstablishmentRequest(UeSimContext ctx, PduSessionEstablishmentConfig config) {
        Logging.funcIn("Sending PDU Session Establishment Request");

        var pduSessionId = SmPduSessionManagement.allocatePduSessionId(ctx);
        if (pduSessionId == null) {
            Logging.error(Tag.PROC, "PDU Session Establishment Request could not send");
            Logging.funcOut();
            return;
        }

        var procedureTransactionId = SmPduSessionManagement.allocateProcedureTransactionId(ctx);
        if (procedureTransactionId == null) {
            Logging.error(Tag.PROC, "PDU Session Establishment Request could not send");
            SmPduSessionManagement.releasePduSession(ctx, pduSessionId);
            Logging.funcOut();
            return;
        }

        var pduSessionEstablishmentRequest = new PduSessionEstablishmentRequest();
        pduSessionEstablishmentRequest.pduSessionId = pduSessionId;
        pduSessionEstablishmentRequest.pti = procedureTransactionId;
        pduSessionEstablishmentRequest.integrityProtectionMaximumDataRate =
                new IEIntegrityProtectionMaximumDataRate(
                        IEIntegrityProtectionMaximumDataRate.EMaximumDataRatePerUeForUserPlaneIntegrityProtectionForUplink.FULL_DATA_RATE,
                        IEIntegrityProtectionMaximumDataRate.EMaximumDataRatePerUeForUserPlaneIntegrityProtectionForDownlink.FULL_DATA_RATE);
        pduSessionEstablishmentRequest.pduSessionType = new IEPduSessionType(EPduSessionType.IPV4);
        pduSessionEstablishmentRequest.sscMode = new IESscMode(IESscMode.ESscMode.SSC_MODE_1);

        var ulNasTransport = new UlNasTransport();
        ulNasTransport.payloadContainerType = new IEPayloadContainerType(IEPayloadContainerType.EPayloadContainerType.N1_SM_INFORMATION);
        ulNasTransport.payloadContainer = new IEPayloadContainer(NasEncoder.nasPduS(pduSessionEstablishmentRequest));
        ulNasTransport.pduSessionId = new IEPduSessionIdentity2(pduSessionId.intValue());
        ulNasTransport.requestType = new IERequestType(IERequestType.ERequestType.INITIAL_REQUEST);
        ulNasTransport.sNssa = config.sNssai;
        ulNasTransport.dnn = config.dnn;

        ctx.ueTimers.t3580.start();

        SessionManagement.sendSm(ctx, ulNasTransport);

        Logging.funcOut();
    }

    public static void receiveEstablishmentAccept(UeSimContext ctx, PduSessionEstablishmentAccept message) {
        Logging.funcIn("Handling: PDU Session Establishment Accept");

        if (message.smCause != null) {
            Logging.warning(Tag.PROC, "SM cause received in PduSessionEstablishmentAccept: %s", message.smCause.value);
        }

        ctx.ueTimers.t3580.stop();

        SmPduSessionManagement.releaseProcedureTransactionId(ctx, message.pti);

        var pduSession = ctx.smCtx.pduSessions[message.pduSessionId.intValue()];
        if (pduSession == null) {
            Logging.error(Tag.PROC, "PDU session not found: %s", message.pduSessionId);
            Logging.funcOut();
            return;
        }

        pduSession.isEstablished = true;
        pduSession.authorizedQoSRules = message.authorizedQoSRules;
        pduSession.sessionAmbr = message.sessionAmbr;
        pduSession.authorizedQoSFlowDescriptions = message.authorizedQoSFlowDescriptions;

        Logging.info(Tag.PROC, "PDU session established: %s", message.pduSessionId);

        Logging.funcOut();
        return;

        /* TODO
        var pduSessionResourceSetupRequest = message.getNgapMessage(PDUSessionResourceSetupRequest.class);
        if (pduSessionResourceSetupRequest == null) {
            FlowLogging.logUnhandledMessage(message, PDUSessionResourceSetupRequest.class);
            return this::waitPduSessionEstablishmentAccept;
        }

        var gtpTunnel = new GTPTunnel();
        gtpTunnel.transportLayerAddress = new TransportLayerAddress(config.transportLayerAddress.toByteArray(), 32);
        gtpTunnel.gTP_TEID = new GTP_TEID(config.gTpTeid.toByteArray());

        var transfer = new PDUSessionResourceSetupResponseTransfer();
        transfer.qosFlowPerTNLInformation = new QosFlowPerTNLInformation();
        try {
            transfer.qosFlowPerTNLInformation.uPTransportLayerInformation = new UPTransportLayerInformation(UPTransportLayerInformation.ASN_gTPTunnel, gtpTunnel);
        } catch (InvalidStructureException e) {
            throw new RuntimeException(e);
        }
        transfer.qosFlowPerTNLInformation.associatedQosFlowList = new AssociatedQosFlowList();

        var associatedFlowItem = new AssociatedQosFlowItem();
        associatedFlowItem.qosFlowIdentifier = new QosFlowIdentifier(config.qosFlowIdentifier);
        transfer.qosFlowPerTNLInformation.associatedQosFlowList.valueList = Collections.singletonList(associatedFlowItem);

        var list = new PDUSessionResourceSetupListSURes();
        var item = new PDUSessionResourceSetupItemSURes();

        item.pDUSessionID = new PDUSessionID(config.pduSessionId.intValue());
        item.pDUSessionResourceSetupResponseTransfer = new ContainingOctetStringValue(transfer);
        list.valueList = Collections.singletonList(item);

        send(new SendingMessage(new NgapBuilder(NgapProcedure.PDUSessionResourceSetupResponse, NgapCriticality.REJECT)
                .addProtocolIE(list, NgapCriticality.IGNORE, NGAP_Constants__id_PDUSessionResourceSetupListSURes), null));
        */
    }

    public static void receiveEstablishmentReject(UeSimContext ctx, PduSessionEstablishmentReject message) {

    }
}
