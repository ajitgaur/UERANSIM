package tr.havelsan.ueransim.ngap0.ies.integers;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.utils.octets.*;

public class NGAP_TNLAddressWeightFactor extends NGAP_Integer {

    public NGAP_TNLAddressWeightFactor(long value) {
        super(value);
    }

    public NGAP_TNLAddressWeightFactor(Octet value) {
        super(value);
    }

    public NGAP_TNLAddressWeightFactor(Octet2 value) {
        super(value);
    }

    public NGAP_TNLAddressWeightFactor(Octet3 value) {
        super(value);
    }

    public NGAP_TNLAddressWeightFactor(Octet4 value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "TNLAddressWeightFactor";
    }

    @Override
    public String getXmlTagName() {
        return "TNLAddressWeightFactor";
    }
}
