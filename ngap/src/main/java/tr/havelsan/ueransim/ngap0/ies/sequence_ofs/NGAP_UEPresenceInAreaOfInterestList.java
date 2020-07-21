package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;

import java.util.List;

public class NGAP_UEPresenceInAreaOfInterestList extends NGAP_SequenceOf<NGAP_UEPresenceInAreaOfInterestItem> {

    public NGAP_UEPresenceInAreaOfInterestList() {
        super();
    }

    public NGAP_UEPresenceInAreaOfInterestList(List<NGAP_UEPresenceInAreaOfInterestItem> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "UEPresenceInAreaOfInterestList";
    }

    @Override
    public String getXmlTagName() {
        return "UEPresenceInAreaOfInterestList";
    }

    @Override
    public Class<NGAP_UEPresenceInAreaOfInterestItem> getItemType() {
        return NGAP_UEPresenceInAreaOfInterestItem.class;
    }
}
