package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;

import java.util.List;

public class NGAP_PDUSessionResourceSetupListHOReq extends NGAP_SequenceOf<NGAP_PDUSessionResourceSetupItemHOReq> {

    public NGAP_PDUSessionResourceSetupListHOReq() {
        super();
    }

    public NGAP_PDUSessionResourceSetupListHOReq(List<NGAP_PDUSessionResourceSetupItemHOReq> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "PDUSessionResourceSetupListHOReq";
    }

    @Override
    public String getXmlTagName() {
        return "PDUSessionResourceSetupListHOReq";
    }

    @Override
    public Class<NGAP_PDUSessionResourceSetupItemHOReq> getItemType() {
        return NGAP_PDUSessionResourceSetupItemHOReq.class;
    }
}
