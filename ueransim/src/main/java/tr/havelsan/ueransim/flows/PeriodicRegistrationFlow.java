package tr.havelsan.ueransim.flows;

import tr.havelsan.ueransim.BaseFlow;
import tr.havelsan.ueransim.IncomingMessage;
import tr.havelsan.ueransim.OutgoingMessage;
import tr.havelsan.ueransim.api.Messaging;
import tr.havelsan.ueransim.api.UeRegistration;
import tr.havelsan.ueransim.configs.RegistrationConfig;
import tr.havelsan.ueransim.core.SimulationContext;
import tr.havelsan.ueransim.nas.impl.enums.ERegistrationType;
import tr.havelsan.ueransim.nas.impl.messages.RegistrationComplete;

public class PeriodicRegistrationFlow extends BaseFlow {
    private final RegistrationConfig config;

    public PeriodicRegistrationFlow(SimulationContext simContext, RegistrationConfig config) {
        super(simContext);
        this.config = config;
    }

    @Override
    public BaseFlow.State main(IncomingMessage message) {
        UeRegistration.sendRegistration(ctx, config, ERegistrationType.PERIODIC_REGISTRATION_UPDATING);
        return this::loop;
    }

    private BaseFlow.State loop(IncomingMessage message) {
        Messaging.handleNgapMessage(ctx, message);
        return this::loop;
    }

    @Override
    public void onReceive(IncomingMessage incomingMessage) {

    }

    @Override
    public void onSent(OutgoingMessage outgoingMessage) {
        if (outgoingMessage.plainNas instanceof RegistrationComplete) {
            flowComplete();
        }
    }
}