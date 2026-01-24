#include "HbkGimmick_EqualizerCubeAction.h"

FHbkGimmick_EqualizerCubeAction::FHbkGimmick_EqualizerCubeAction() {
    this->RotationCurveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->RotationCount = 0;
    this->RotationSpeed = FRotator(0.0f);
}

