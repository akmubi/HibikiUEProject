#include "HbkGimmick_DistantLightning.h"

AHbkGimmick_DistantLightning::AHbkGimmick_DistantLightning(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
}

void AHbkGimmick_DistantLightning::OnWholeSyncEvent(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_DistantLightning::OnNoteSyncEvent(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_DistantLightning::OnHalfSyncEvent(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_DistantLightning::On8thSyncEvent(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_DistantLightning::On16thSyncEvent(int32 NoteCount, bool bDownBeat) {
}


