package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;

import java.util.List;

public class NGAP_AllowedNSSAI extends NGAP_SequenceOf<NGAP_AllowedNSSAI_Item> {

    public NGAP_AllowedNSSAI() {
        super();
    }

    public NGAP_AllowedNSSAI(List<NGAP_AllowedNSSAI_Item> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "AllowedNSSAI";
    }

    @Override
    public String getXmlTagName() {
        return "AllowedNSSAI";
    }

    @Override
    public Class<NGAP_AllowedNSSAI_Item> getItemType() {
        return NGAP_AllowedNSSAI_Item.class;
    }
}
