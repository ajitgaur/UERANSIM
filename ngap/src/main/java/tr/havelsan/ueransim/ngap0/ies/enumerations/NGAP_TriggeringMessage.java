package tr.havelsan.ueransim.ngap0.ies.enumerations;

import tr.havelsan.ueransim.ngap0.core.*;

public class NGAP_TriggeringMessage extends NGAP_Enumerated {

    public static final NGAP_TriggeringMessage INITIATING_MESSAGE = new NGAP_TriggeringMessage("initiating-message");
    public static final NGAP_TriggeringMessage SUCCESSFUL_OUTCOME = new NGAP_TriggeringMessage("successful-outcome");
    public static final NGAP_TriggeringMessage UNSUCCESSFULL_OUTCOME = new NGAP_TriggeringMessage("unsuccessfull-outcome");

    protected NGAP_TriggeringMessage(String sValue) {
        super(sValue);
    }

    @Override
    public String getAsnName() {
        return "TriggeringMessage";
    }

    @Override
    public String getXmlTagName() {
        return "TriggeringMessage";
    }
}
