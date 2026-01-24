#include "HbkBeginBattleParam.h"

FHbkBeginBattleParam::FHbkBeginBattleParam() {
    this->BattleId = 0;
    this->bNotRecordScore = false;
    this->bSkipPrepareBattle = false;
    this->bSkipPlayerAnim = false;
    this->bSkipBeforeStartBattle = false;
    this->bAutoBattleEnd = false;
    this->ActivateActor = NULL;
    this->FocalPointActor = NULL;
    this->ResultType = EHbkBattleResultType::None;
}

