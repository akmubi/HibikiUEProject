#include "HbkEm5000BridgeBreakdownCommandInput.h"

FHbkEm5000BridgeBreakdownCommandInput::FHbkEm5000BridgeBreakdownCommandInput() {
    this->Result = EHbkBossCommandBattleResult::None;
    this->IsJust = false;
    this->DelayTime = 0.00f;
}

