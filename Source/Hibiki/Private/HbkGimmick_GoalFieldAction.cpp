#include "HbkGimmick_GoalFieldAction.h"

FHbkGimmick_GoalFieldAction::FHbkGimmick_GoalFieldAction() {
    this->MeshComp = NULL;
    this->curveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->DownLocationCount = 0;
    this->DownLocation = FVector(0.0f);
}

