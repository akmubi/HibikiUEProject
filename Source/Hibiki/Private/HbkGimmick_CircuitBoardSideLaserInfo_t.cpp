#include "HbkGimmick_CircuitBoardSideLaserInfo_t.h"

FHbkGimmick_CircuitBoardSideLaserInfo_t::FHbkGimmick_CircuitBoardSideLaserInfo_t() {
    this->EndEventNoteCount = 0;
    this->SyncNote = EHbkNote::None;
    this->curveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->waitBeatCount = 0;
    this->pLaser = NULL;
}

