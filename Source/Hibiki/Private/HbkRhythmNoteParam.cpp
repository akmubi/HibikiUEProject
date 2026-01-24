#include "HbkRhythmNoteParam.h"

FHbkRhythmNoteParam::FHbkRhythmNoteParam() {
    this->NoteTime = 0.00f;
    this->bHoldInput = false;
    this->bReleaseInput = false;
    this->Duration = 0.00f;
    this->NoteType = EHbkRhythmNoteType::Note_None;
    this->PosX = 0.00f;
    this->PosY = 0.00f;
    this->isLeftStart = false;
}

