#include "HbkForwardLightComponent.h"

UHbkForwardLightComponent::UHbkForwardLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ForwardLightType = EHbkForwardLightType::LightType1;
    this->Priority = 0.00f;
    this->LightIntensity = 0.50f;
    this->LightBaseColorRatio = 1.00f;
    this->OriginalBaseColorBrightness = 1.00f;
    this->ShadowColorBaseColorBlendRatio = 1.00f;
    this->AttenuationRadius = 1000.00f;
    this->DistanceFadeStart = 3000.00f;
    this->DistanceFadeFadeDistance = 3000.00f;
    this->bRimLighting = false;
    this->RimLightIntensity = 1.00f;
    this->RimPow = 1.00f;
    this->RimThreshold = 0.50f;
    this->bIsCharaShadingLight = false;
    this->bIsCharaShadowLight = false;
    this->bUseCookieTexture = false;
    this->CookieTextureSize = 1000.00f;
    this->bIgnoreVisibilityVolumeForceRender = false;
    this->bUseGameEnvPhase = false;
    this->PhaseStartEditorState = EHbkGameEnvPhaseStartEditorState::UsePhaseValues;
}


