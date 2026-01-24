#include "HbkGimmick_bg0150_MoveAnimInfo_t.h"

FHbkGimmick_bg0150_MoveAnimInfo_t::FHbkGimmick_bg0150_MoveAnimInfo_t() {
    this->DefaultOpen = false;
    this->OpenCloseLoop = false;
    this->SpeedRate = 0.00f;
    this->NoteType = EHbkNote::None;
    this->curveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->StartBeatIndex = 0;
    this->CloseWaitBeatCount = 0;
    this->OpenWaitBeatCount = 0;
    this->RotValue = FRotator(0.0f);
}

