#include "HbkEnemyFireGroup_Em7500Straight.h"

AHbkEnemyFireGroup_Em7500Straight::AHbkEnemyFireGroup_Em7500Straight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsSpawn = true;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->SpawnCount = 0;
    this->SpawnCountMax = 0;
    this->StraightFireGroupType = EHbkEm7500StraightFireGroupType::GroundSlashAlpha;
    this->CheckTraceChannel = TraceTypeQuery1;
    this->CheckTraceRadius = 50.00f;
    this->bIsVisibleHitCheck = false;
}


