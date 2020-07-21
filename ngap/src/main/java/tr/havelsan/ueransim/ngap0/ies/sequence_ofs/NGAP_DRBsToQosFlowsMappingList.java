package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;

import java.util.List;

public class NGAP_DRBsToQosFlowsMappingList extends NGAP_SequenceOf<NGAP_DRBsToQosFlowsMappingItem> {

    public NGAP_DRBsToQosFlowsMappingList() {
        super();
    }

    public NGAP_DRBsToQosFlowsMappingList(List<NGAP_DRBsToQosFlowsMappingItem> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "DRBsToQosFlowsMappingList";
    }

    @Override
    public String getXmlTagName() {
        return "DRBsToQosFlowsMappingList";
    }

    @Override
    public Class<NGAP_DRBsToQosFlowsMappingItem> getItemType() {
        return NGAP_DRBsToQosFlowsMappingItem.class;
    }
}
