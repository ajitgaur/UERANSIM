package tr.havelsan.ueransim.ngap0.ies.sequences;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.pdu.*;
import tr.havelsan.ueransim.utils.bits.*;
import tr.havelsan.ueransim.utils.octets.*;
import tr.havelsan.ueransim.ngap0.ies.bit_strings.*;
import tr.havelsan.ueransim.ngap0.ies.octet_strings.*;
import tr.havelsan.ueransim.ngap0.ies.printable_strings.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.*;
import tr.havelsan.ueransim.ngap0.ies.choices.*;
import tr.havelsan.ueransim.ngap0.ies.integers.*;
import tr.havelsan.ueransim.ngap0.ies.enumerations.*;

import java.util.List;

public class NGAP_TNLInformationItem extends NGAP_Sequence {

    public NGAP_QosFlowPerTNLInformation qosFlowPerTNLInformation;

    @Override
    public String getAsnName() {
        return "TNLInformationItem";
    }

    @Override
    public String getXmlTagName() {
        return "TNLInformationItem";
    }

    @Override
    public String[] getMemberNames() {
        return new String[]{"qosFlowPerTNLInformation"};
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{"qosFlowPerTNLInformation"};
    }
}
