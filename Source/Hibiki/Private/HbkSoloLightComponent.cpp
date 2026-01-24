#include "HbkSoloLightComponent.h"

UHbkSoloLightComponent::UHbkSoloLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseDistanceAttenuation = false;
    this->BlendMode = EHbkSoloLightBlendMode::BlendModeAddAndMult;
    this->LightIntensity = 1.00f;
    this->DecalLightBlendRatio = 1.00f;
    this->AttenuationRadius = 1000.00f;
    this->bUseAlphaTexture = false;
    this->ProjectedTexture = NULL;
    this->LumThreshold = 0.95f;
    this->ProjTexCutoutNum = 1;
    this->CutoutIntensity1 = 1.00f;
    this->CutoutIntensity2 = 0.90f;
    this->CutoutIntensity3 = 0.80f;
    this->CutoutFinalBlendRatio1 = 1.00f;
    this->CutoutFinalBlendRatio2 = 1.00f;
    this->CutoutFinalBlendRatio3 = 1.00f;
    this->CutoutScale1 = 1.00f;
    this->CutoutScale2 = 0.88f;
    this->CutoutScale3 = 0.77f;
}


