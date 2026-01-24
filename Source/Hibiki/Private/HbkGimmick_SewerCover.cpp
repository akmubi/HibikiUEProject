#include "HbkGimmick_SewerCover.h"

AHbkGimmick_SewerCover::AHbkGimmick_SewerCover(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->pParticle = NULL;
    this->execParticleNoteCount = 0;
}

void AHbkGimmick_SewerCover::OnBeatSyncEvent(const int32 NoteCount, const bool bDownBeat) {
}

void AHbkGimmick_SewerCover::On16thNoteSyncEvent(const int32 NoteCount, const bool bDownBeat) {
}


