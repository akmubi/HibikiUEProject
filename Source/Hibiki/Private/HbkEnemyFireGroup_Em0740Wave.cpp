#include "HbkEnemyFireGroup_Em0740Wave.h"

AHbkEnemyFireGroup_Em0740Wave::AHbkEnemyFireGroup_Em0740Wave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnMoveDistance = 100.00f;
    this->MoveTotalDistance = 3000.00f;
    this->DivUnitDistance = 600.00f;
    this->DivWaitNoteType = EHbkNote::Note_8th;
    this->ActivateWaitNoteType = EHbkNote::Note_Quarter;
    this->ActivateWaitNoteCount = 1.00f;
}


