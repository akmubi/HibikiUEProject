#include "HbkSaveGameDetailGameData.h"

FHbkSaveGameDetailGameData::FHbkSaveGameDetailGameData() {
    this->PlayTimeSec = 0;
    this->PlayStageNumber = 0;
    this->ClearedStageNumber = 0;
    this->Difficulty = 0;
    this->bAfterLoadGotoHideOut = false;
    this->CheckpointDateTime = FDateTime(0);
}

