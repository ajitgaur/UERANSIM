/*
 * MIT License
 *
 * Copyright (c) 2020 ALİ GÜNGÖR
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * @author Ali Güngör (aligng1620@gmail.com)
 */

package tr.havelsan.ueransim.api.gnb.ngap;

import tr.havelsan.ueransim.api.gnb.GNodeB;
import tr.havelsan.ueransim.api.sys.Simulation;
import tr.havelsan.ueransim.core.GnbSimContext;
import tr.havelsan.ueransim.events.ue.UeDownlinkNasEvent;
import tr.havelsan.ueransim.nas.NasEncoder;
import tr.havelsan.ueransim.ngap0.ies.bit_strings.NGAP_MaskedIMEISV;
import tr.havelsan.ueransim.ngap0.ies.bit_strings.NGAP_SecurityKey;
import tr.havelsan.ueransim.ngap0.ies.enumerations.NGAP_CauseMisc;
import tr.havelsan.ueransim.ngap0.ies.enumerations.NGAP_PagingPriority;
import tr.havelsan.ueransim.ngap0.ies.integers.NGAP_AMF_UE_NGAP_ID;
import tr.havelsan.ueransim.ngap0.ies.integers.NGAP_IndexToRFSP;
import tr.havelsan.ueransim.ngap0.ies.octet_strings.NGAP_UERadioCapability;
import tr.havelsan.ueransim.ngap0.ies.sequences.NGAP_MobilityRestrictionList;
import tr.havelsan.ueransim.ngap0.ies.sequences.NGAP_UEAggregateMaximumBitRate;
import tr.havelsan.ueransim.ngap0.ies.sequences.NGAP_UESecurityCapabilities;
import tr.havelsan.ueransim.ngap0.msg.*;
import tr.havelsan.ueransim.utils.Debugging;
import tr.havelsan.ueransim.utils.Logging;
import tr.havelsan.ueransim.utils.Tag;

public class NgapUeContextManagement {

    public static void receiveInitialContextSetup(GnbSimContext ctx, NGAP_InitialContextSetupRequest message) {
        Debugging.assertThread(ctx);

        Logging.funcIn("Handling: Initial Context Setup Request");

        var ueId = NgapUeManagement.findAssociatedUeIdDefault(ctx, message);
        var ue = ctx.ueContexts.get(ueId);

        ue.indexToRfsp = message.getProtocolIe(NGAP_IndexToRFSP.class);
        ue.maskedImeiSv = message.getProtocolIe(NGAP_MaskedIMEISV.class);
        ue.aggregateMaximumBitRate = message.getProtocolIe(NGAP_UEAggregateMaximumBitRate.class);
        ue.mobilityRestrictions = message.getProtocolIe(NGAP_MobilityRestrictionList.class);
        ue.radioCapability = message.getProtocolIe(NGAP_UERadioCapability.class);
        ue.securityKey = message.getProtocolIe(NGAP_SecurityKey.class);

        var secCaps = message.getProtocolIe(NGAP_UESecurityCapabilities.class);
        if (isUeSecurityCapabilitiesValid(ctx, secCaps)) {
            ue.securityCapabilities = secCaps;
            GNodeB.sendNgapUeAssociated(ctx, ueId, new NGAP_InitialContextSetupResponse());
        } else {
            var response = new NGAP_InitialContextSetupFailure();
            response.addProtocolIe(NGAP_CauseMisc.UNSPECIFIED);

            GNodeB.sendNgapUeAssociated(ctx, ueId, response);
        }

        var nasMessage = message.getNasMessage();
        if (nasMessage != null) {
            Simulation.pushUeEvent(ctx.simCtx, ueId, new UeDownlinkNasEvent(NasEncoder.nasPduS(nasMessage)));
        }

        Logging.funcOut();
    }

    public static void receiveContextReleaseCommand(GnbSimContext ctx, NGAP_UEContextReleaseCommand message) {
        Debugging.assertThread(ctx);

        Logging.funcIn("Handling: UE Context Release Command (AMF initiated)");

        var ueId = NgapUeManagement.findAssociatedUeForUeNgapIds(ctx, message);

        // todo: NG-RAN node shall release all related signalling and user data transport resources
        // ...

        // send release complete message
        var response = new NGAP_UEContextReleaseComplete();
        GNodeB.sendNgapUeAssociated(ctx, ueId, response);

        ctx.ueContexts.remove(ueId);

        Logging.funcOut();
    }

    public static void receiveContextModificationRequest(GnbSimContext ctx, NGAP_UEContextModificationRequest message) {
        Debugging.assertThread(ctx);

        Logging.funcIn("Handling: UE Context Modification Request");

        var ueId = NgapUeManagement.findAssociatedUeIdDefault(ctx, message);
        var ue = ctx.ueContexts.get(ueId);

        var ieSecurityKey = message.getProtocolIe(NGAP_SecurityKey.class);
        if (ieSecurityKey != null) {
            ue.securityKey = ieSecurityKey;
        }

        var ieSecCaps = message.getProtocolIe(NGAP_UESecurityCapabilities.class);
        if (ieSecCaps != null) {
            if (isUeSecurityCapabilitiesValid(ctx, ieSecCaps)) {
                ue.securityCapabilities = ieSecCaps;
            } else {
                var response = new NGAP_UEContextModificationFailure();
                response.addProtocolIe(NGAP_CauseMisc.UNSPECIFIED);

                GNodeB.sendNgapUeAssociated(ctx, ueId, response);
                Logging.funcOut();
                return;
            }
        }

        var ieIndexToRfsp = message.getProtocolIe(NGAP_IndexToRFSP.class);
        if (ieIndexToRfsp != null) {
            ue.indexToRfsp = ieIndexToRfsp;
        }

        var iePagingPriority = message.getProtocolIe(NGAP_PagingPriority.class);
        if (iePagingPriority != null) {
            ue.pagingPriority = iePagingPriority;
        }

        var ieAggMaxBitRate = message.getProtocolIe(NGAP_UEAggregateMaximumBitRate.class);
        if (ieAggMaxBitRate != null) {
            ue.aggregateMaximumBitRate = ieAggMaxBitRate;
        }

        var ieNewAmfUeNgapId = message.getProtocolIe(NGAP_AMF_UE_NGAP_ID.class, 1);
        if (ieNewAmfUeNgapId != null) {
            long old = ue.amfUeNgapId;
            ue.amfUeNgapId = ieNewAmfUeNgapId.value;
            Logging.info(Tag.PROC, "AMF_UE_NGAP_ID changed from %d to %d.", old, ue.amfUeNgapId);
        }

        GNodeB.sendNgapUeAssociated(ctx, ueId, new NGAP_UEContextModificationResponse());
        Logging.funcOut();
    }

    private static boolean isUeSecurityCapabilitiesValid(GnbSimContext ctx, NGAP_UESecurityCapabilities capabilities) {
        Debugging.assertThread(ctx);

        // todo: check if UE security capabilities are valid
        return true;
    }
}
