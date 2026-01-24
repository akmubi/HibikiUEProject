#include "HbkGimmick_PendulumAction.h"

FHbkGimmick_PendulumAction::FHbkGimmick_PendulumAction() {
    this->curveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->CurvePower = 0.00f;
    this->DelayCount = 0;
    this->RotationCount = 0;
    this->Rotation = FRotator(0.0f);
}

