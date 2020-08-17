package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.pdu.*;
import tr.havelsan.ueransim.utils.bits.*;
import tr.havelsan.ueransim.utils.octets.*;
import tr.havelsan.ueransim.ngap0.ies.bit_strings.*;
import tr.havelsan.ueransim.ngap0.ies.octet_strings.*;
import tr.havelsan.ueransim.ngap0.ies.printable_strings.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.*;
import tr.havelsan.ueransim.ngap0.ies.choices.*;
import tr.havelsan.ueransim.ngap0.ies.integers.*;
import tr.havelsan.ueransim.ngap0.ies.enumerations.*;

import java.util.List;

public class NGAP_CellIDCancelledEUTRA extends NGAP_SequenceOf<NGAP_CellIDCancelledEUTRA_Item> {

    public NGAP_CellIDCancelledEUTRA() {
        super();
    }

    public NGAP_CellIDCancelledEUTRA(List<NGAP_CellIDCancelledEUTRA_Item> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "CellIDCancelledEUTRA";
    }

    @Override
    public String getXmlTagName() {
        return "CellIDCancelledEUTRA";
    }

    @Override
    public Class<NGAP_CellIDCancelledEUTRA_Item> getItemType() {
        return NGAP_CellIDCancelledEUTRA_Item.class;
    }
}
