#include "HbkSpectraBattleData.h"

FHbkSpectraBattleData::FHbkSpectraBattleData() {
    this->ConditionType = EHbkSpectraBattleConditionType::NoteCount;
    this->AdditionInfo = 0.00f;
    this->bUseTimer = false;
    this->NoteCount = 0;
    this->BattleId = 0;
}

