package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;

import java.util.List;

public class NGAP_AMF_TNLAssociationSetupList extends NGAP_SequenceOf<NGAP_AMF_TNLAssociationSetupItem> {

    public NGAP_AMF_TNLAssociationSetupList() {
        super();
    }

    public NGAP_AMF_TNLAssociationSetupList(List<NGAP_AMF_TNLAssociationSetupItem> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "AMF-TNLAssociationSetupList";
    }

    @Override
    public String getXmlTagName() {
        return "AMF-TNLAssociationSetupList";
    }

    @Override
    public Class<NGAP_AMF_TNLAssociationSetupItem> getItemType() {
        return NGAP_AMF_TNLAssociationSetupItem.class;
    }
}
