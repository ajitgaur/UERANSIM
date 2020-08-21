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

package tr.havelsan.ueransim.app.api.gnb.ngap;

import tr.havelsan.ueransim.app.core.GnbSimContext;
import tr.havelsan.ueransim.app.exceptions.NgapErrorException;
import tr.havelsan.ueransim.ngap0.core.NGAP_BaseMessage;
import tr.havelsan.ueransim.ngap0.ies.choices.NGAP_UE_NGAP_IDs;
import tr.havelsan.ueransim.ngap0.ies.enumerations.NGAP_CauseProtocol;
import tr.havelsan.ueransim.ngap0.ies.enumerations.NGAP_CauseRadioNetwork;
import tr.havelsan.ueransim.ngap0.ies.integers.NGAP_AMF_UE_NGAP_ID;
import tr.havelsan.ueransim.ngap0.ies.integers.NGAP_RAN_UE_NGAP_ID;
import tr.havelsan.ueransim.app.structs.GnbUeContext;
import tr.havelsan.ueransim.app.structs.Guami;
import tr.havelsan.ueransim.app.utils.Debugging;
import tr.havelsan.ueransim.utils.Logging;
import tr.havelsan.ueransim.utils.Tag;
import tr.havelsan.ueransim.utils.Utils;
import tr.havelsan.ueransim.utils.bits.Bit10;

import java.util.UUID;

public class NgapUeManagement {

    public static void createUeContext(GnbSimContext ctx, UUID ueId) {
        Debugging.assertThread(ctx);

        var gnbUeCtx = new GnbUeContext(ueId);
        gnbUeCtx.ranUeNgapId = ++ctx.ueNgapIdCounter;
        gnbUeCtx.amfUeNgapId = null;

        ctx.ueContexts.put(ueId, gnbUeCtx);
        selectAmfForUe(ctx, gnbUeCtx);
    }

    private static UUID findUeByRanId(GnbSimContext ctx, long ranUeNgapId) {
        Debugging.assertThread(ctx);

        // todo: make O(1)
        for (var entry : ctx.ueContexts.entrySet()) {
            if (entry.getValue().ranUeNgapId == ranUeNgapId) {
                return entry.getKey();
            }
        }
        return null;
    }

    private static UUID findUeByAmfId(GnbSimContext ctx, long amfUeNgapId) {
        Debugging.assertThread(ctx);

        // todo: make O(1)
        for (var entry : ctx.ueContexts.entrySet()) {
            if (entry.getValue().amfUeNgapId == amfUeNgapId) {
                return entry.getKey();
            }
        }
        return null;
    }

    private static void selectAmfForUe(GnbSimContext ctx, GnbUeContext ueCtx) {
        Debugging.assertThread(ctx);

        // todo: always first configured AMF is selected for now
        ueCtx.associatedAmf = ctx.config.amfConfigs[0].guami;
    }

    public static Guami selectNewAmfForReAllocation(GnbSimContext ctx, Guami initiatedAmf, Bit10 amfSetId) {
        Debugging.assertThread(ctx);

        Logging.funcIn("Handling: Select AMF from AMFSetId");
        Logging.debug(Tag.VALUE, "AMFSetId: %s", amfSetId);

        Guami res = null;

        // Filter the AMFs with MCC-MNC-RegionId-SetId
        var amfs = Utils.streamToList(ctx.amfContexts.values().stream().filter(gnbAmfContext ->
                gnbAmfContext.guami.mcc.equals(initiatedAmf.mcc)
                        && gnbAmfContext.guami.mnc.equals(initiatedAmf.mnc)
                        && gnbAmfContext.guami.amfRegionId.equals(initiatedAmf.amfRegionId)
                        && gnbAmfContext.guami.amfSetId.equals(amfSetId)));

        // If set id is the same, select a different AMF from initiated AMF
        if (amfSetId.equals(initiatedAmf.amfSetId)) {
            amfs = Utils.streamToList(amfs.stream().filter(gnbAmfContext ->
                    !gnbAmfContext.guami.amfPointer.equals(initiatedAmf.amfPointer)));
        }

        // Take the first AMF satisfying above conditions
        if (!amfs.isEmpty()) {
            res = amfs.get(0).guami;
        }

        Logging.funcOut();
        return res;
    }

    private static UUID findAssociatedUeId(GnbSimContext ctx, NGAP_AMF_UE_NGAP_ID amfUeNgapId, NGAP_RAN_UE_NGAP_ID ranUeNgapId) {
        Debugging.assertThread(ctx);

        if (amfUeNgapId == null || ranUeNgapId == null) {
            throw new NgapErrorException(NGAP_CauseProtocol.ABSTRACT_SYNTAX_ERROR_FALSELY_CONSTRUCTED_MESSAGE);
        }

        long amf = amfUeNgapId.value;
        long ran = ranUeNgapId.value;

        var associatedUe = NgapUeManagement.findUeByRanId(ctx, ran);
        if (associatedUe == null) {
            throw new NgapErrorException(NGAP_CauseRadioNetwork.UNKNOWN_LOCAL_UE_NGAP_ID);
        }

        var gnbUeContext = ctx.ueContexts.get(associatedUe);
        if (gnbUeContext.amfUeNgapId == null) {
            gnbUeContext.amfUeNgapId = amf;
        } else if (amf != gnbUeContext.amfUeNgapId) {
            throw new NgapErrorException(NGAP_CauseRadioNetwork.INCONSISTENT_REMOTE_UE_NGAP_ID);
        }

        return associatedUe;
    }

    private static UUID findAssociatedUeId(GnbSimContext ctx, NGAP_UE_NGAP_IDs ueNgapIDs) {
        Debugging.assertThread(ctx);
        if (ueNgapIDs == null) {
            throw new NgapErrorException(NGAP_CauseProtocol.ABSTRACT_SYNTAX_ERROR_FALSELY_CONSTRUCTED_MESSAGE);
        }
        if (ueNgapIDs.uE_NGAP_ID_pair != null) {
            return findAssociatedUeId(ctx, ueNgapIDs.uE_NGAP_ID_pair.aMF_UE_NGAP_ID, ueNgapIDs.uE_NGAP_ID_pair.rAN_UE_NGAP_ID);
        }
        if (ueNgapIDs.aMF_UE_NGAP_ID != null) {
            var ue = findUeByAmfId(ctx, ueNgapIDs.aMF_UE_NGAP_ID.value);
            if (ue != null) return ue;
            throw new NgapErrorException(NGAP_CauseRadioNetwork.INCONSISTENT_REMOTE_UE_NGAP_ID);
        }
        throw new NgapErrorException(NGAP_CauseProtocol.ABSTRACT_SYNTAX_ERROR_FALSELY_CONSTRUCTED_MESSAGE);
    }

    public static UUID findAssociatedUeIdDefault(GnbSimContext ctx, NGAP_BaseMessage ngapMessage) {
        Debugging.assertThread(ctx);

        var ieAmfUeNgapId = ngapMessage.getProtocolIe(NGAP_AMF_UE_NGAP_ID.class);
        var ieRanUeNgapId = ngapMessage.getProtocolIe(NGAP_RAN_UE_NGAP_ID.class);
        return findAssociatedUeId(ctx, ieAmfUeNgapId, ieRanUeNgapId);
    }

    public static UUID findAssociatedUeForUeNgapIds(GnbSimContext ctx, NGAP_BaseMessage message) {
        Debugging.assertThread(ctx);

        var ie = message.getProtocolIe(NGAP_UE_NGAP_IDs.class);
        return findAssociatedUeId(ctx, ie);
    }
}
