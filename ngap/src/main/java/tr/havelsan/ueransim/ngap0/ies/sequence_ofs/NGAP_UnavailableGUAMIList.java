package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;

import java.util.List;

public class NGAP_UnavailableGUAMIList extends NGAP_SequenceOf<NGAP_UnavailableGUAMIItem> {

    public NGAP_UnavailableGUAMIList() {
        super();
    }

    public NGAP_UnavailableGUAMIList(List<NGAP_UnavailableGUAMIItem> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "UnavailableGUAMIList";
    }

    @Override
    public String getXmlTagName() {
        return "UnavailableGUAMIList";
    }

    @Override
    public Class<NGAP_UnavailableGUAMIItem> getItemType() {
        return NGAP_UnavailableGUAMIItem.class;
    }
}
