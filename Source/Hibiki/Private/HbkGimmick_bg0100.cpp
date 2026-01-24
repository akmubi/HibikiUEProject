#include "HbkGimmick_bg0100.h"

AHbkGimmick_bg0100::AHbkGimmick_bg0100(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->beInstructed = false;
    this->SetInitStateCountForActivate = false;
    this->OpenNoteCount = 0;
    this->CloseNoteCount = 0;
    this->bIsInitOpen = false;
    this->bIsBegan = false;
    this->CurrentStateCount = 0;
}

void AHbkGimmick_bg0100::OnNoteEvent_bg0100(int32 NoteCount, bool bDownBeat) {
}

bool AHbkGimmick_bg0100::IsOpen() const {
    return false;
}


