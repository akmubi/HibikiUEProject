#include "HbkGimmick_MovingFenceAction.h"

FHbkGimmick_MovingFenceAction::FHbkGimmick_MovingFenceAction() {
    this->StartNoteCount = 0;
    this->curveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->DownLocationCount = 0;
    this->DownLocation = FVector(0.0f);
}

