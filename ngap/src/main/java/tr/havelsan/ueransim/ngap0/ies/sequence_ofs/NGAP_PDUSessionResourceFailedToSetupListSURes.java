package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;

import java.util.List;

public class NGAP_PDUSessionResourceFailedToSetupListSURes extends NGAP_SequenceOf<NGAP_PDUSessionResourceFailedToSetupItemSURes> {

    public NGAP_PDUSessionResourceFailedToSetupListSURes() {
        super();
    }

    public NGAP_PDUSessionResourceFailedToSetupListSURes(List<NGAP_PDUSessionResourceFailedToSetupItemSURes> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "PDUSessionResourceFailedToSetupListSURes";
    }

    @Override
    public String getXmlTagName() {
        return "PDUSessionResourceFailedToSetupListSURes";
    }

    @Override
    public Class<NGAP_PDUSessionResourceFailedToSetupItemSURes> getItemType() {
        return NGAP_PDUSessionResourceFailedToSetupItemSURes.class;
    }
}
