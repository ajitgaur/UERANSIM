package tr.havelsan.ueransim.ngap0.ies.choices;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.octet_strings.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;

public class NGAP_LastVisitedCellInformation extends NGAP_Choice {

    public NGAP_LastVisitedNGRANCellInformation nGRANCell;
    public NGAP_LastVisitedEUTRANCellInformation eUTRANCell;
    public NGAP_LastVisitedUTRANCellInformation uTRANCell;
    public NGAP_LastVisitedGERANCellInformation gERANCell;

    @Override
    public String getAsnName() {
        return "LastVisitedCellInformation";
    }

    @Override
    public String getXmlTagName() {
        return "LastVisitedCellInformation";
    }

    @Override
    public String[] getMemberNames() {
        return new String[]{"nGRANCell", "eUTRANCell", "uTRANCell", "gERANCell"};
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{"nGRANCell", "eUTRANCell", "uTRANCell", "gERANCell"};
    }
}
