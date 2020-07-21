package tr.havelsan.ueransim.ngap0.ies.enumerations;

import tr.havelsan.ueransim.ngap0.core.*;

public class NGAP_Criticality extends NGAP_Enumerated {

    public static final NGAP_Criticality REJECT = new NGAP_Criticality("reject");
    public static final NGAP_Criticality IGNORE = new NGAP_Criticality("ignore");
    public static final NGAP_Criticality NOTIFY = new NGAP_Criticality("notify");

    protected NGAP_Criticality(String sValue) {
        super(sValue);
    }

    @Override
    public String getAsnName() {
        return "Criticality";
    }

    @Override
    public String getXmlTagName() {
        return "Criticality";
    }
}
