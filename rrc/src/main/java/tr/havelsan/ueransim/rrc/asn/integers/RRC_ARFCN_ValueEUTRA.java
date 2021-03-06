/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.integers;

import tr.havelsan.ueransim.asn.core.AsnInteger;

// VALUE(0..262143)
public class RRC_ARFCN_ValueEUTRA extends AsnInteger {
    public RRC_ARFCN_ValueEUTRA() {
    }
    
    public RRC_ARFCN_ValueEUTRA(long value) {
        super(value);
    }
}

