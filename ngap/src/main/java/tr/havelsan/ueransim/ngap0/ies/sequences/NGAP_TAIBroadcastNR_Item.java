package tr.havelsan.ueransim.ngap0.ies.sequences;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.*;

public class NGAP_TAIBroadcastNR_Item extends NGAP_Sequence {

    public NGAP_TAI tAI;
    public NGAP_CompletedCellsInTAI_NR completedCellsInTAI_NR;

    @Override
    public String getAsnName() {
        return "TAIBroadcastNR-Item";
    }

    @Override
    public String getXmlTagName() {
        return "TAIBroadcastNR-Item";
    }

    @Override
    public String[] getMemberNames() {
        return new String[]{"tAI", "completedCellsInTAI-NR"};
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{"tAI", "completedCellsInTAI_NR"};
    }
}
