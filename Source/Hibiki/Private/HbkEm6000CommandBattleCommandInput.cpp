#include "HbkEm6000CommandBattleCommandInput.h"

FHbkEm6000CommandBattleCommandInput::FHbkEm6000CommandBattleCommandInput() {
    this->Result = EHbkBossCommandBattleResult::None;
    this->IsJust = false;
    this->DelayTime = 0.00f;
    this->bIsFixedResult = false;
    this->ElapsedTimeFromFixedResult = 0.00f;
    this->bIsReactionPlayer = false;
    this->bIsReactionTornado = false;
}

