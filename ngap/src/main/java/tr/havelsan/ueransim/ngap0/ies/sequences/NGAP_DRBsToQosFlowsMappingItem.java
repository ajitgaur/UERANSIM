package tr.havelsan.ueransim.ngap0.ies.sequences;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.*;
import tr.havelsan.ueransim.ngap0.ies.integers.*;

public class NGAP_DRBsToQosFlowsMappingItem extends NGAP_Sequence {

    public NGAP_DRB_ID dRB_ID;
    public NGAP_AssociatedQosFlowList associatedQosFlowList;

    @Override
    public String getAsnName() {
        return "DRBsToQosFlowsMappingItem";
    }

    @Override
    public String getXmlTagName() {
        return "DRBsToQosFlowsMappingItem";
    }

    @Override
    public String[] getMemberNames() {
        return new String[]{"dRB-ID", "associatedQosFlowList"};
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{"dRB_ID", "associatedQosFlowList"};
    }
}
