package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;

import java.util.List;

public class NGAP_SupportedTAList extends NGAP_SequenceOf<NGAP_SupportedTAItem> {

    public NGAP_SupportedTAList() {
        super();
    }

    public NGAP_SupportedTAList(List<NGAP_SupportedTAItem> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "SupportedTAList";
    }

    @Override
    public String getXmlTagName() {
        return "SupportedTAList";
    }

    @Override
    public Class<NGAP_SupportedTAItem> getItemType() {
        return NGAP_SupportedTAItem.class;
    }
}
