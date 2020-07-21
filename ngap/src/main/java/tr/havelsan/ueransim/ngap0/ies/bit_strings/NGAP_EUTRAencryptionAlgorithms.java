package tr.havelsan.ueransim.ngap0.ies.bit_strings;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.utils.bits.*;
import tr.havelsan.ueransim.utils.octets.*;

public class NGAP_EUTRAencryptionAlgorithms extends NGAP_BitString {

    public NGAP_EUTRAencryptionAlgorithms(BitString value) {
        super(value);
    }

    public NGAP_EUTRAencryptionAlgorithms(OctetString octetString, int bitLength) {
        super(octetString, bitLength);
    }

    public NGAP_EUTRAencryptionAlgorithms(OctetString octetString) {
        super(octetString);
    }

    public NGAP_EUTRAencryptionAlgorithms(Octet[] octets, int bitLength) {
        super(octets, bitLength);
    }

    public NGAP_EUTRAencryptionAlgorithms(Octet[] octets) {
        super(octets);
    }

    public NGAP_EUTRAencryptionAlgorithms(byte[] octets, int bitLength) {
        super(octets, bitLength);
    }

    public NGAP_EUTRAencryptionAlgorithms(byte[] octets) {
        super(octets);
    }

    public NGAP_EUTRAencryptionAlgorithms(String hex, int bitLength) {
        super(hex, bitLength);
    }

    public NGAP_EUTRAencryptionAlgorithms(String bits) {
        super(bits);
    }

    @Override
    public String getAsnName() {
        return "EUTRAencryptionAlgorithms";
    }

    @Override
    public String getXmlTagName() {
        return "EUTRAencryptionAlgorithms";
    }
}
