package tr.havelsan.ueransim.ngap0.ies.sequences;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.integers.*;

public class NGAP_CancelledCellsInEAI_NR_Item extends NGAP_Sequence {

    public NGAP_NR_CGI nR_CGI;
    public NGAP_NumberOfBroadcasts numberOfBroadcasts;

    @Override
    public String getAsnName() {
        return "CancelledCellsInEAI-NR-Item";
    }

    @Override
    public String getXmlTagName() {
        return "CancelledCellsInEAI-NR-Item";
    }

    @Override
    public String[] getMemberNames() {
        return new String[]{"nR-CGI", "numberOfBroadcasts"};
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{"nR_CGI", "numberOfBroadcasts"};
    }
}
