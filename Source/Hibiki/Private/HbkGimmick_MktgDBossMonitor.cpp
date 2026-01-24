#include "HbkGimmick_MktgDBossMonitor.h"

AHbkGimmick_MktgDBossMonitor::AHbkGimmick_MktgDBossMonitor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->StopMovieDiffRate = 0.00f;
    this->PlayDMGMinNoteCount = 0;
}

void AHbkGimmick_MktgDBossMonitor::OnNoteSyncWhole(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_MktgDBossMonitor::MovieStartFunc(UTexture* NewMediaTexture) {
}

void AHbkGimmick_MktgDBossMonitor::MovieEndFunc() {
}

void AHbkGimmick_MktgDBossMonitor::MovieCloseFunc() {
}


