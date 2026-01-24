#include "HbkSoloLightingData.h"

FHbkSoloLightingData::FHbkSoloLightingData() {
    this->PostType = EHbkSoloLightingPostType::Default;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->DarknessBlendRatio = 0.00f;
    this->bUseDataTableProjectedTexture = false;
    this->bUseAlphaTexture = false;
    this->ProjectedTexture = NULL;
    this->bPlayerForceLit = false;
    this->bUseSoloLightingVolume = false;
    this->bTransparenciesAlwaysLit = false;
    this->bUseBoxGeometry = false;
    this->BoxGeometryXYScale = 0.00f;
    this->bUseRayMarching = false;
    this->DarknessColor = FLinearColor(FColor(0));
}

