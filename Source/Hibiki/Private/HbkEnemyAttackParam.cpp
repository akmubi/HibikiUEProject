#include "HbkEnemyAttackParam.h"

FHbkEnemyAttackParam::FHbkEnemyAttackParam() {
    this->NoteType = EHbkNote::None;
    this->SyncType = EHbkEmAttackSyncType::EAST_NoSync;
    this->AttackNotifyToManager = false;
    this->Position = FVector(0.0f);
}

