/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.app.ue.rrc;

import tr.havelsan.ueransim.app.common.contexts.UeRrcContext;
import tr.havelsan.ueransim.rrc.RrcMessage;
import tr.havelsan.ueransim.rrc.asn.choices.RRC_InitialUE_Identity;
import tr.havelsan.ueransim.rrc.asn.core.RRC_BitString;
import tr.havelsan.ueransim.rrc.asn.enums.RRC_EstablishmentCause;
import tr.havelsan.ueransim.rrc.asn.sequences.RRC_RRCSetupRequest;
import tr.havelsan.ueransim.rrc.asn.sequences.RRC_RRCSetupRequest_IEs;
import tr.havelsan.ueransim.utils.bits.BitString;

public class RrcConnectionManagement {

    public static void sendRrcSetupRequest(UeRrcContext ctx) {
        RRC_RRCSetupRequest rrc = new RRC_RRCSetupRequest();
        rrc.rrcSetupRequest = new RRC_RRCSetupRequest_IEs();
        rrc.rrcSetupRequest.establishmentCause = RRC_EstablishmentCause.MO_DATA;
        rrc.rrcSetupRequest.ue_Identity = new RRC_InitialUE_Identity();
        rrc.rrcSetupRequest.ue_Identity.randomValue = new RRC_BitString(new BitString());
        rrc.rrcSetupRequest.ue_Identity.randomValue.value.clear(38); // 39-bit full zero bit-string

        RrcTransport.sendRrcMessage(ctx, new RrcMessage(rrc));
    }
}
