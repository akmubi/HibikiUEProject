#include "HbkGimmick_SecDShellCircle_MovingInfo_t.h"

FHbkGimmick_SecDShellCircle_MovingInfo_t::FHbkGimmick_SecDShellCircle_MovingInfo_t() {
    this->pMesh = NULL;
    this->NoteType = EHbkNote::None;
    this->curveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->Scale = FVector(0.0f);
}

