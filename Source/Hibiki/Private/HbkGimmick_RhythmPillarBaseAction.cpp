#include "HbkGimmick_RhythmPillarBaseAction.h"

FHbkGimmick_RhythmPillarBaseAction::FHbkGimmick_RhythmPillarBaseAction() {
    this->MoveRootComp = NULL;
    this->MoveCurveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->MoveCount = 0;
    this->RhythmMeshComp = NULL;
    this->RhythmCurveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->RhythmCount = 0;
}

