#include "HbkEnemySpawnSeed.h"

FHbkEnemySpawnSeed::FHbkEnemySpawnSeed() {
    this->EnemyId = 0;
    this->EnemyClass = NULL;
    this->AppearAnimIndex = 0;
    this->AppearAnimType = EHbkEnemyAppearType::HatchFloor01;
    this->DelayNoteType = EHbkNote::None;
    this->DelayNoteCount = 0;
    this->StartAIState = EEnemyIntentionState::EIS_Idle;
    this->SpawnSelectedRate = 0.00f;
    this->bIsShowStrongTypeIcon = false;
    this->bIsConvertTypeId = false;
}

