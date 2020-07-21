package tr.havelsan.ueransim.ngap0.ies.sequences;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.*;
import tr.havelsan.ueransim.ngap0.ies.choices.*;

public class NGAP_HandoverCommandTransfer extends NGAP_Sequence {

    public NGAP_UPTransportLayerInformation dLForwardingUP_TNLInformation;
    public NGAP_QosFlowToBeForwardedList qosFlowToBeForwardedList;
    public NGAP_DataForwardingResponseDRBList dataForwardingResponseDRBList;

    @Override
    public String getAsnName() {
        return "HandoverCommandTransfer";
    }

    @Override
    public String getXmlTagName() {
        return "HandoverCommandTransfer";
    }

    @Override
    public String[] getMemberNames() {
        return new String[]{"dLForwardingUP-TNLInformation", "qosFlowToBeForwardedList", "dataForwardingResponseDRBList"};
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{"dLForwardingUP_TNLInformation", "qosFlowToBeForwardedList", "dataForwardingResponseDRBList"};
    }
}
