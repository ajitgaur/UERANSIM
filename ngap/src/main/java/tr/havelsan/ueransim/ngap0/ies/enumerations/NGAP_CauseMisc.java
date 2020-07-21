package tr.havelsan.ueransim.ngap0.ies.enumerations;

import tr.havelsan.ueransim.ngap0.core.*;

public class NGAP_CauseMisc extends NGAP_Enumerated {

    public static final NGAP_CauseMisc CONTROL_PROCESSING_OVERLOAD = new NGAP_CauseMisc("control-processing-overload");
    public static final NGAP_CauseMisc NOT_ENOUGH_USER_PLANE_PROCESSING_RESOURCES = new NGAP_CauseMisc("not-enough-user-plane-processing-resources");
    public static final NGAP_CauseMisc HARDWARE_FAILURE = new NGAP_CauseMisc("hardware-failure");
    public static final NGAP_CauseMisc OM_INTERVENTION = new NGAP_CauseMisc("om-intervention");
    public static final NGAP_CauseMisc UNKNOWN_PLMN = new NGAP_CauseMisc("unknown-PLMN");
    public static final NGAP_CauseMisc UNSPECIFIED = new NGAP_CauseMisc("unspecified");

    protected NGAP_CauseMisc(String sValue) {
        super(sValue);
    }

    @Override
    public String getAsnName() {
        return "CauseMisc";
    }

    @Override
    public String getXmlTagName() {
        return "CauseMisc";
    }
}
