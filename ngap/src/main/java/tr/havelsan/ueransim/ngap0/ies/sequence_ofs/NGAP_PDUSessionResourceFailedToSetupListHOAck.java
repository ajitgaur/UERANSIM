package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;

import java.util.List;

public class NGAP_PDUSessionResourceFailedToSetupListHOAck extends NGAP_SequenceOf<NGAP_PDUSessionResourceFailedToSetupItemHOAck> {

    public NGAP_PDUSessionResourceFailedToSetupListHOAck() {
        super();
    }

    public NGAP_PDUSessionResourceFailedToSetupListHOAck(List<NGAP_PDUSessionResourceFailedToSetupItemHOAck> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "PDUSessionResourceFailedToSetupListHOAck";
    }

    @Override
    public String getXmlTagName() {
        return "PDUSessionResourceFailedToSetupListHOAck";
    }

    @Override
    public Class<NGAP_PDUSessionResourceFailedToSetupItemHOAck> getItemType() {
        return NGAP_PDUSessionResourceFailedToSetupItemHOAck.class;
    }
}
