package tr.havelsan.ueransim.ngap0.msg;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.NgapMessageType;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.*;
import tr.havelsan.ueransim.ngap0.ies.bit_strings.*;
import tr.havelsan.ueransim.ngap0.ies.octet_strings.*;
import tr.havelsan.ueransim.ngap0.ies.integers.*;

public class NGAP_RerouteNASRequest extends NGAP_BaseMessage {

    public NGAP_RerouteNASRequest() {

    }

    @Override
    public NgapMessageType getMessageType() {
        return NgapMessageType.RerouteNASRequest;
    }

    @Override
    public int getCriticality() {
        return 0;
    }

    @Override
    public int getProcedureCode() {
        return 36;
    }

    @Override
    public int getPduType() {
        return 0;
    }

    @Override
    public int[] getIeId() {
        return new int[]{85, 10, 42, 3, 0};
    }

    @Override
    public int[] getIeCriticality() {
        return new int[]{0, 1, 0, 0, 0};
    }

    @Override
    public Class<? extends NGAP_Value>[] getIeTypes() {
        return new Class[]{NGAP_RAN_UE_NGAP_ID.class, NGAP_AMF_UE_NGAP_ID.class, NGAP_NGAP_Message.class, NGAP_AMFSetID.class, NGAP_AllowedNSSAI.class};
    }

    @Override
    public int[] getIePresence() {
        return new int[]{2, 0, 2, 2, 0};
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
        return "RerouteNASRequest";
    }

    @Override
    public String getXmlTagName() {
        return "RerouteNASRequest";
    }

}
