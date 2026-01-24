#include "HbkGameplayTask_EVLabEnemySupply.h"

FHbkGameplayTask_EVLabEnemySupply::FHbkGameplayTask_EVLabEnemySupply() {
    this->TutorialMode = FHbkGameplayTask_EVLabEnemyTutorialMode::Parry;
    this->SpawnSyncNote = EHbkNote::None;
    this->SpawnSyncCount = 0;
    this->bForEventScene = false;
}

