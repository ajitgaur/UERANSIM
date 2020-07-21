package tr.havelsan.ueransim.ngap0.ies.choices;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.*;

public class NGAP_PWSFailedCellIDList extends NGAP_Choice {

    public NGAP_EUTRA_CGIList eUTRA_CGI_PWSFailedList;
    public NGAP_NR_CGIList nR_CGI_PWSFailedList;

    @Override
    public String getAsnName() {
        return "PWSFailedCellIDList";
    }

    @Override
    public String getXmlTagName() {
        return "PWSFailedCellIDList";
    }

    @Override
    public String[] getMemberNames() {
        return new String[]{"eUTRA-CGI-PWSFailedList", "nR-CGI-PWSFailedList"};
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{"eUTRA_CGI_PWSFailedList", "nR_CGI_PWSFailedList"};
    }
}
