package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;

import java.util.List;

public class NGAP_PDUSessionResourceReleasedListRelRes extends NGAP_SequenceOf<NGAP_PDUSessionResourceReleasedItemRelRes> {

    public NGAP_PDUSessionResourceReleasedListRelRes() {
        super();
    }

    public NGAP_PDUSessionResourceReleasedListRelRes(List<NGAP_PDUSessionResourceReleasedItemRelRes> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "PDUSessionResourceReleasedListRelRes";
    }

    @Override
    public String getXmlTagName() {
        return "PDUSessionResourceReleasedListRelRes";
    }

    @Override
    public Class<NGAP_PDUSessionResourceReleasedItemRelRes> getItemType() {
        return NGAP_PDUSessionResourceReleasedItemRelRes.class;
    }
}
