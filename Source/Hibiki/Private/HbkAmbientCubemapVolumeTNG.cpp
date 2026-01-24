#include "HbkAmbientCubemapVolumeTNG.h"

AHbkAmbientCubemapVolumeTNG::AHbkAmbientCubemapVolumeTNG(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CubemapTex = NULL;
    this->BlendRatio = 0.80f;
    this->DistAttenConst = 1.00f;
    this->DistAttenLinear = 0.00f;
    this->DistAttenExp = 0.00f;
    this->bReverseDistAtten = false;
}


