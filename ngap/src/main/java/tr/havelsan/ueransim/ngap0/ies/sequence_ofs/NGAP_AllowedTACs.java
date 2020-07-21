package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.octet_strings.*;

import java.util.List;

public class NGAP_AllowedTACs extends NGAP_SequenceOf<NGAP_TAC> {

    public NGAP_AllowedTACs() {
        super();
    }

    public NGAP_AllowedTACs(List<NGAP_TAC> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "AllowedTACs";
    }

    @Override
    public String getXmlTagName() {
        return "AllowedTACs";
    }

    @Override
    public Class<NGAP_TAC> getItemType() {
        return NGAP_TAC.class;
    }
}
