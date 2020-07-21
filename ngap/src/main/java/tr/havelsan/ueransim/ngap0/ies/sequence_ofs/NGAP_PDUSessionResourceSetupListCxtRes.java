package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;

import java.util.List;

public class NGAP_PDUSessionResourceSetupListCxtRes extends NGAP_SequenceOf<NGAP_PDUSessionResourceSetupItemCxtRes> {

    public NGAP_PDUSessionResourceSetupListCxtRes() {
        super();
    }

    public NGAP_PDUSessionResourceSetupListCxtRes(List<NGAP_PDUSessionResourceSetupItemCxtRes> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "PDUSessionResourceSetupListCxtRes";
    }

    @Override
    public String getXmlTagName() {
        return "PDUSessionResourceSetupListCxtRes";
    }

    @Override
    public Class<NGAP_PDUSessionResourceSetupItemCxtRes> getItemType() {
        return NGAP_PDUSessionResourceSetupItemCxtRes.class;
    }
}
