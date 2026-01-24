#include "HbkGimmick_VolcaneAction.h"

FHbkGimmick_VolcaneAction::FHbkGimmick_VolcaneAction() {
    this->bUseEruptionStartUserCue = false;
    this->ActivityFirstCount = 0;
    this->ActivityNextCount = 0;
    this->EruptionSignCount = 0;
    this->EruptionCount = 0;
    this->GroundTraceCollisionChannel = ECC_WorldStatic;
    this->bSizeUp = false;
    this->SizeUpScale = 0.00f;
    this->SizeUpCount = 0;
    this->SizeUpCurveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->PlayerGroundLocationOffset = FVector2D(0.0f);
}

