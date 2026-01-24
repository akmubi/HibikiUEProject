#include "AOVolumeComponentTNG.h"

UAOVolumeComponentTNG::UAOVolumeComponentTNG(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->AOTextureType = 0;
    this->MinOcclusion = 0.00f;
    this->AOTextureCustom = NULL;
    this->FadeEndLength = 1.00f;
    this->FadeOcclusionBrightenOffset = 1.00f;
}
