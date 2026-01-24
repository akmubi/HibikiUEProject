#include "HbkGimmick_bg0150.h"

AHbkGimmick_bg0150::AHbkGimmick_bg0150(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bExecSave = false;
    this->bSaveType = EHbkGimmick_bg0150SaveType::BG0150_SVT_NONE;
}

void AHbkGimmick_bg0150::OnNoteWhole_bg0150(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_bg0150::OnNoteQuarter_bg0150(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_bg0150::OnNoteHalf_bg0150(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_bg0150::OnNote8th_bg0150(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_bg0150::OnNote16th_bg0150(int32 NoteCount, bool bDownBeat) {
}


