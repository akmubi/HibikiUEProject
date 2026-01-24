#include "HbkGimmick_RhythmLaserController.h"

AHbkGimmick_RhythmLaserController::AHbkGimmick_RhythmLaserController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->useSignificance = true;
    this->HbkGimmick_RhythmLaserClass = NULL;
    this->RhythmLasers.AddDefaulted(16);
    this->bSaved = false;
    this->bActive = false;
    this->MovementPatternIndex = 0;
    this->IrradiateParamIndex = -1;
}

void AHbkGimmick_RhythmLaserController::OnAttackSyncEvent(int32 NoteCount, bool bDownBeat) {
}


