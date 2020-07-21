package tr.havelsan.ueransim.ngap0.ies.sequences;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.ies.bit_strings.*;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.*;
import tr.havelsan.ueransim.ngap0.ies.choices.*;
import tr.havelsan.ueransim.ngap0.ies.enumerations.*;

public class NGAP_CoreNetworkAssistanceInformation extends NGAP_Sequence {

    public NGAP_UEIdentityIndexValue uEIdentityIndexValue;
    public NGAP_PagingDRX uESpecificDRX;
    public NGAP_PeriodicRegistrationUpdateTimer periodicRegistrationUpdateTimer;
    public NGAP_MICOModeIndication mICOModeIndication;
    public NGAP_TAIListForInactive tAIListForInactive;
    public NGAP_ExpectedUEBehaviour expectedUEBehaviour;

    @Override
    public String getAsnName() {
        return "CoreNetworkAssistanceInformation";
    }

    @Override
    public String getXmlTagName() {
        return "CoreNetworkAssistanceInformation";
    }

    @Override
    public String[] getMemberNames() {
        return new String[]{"uEIdentityIndexValue", "uESpecificDRX", "periodicRegistrationUpdateTimer", "mICOModeIndication", "tAIListForInactive", "expectedUEBehaviour"};
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{"uEIdentityIndexValue", "uESpecificDRX", "periodicRegistrationUpdateTimer", "mICOModeIndication", "tAIListForInactive", "expectedUEBehaviour"};
    }
}
