package tr.havelsan.ueransim.ngap0.ies.bit_strings;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.utils.bits.*;
import tr.havelsan.ueransim.utils.octets.*;

public class NGAP_InterfacesToTrace extends NGAP_BitString {

    public NGAP_InterfacesToTrace(BitString value) {
        super(value);
    }

    public NGAP_InterfacesToTrace(OctetString octetString, int bitLength) {
        super(octetString, bitLength);
    }

    public NGAP_InterfacesToTrace(OctetString octetString) {
        super(octetString);
    }

    public NGAP_InterfacesToTrace(Octet[] octets, int bitLength) {
        super(octets, bitLength);
    }

    public NGAP_InterfacesToTrace(Octet[] octets) {
        super(octets);
    }

    public NGAP_InterfacesToTrace(byte[] octets, int bitLength) {
        super(octets, bitLength);
    }

    public NGAP_InterfacesToTrace(byte[] octets) {
        super(octets);
    }

    public NGAP_InterfacesToTrace(String hex, int bitLength) {
        super(hex, bitLength);
    }

    public NGAP_InterfacesToTrace(String bits) {
        super(bits);
    }

    @Override
    public String getAsnName() {
        return "InterfacesToTrace";
    }

    @Override
    public String getXmlTagName() {
        return "InterfacesToTrace";
    }
}
