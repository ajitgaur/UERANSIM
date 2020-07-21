package tr.havelsan.ueransim.ngap0.msg;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.NgapMessageType;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;
import tr.havelsan.ueransim.ngap0.ies.integers.*;
import tr.havelsan.ueransim.ngap0.ies.enumerations.*;

public class NGAP_PathSwitchRequestAcknowledge extends NGAP_BaseMessage {

    public NGAP_PathSwitchRequestAcknowledge() {

    }

    @Override
    public NgapMessageType getMessageType() {
        return NgapMessageType.PathSwitchRequestAcknowledge;
    }

    @Override
    public int getCriticality() {
        return 0;
    }

    @Override
    public int getProcedureCode() {
        return 25;
    }

    @Override
    public int getPduType() {
        return 1;
    }

    @Override
    public int[] getIeId() {
        return new int[]{10, 85, 119, 93, 41, 77, 68, 0, 18, 91, 19};
    }

    @Override
    public int[] getIeCriticality() {
        return new int[]{1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1};
    }

    @Override
    public Class<? extends NGAP_Value>[] getIeTypes() {
        return new Class[]{NGAP_AMF_UE_NGAP_ID.class, NGAP_RAN_UE_NGAP_ID.class, NGAP_UESecurityCapabilities.class, NGAP_SecurityContext.class, NGAP_NewSecurityContextInd.class, NGAP_PDUSessionResourceSwitchedList.class, NGAP_PDUSessionResourceReleasedListPSAck.class, NGAP_AllowedNSSAI.class, NGAP_CoreNetworkAssistanceInformation.class, NGAP_RRCInactiveTransitionReportRequest.class, NGAP_CriticalityDiagnostics.class};
    }

    @Override
    public int[] getIePresence() {
        return new int[]{2, 2, 0, 2, 0, 2, 0, 2, 0, 0, 0};
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{"protocolIEs"};
    }

    @Override
    public String[] getMemberNames() {
        return new String[]{"protocolIEs"};
    }

    @Override
    public String getAsnName() {
        return "PathSwitchRequestAcknowledge";
    }

    @Override
    public String getXmlTagName() {
        return "PathSwitchRequestAcknowledge";
    }

}
