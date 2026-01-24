#include "HbkGimmick_StalactiteAction.h"

FHbkGimmick_StalactiteAction::FHbkGimmick_StalactiteAction() {
    this->FallMeshComp = NULL;
    this->curveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->FallCount = 0;
    this->FallLength = 0.00f;
}

