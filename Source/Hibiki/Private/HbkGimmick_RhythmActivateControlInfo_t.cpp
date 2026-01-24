#include "HbkGimmick_RhythmActivateControlInfo_t.h"

FHbkGimmick_RhythmActivateControlInfo_t::FHbkGimmick_RhythmActivateControlInfo_t() {
    this->ActivateFlag = false;
    this->ActivateExtIntFlag = false;
    this->ActivateExtIntValue = 0;
    this->DeactivateFlag = false;
    this->DeactivateExtIntFlag = false;
    this->DeactivateExtIntValue = 0;
    this->SyncNote = EHbkNote::None;
    this->NoteCount = 0;
}

