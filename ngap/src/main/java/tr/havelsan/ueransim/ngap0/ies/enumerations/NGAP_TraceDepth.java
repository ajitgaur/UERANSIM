package tr.havelsan.ueransim.ngap0.ies.enumerations;

import tr.havelsan.ueransim.ngap0.core.*;

public class NGAP_TraceDepth extends NGAP_Enumerated {

    public static final NGAP_TraceDepth MINIMUM = new NGAP_TraceDepth("minimum");
    public static final NGAP_TraceDepth MEDIUM = new NGAP_TraceDepth("medium");
    public static final NGAP_TraceDepth MAXIMUM = new NGAP_TraceDepth("maximum");
    public static final NGAP_TraceDepth MINIMUMWITHOUTVENDORSPECIFICEXTENSION = new NGAP_TraceDepth("minimumWithoutVendorSpecificExtension");
    public static final NGAP_TraceDepth MEDIUMWITHOUTVENDORSPECIFICEXTENSION = new NGAP_TraceDepth("mediumWithoutVendorSpecificExtension");
    public static final NGAP_TraceDepth MAXIMUMWITHOUTVENDORSPECIFICEXTENSION = new NGAP_TraceDepth("maximumWithoutVendorSpecificExtension");

    protected NGAP_TraceDepth(String sValue) {
        super(sValue);
    }

    @Override
    public String getAsnName() {
        return "TraceDepth";
    }

    @Override
    public String getXmlTagName() {
        return "TraceDepth";
    }
}
