package tr.havelsan.ueransim.ngap0.ies.choices;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.*;

public class NGAP_BroadcastCompletedAreaList extends NGAP_Choice {

    public NGAP_CellIDBroadcastEUTRA cellIDBroadcastEUTRA;
    public NGAP_TAIBroadcastEUTRA tAIBroadcastEUTRA;
    public NGAP_EmergencyAreaIDBroadcastEUTRA emergencyAreaIDBroadcastEUTRA;
    public NGAP_CellIDBroadcastNR cellIDBroadcastNR;
    public NGAP_TAIBroadcastNR tAIBroadcastNR;
    public NGAP_EmergencyAreaIDBroadcastNR emergencyAreaIDBroadcastNR;

    @Override
    public String getAsnName() {
        return "BroadcastCompletedAreaList";
    }

    @Override
    public String getXmlTagName() {
        return "BroadcastCompletedAreaList";
    }

    @Override
    public String[] getMemberNames() {
        return new String[]{"cellIDBroadcastEUTRA", "tAIBroadcastEUTRA", "emergencyAreaIDBroadcastEUTRA", "cellIDBroadcastNR", "tAIBroadcastNR", "emergencyAreaIDBroadcastNR"};
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{"cellIDBroadcastEUTRA", "tAIBroadcastEUTRA", "emergencyAreaIDBroadcastEUTRA", "cellIDBroadcastNR", "tAIBroadcastNR", "emergencyAreaIDBroadcastNR"};
    }
}
