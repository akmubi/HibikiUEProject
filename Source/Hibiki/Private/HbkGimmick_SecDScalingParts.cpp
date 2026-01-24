#include "HbkGimmick_SecDScalingParts.h"

AHbkGimmick_SecDScalingParts::AHbkGimmick_SecDScalingParts(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->ScalingCurveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
}


