#include "HbkGimmickRotationAnimParam.h"

FHbkGimmickRotationAnimParam::FHbkGimmickRotationAnimParam() {
    this->bForceChange = false;
    this->NoteType = EHbkNote::None;
    this->curveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->bReverseCurve = false;
    this->bRoundTrip = false;
    this->CurvePhase = 0.00f;
    this->bUseStartRotation = false;
    this->StartRotation = FRotator(0.0f);
}


