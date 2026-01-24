#include "HbkGimmick_WallPanelAction.h"

FHbkGimmick_WallPanelAction::FHbkGimmick_WallPanelAction() {
    this->RhythmMeshComp = NULL;
    this->RhythmCurveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->RhythmCount = 0;
    this->RhythmDepth = 0.00f;
    this->RhythmScale = FVector(0.0f);
}

