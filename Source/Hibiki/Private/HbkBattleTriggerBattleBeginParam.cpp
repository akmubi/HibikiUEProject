#include "HbkBattleTriggerBattleBeginParam.h"

FHbkBattleTriggerBattleBeginParam::FHbkBattleTriggerBattleBeginParam() {
    this->BattleId = 0;
    this->bNotRecordScore = false;
    this->bSkipPrepareBattle = false;
    this->bSkipPlayerAnim = false;
    this->bSkipBeforeStartBattle = false;
    this->bAutoBattleEnd = false;
    this->FocalPointActor = NULL;
    this->ResultType = EHbkBattleResultType::None;
    this->ActivateActor = NULL;
    this->bCopyActivateActorList = false;
}

