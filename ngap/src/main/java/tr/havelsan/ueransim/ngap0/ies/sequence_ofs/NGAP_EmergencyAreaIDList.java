package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.octet_strings.*;

import java.util.List;

public class NGAP_EmergencyAreaIDList extends NGAP_SequenceOf<NGAP_EmergencyAreaID> {

    public NGAP_EmergencyAreaIDList() {
        super();
    }

    public NGAP_EmergencyAreaIDList(List<NGAP_EmergencyAreaID> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "EmergencyAreaIDList";
    }

    @Override
    public String getXmlTagName() {
        return "EmergencyAreaIDList";
    }

    @Override
    public Class<NGAP_EmergencyAreaID> getItemType() {
        return NGAP_EmergencyAreaID.class;
    }
}
