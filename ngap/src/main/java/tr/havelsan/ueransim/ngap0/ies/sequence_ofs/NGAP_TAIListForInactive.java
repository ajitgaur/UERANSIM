package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;

import java.util.List;

public class NGAP_TAIListForInactive extends NGAP_SequenceOf<NGAP_TAIListForInactiveItem> {

    public NGAP_TAIListForInactive() {
        super();
    }

    public NGAP_TAIListForInactive(List<NGAP_TAIListForInactiveItem> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "TAIListForInactive";
    }

    @Override
    public String getXmlTagName() {
        return "TAIListForInactive";
    }

    @Override
    public Class<NGAP_TAIListForInactiveItem> getItemType() {
        return NGAP_TAIListForInactiveItem.class;
    }
}
