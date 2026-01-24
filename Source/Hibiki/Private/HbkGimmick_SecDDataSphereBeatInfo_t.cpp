#include "HbkGimmick_SecDDataSphereBeatInfo_t.h"

FHbkGimmick_SecDDataSphereBeatInfo_t::FHbkGimmick_SecDDataSphereBeatInfo_t() {
    this->NoteType = EHbkNote::None;
    this->OpenFlag = false;
    this->CloseFlag = false;
    this->BeatCount = 0;
    this->pBeatSE = NULL;
    this->pBeatVFX = NULL;
}

