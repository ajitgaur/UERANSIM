package tr.havelsan.ueransim.ngap0.ies.choices;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;

public class NGAP_QosCharacteristics extends NGAP_Choice {

    public NGAP_NonDynamic5QIDescriptor nonDynamic5QI;
    public NGAP_Dynamic5QIDescriptor dynamic5QI;

    @Override
    public String getAsnName() {
        return "QosCharacteristics";
    }

    @Override
    public String getXmlTagName() {
        return "QosCharacteristics";
    }

    @Override
    public String[] getMemberNames() {
        return new String[]{"nonDynamic5QI", "dynamic5QI"};
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{"nonDynamic5QI", "dynamic5QI"};
    }
}
