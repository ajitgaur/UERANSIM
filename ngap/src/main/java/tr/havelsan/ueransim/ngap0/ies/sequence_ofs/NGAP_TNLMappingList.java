package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;

import java.util.List;

public class NGAP_TNLMappingList extends NGAP_SequenceOf<NGAP_TNLMappingItem> {

    public NGAP_TNLMappingList() {
        super();
    }

    public NGAP_TNLMappingList(List<NGAP_TNLMappingItem> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "TNLMappingList";
    }

    @Override
    public String getXmlTagName() {
        return "TNLMappingList";
    }

    @Override
    public Class<NGAP_TNLMappingItem> getItemType() {
        return NGAP_TNLMappingItem.class;
    }
}
