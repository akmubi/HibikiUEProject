#include "HbkGimmick_VolcaneBombAction.h"

FHbkGimmick_VolcaneBombAction::FHbkGimmick_VolcaneBombAction() {
    this->curveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->MoveCount = 0;
    this->Height = 0.00f;
    this->AdjustSplineTangent0 = 0.00f;
    this->AdjustSplineTangent1 = 0.00f;
    this->AdjustSplineTangent2 = 0.00f;
    this->AttackCount = 0;
    this->RotationOffset = FRotator(0.0f);
}

