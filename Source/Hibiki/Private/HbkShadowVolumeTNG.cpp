#include "HbkShadowVolumeTNG.h"

AHbkShadowVolumeTNG::AHbkShadowVolumeTNG(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShadowColorLUT = NULL;
    this->DistAttenConst = 1.00f;
    this->DistAttenLinear = 0.00f;
    this->DistAttenExp = 0.00f;
    this->bReverseDistAtten = false;
}


