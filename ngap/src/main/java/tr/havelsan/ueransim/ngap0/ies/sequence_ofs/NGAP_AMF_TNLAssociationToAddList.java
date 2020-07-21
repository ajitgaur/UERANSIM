package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;

import java.util.List;

public class NGAP_AMF_TNLAssociationToAddList extends NGAP_SequenceOf<NGAP_AMF_TNLAssociationToAddItem> {

    public NGAP_AMF_TNLAssociationToAddList() {
        super();
    }

    public NGAP_AMF_TNLAssociationToAddList(List<NGAP_AMF_TNLAssociationToAddItem> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "AMF-TNLAssociationToAddList";
    }

    @Override
    public String getXmlTagName() {
        return "AMF-TNLAssociationToAddList";
    }

    @Override
    public Class<NGAP_AMF_TNLAssociationToAddItem> getItemType() {
        return NGAP_AMF_TNLAssociationToAddItem.class;
    }
}
