#include "HbkAmbientCubemapVolumePhase.h"

FHbkAmbientCubemapVolumePhase::FHbkAmbientCubemapVolumePhase() {
    this->bOverrideCubemapTex = false;
    this->CubemapTex = NULL;
    this->bOverrideBlendRatio = false;
    this->BlendRatio = 0.00f;
    this->bOverrideColorWhenSkipped = false;
    this->ColorWhenSkipped = FLinearColor();
}

