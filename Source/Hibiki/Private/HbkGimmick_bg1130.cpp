#include "HbkGimmick_bg1130.h"

AHbkGimmick_bg1130::AHbkGimmick_bg1130(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bOneMove = true;
    this->bTwoMove = true;
}

void AHbkGimmick_bg1130::OnNoteQuarter_bg1130(int32 NoteCount, bool bDownBeat) {
}


