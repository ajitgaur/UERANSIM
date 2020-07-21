package tr.havelsan.ueransim.ngap0.ies.enumerations;

import tr.havelsan.ueransim.ngap0.core.*;

public class NGAP_OverloadAction extends NGAP_Enumerated {

    public static final NGAP_OverloadAction REJECT_NON_EMERGENCY_MO_DT = new NGAP_OverloadAction("reject-non-emergency-mo-dt");
    public static final NGAP_OverloadAction REJECT_RRC_CR_SIGNALLING = new NGAP_OverloadAction("reject-rrc-cr-signalling");
    public static final NGAP_OverloadAction PERMIT_EMERGENCY_SESSIONS_AND_MOBILE_TERMINATED_SERVICES_ONLY = new NGAP_OverloadAction("permit-emergency-sessions-and-mobile-terminated-services-only");
    public static final NGAP_OverloadAction PERMIT_HIGH_PRIORITY_SESSIONS_AND_MOBILE_TERMINATED_SERVICES_ONLY = new NGAP_OverloadAction("permit-high-priority-sessions-and-mobile-terminated-services-only");

    protected NGAP_OverloadAction(String sValue) {
        super(sValue);
    }

    @Override
    public String getAsnName() {
        return "OverloadAction";
    }

    @Override
    public String getXmlTagName() {
        return "OverloadAction";
    }
}
