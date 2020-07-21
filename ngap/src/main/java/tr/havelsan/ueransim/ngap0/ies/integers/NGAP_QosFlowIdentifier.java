package tr.havelsan.ueransim.ngap0.ies.integers;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.utils.octets.*;

public class NGAP_QosFlowIdentifier extends NGAP_Integer {

    public NGAP_QosFlowIdentifier(long value) {
        super(value);
    }

    public NGAP_QosFlowIdentifier(Octet value) {
        super(value);
    }

    public NGAP_QosFlowIdentifier(Octet2 value) {
        super(value);
    }

    public NGAP_QosFlowIdentifier(Octet3 value) {
        super(value);
    }

    public NGAP_QosFlowIdentifier(Octet4 value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "QosFlowIdentifier";
    }

    @Override
    public String getXmlTagName() {
        return "QosFlowIdentifier";
    }
}
