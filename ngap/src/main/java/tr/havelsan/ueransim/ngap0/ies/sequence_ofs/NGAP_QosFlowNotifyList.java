package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;

import java.util.List;

public class NGAP_QosFlowNotifyList extends NGAP_SequenceOf<NGAP_QosFlowNotifyItem> {

    public NGAP_QosFlowNotifyList() {
        super();
    }

    public NGAP_QosFlowNotifyList(List<NGAP_QosFlowNotifyItem> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "QosFlowNotifyList";
    }

    @Override
    public String getXmlTagName() {
        return "QosFlowNotifyList";
    }

    @Override
    public Class<NGAP_QosFlowNotifyItem> getItemType() {
        return NGAP_QosFlowNotifyItem.class;
    }
}
