#include "HbkGimmick_RhythmAnimationAction.h"

FHbkGimmick_RhythmAnimationAction::FHbkGimmick_RhythmAnimationAction() {
    this->RhythmCurveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->RhythmCount = 0;
    this->bUseRhythmLocation = false;
    this->bUseRhythmScale = false;
    this->bOneShot = false;
    this->RhythmLocation = FVector(0.0f);
    this->RhythmScale = FVector(0.0f);
}

