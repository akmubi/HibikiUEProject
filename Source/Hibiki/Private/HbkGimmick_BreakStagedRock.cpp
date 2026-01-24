#include "HbkGimmick_BreakStagedRock.h"

AHbkGimmick_BreakStagedRock::AHbkGimmick_BreakStagedRock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->ImpulseBaseComp = NULL;
    this->OverlapImpulseRate = 100.00f;
    this->ActivateImpulseRate = 100.00f;
    this->BreakNoteCount = 1;
}

void AHbkGimmick_BreakStagedRock::OnNoteQuarter(int32 NoteCount, bool bDownBeat) {
}


