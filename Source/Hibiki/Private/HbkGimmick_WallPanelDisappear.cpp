#include "HbkGimmick_WallPanelDisappear.h"

FHbkGimmick_WallPanelDisappear::FHbkGimmick_WallPanelDisappear() {
    this->AnalyticFogComp = NULL;
    this->BeforeCurveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->AfterCurveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->DitherCurveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->BeatCount = 0;
    this->DitherAlphaBeatCountRate = 0.00f;
    this->MaxBaseColorIntensity = 0.00f;
    this->MaxEmissiveIntensity = 0.00f;
}

