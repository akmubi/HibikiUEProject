#include "HbkStaticMeshComponent.h"
#include "Engine/EngineTypes.h"

UHbkStaticMeshComponent::UHbkStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LightmapType = ELightmapType::ForceVolumetric;
    this->bSkipCameraMotionBlur = false;
    this->HbkShadowType = EHbkEnvShadowType::NotSet;
    this->HbkDynamicShadowMapType = EHbkDynamicShadowMapType::DynamicShadowMapType3;
    this->bForceDisableReceiveShadow2 = false;
    this->bForceDisableReceiveShadow3 = false;
    this->ForwardLightType = EHbkForwardLightType::LightType1;
    this->bSkipKeyLight2 = false;
    this->bForceDisableReceiveShadowMain = false;
    this->TranslucentLayer = EHbkTranslucentLayer::Default;
    this->bUseHbkTranslucentLightingVolume = false;
    this->bForceDisableHbkTranslucentLightingVolume = false;
    this->FresnelIntensity1 = 0.10f;
    this->FresnelIntensity2 = 0.50f;
    this->FresnelExponent = 3.00f;
    this->FresnelIntensityTranslucentVolume1 = 1.00f;
    this->FresnelIntensityTranslucentVolume2 = 1.00f;
    this->FresnelExponentTranslucentVolume = 5.00f;
    this->HologramPostActivateGroup = EHbkHologramPostActivateGroup::HologramPostNoActivate;
    this->HologramCharaPostActivateGroup = EHbkHologramCharaPostActivateGroup::HologramCharaPostNoActivate;
    this->bARPostWorldScanDisplayGrid = false;
    this->bARPostWorldScanDisplayOutline = false;
    this->bMimosaLEDMesh = false;
    this->bSoloLightingForceLit = false;
    this->bUseCameraDitherAlpha = false;
    this->EnvHighlightFadeType = EHbkEnvHighlightFadeType::EnvHighlightAlways;
    this->EnvHighlightDistanceFadeStart = 1000.00f;
}

void UHbkStaticMeshComponent::SetSkipCameraMotionBlur(const bool bInSkipCameraMotionBlur) {
}

void UHbkStaticMeshComponent::SetHologramPostActivateGroup(EHbkHologramPostActivateGroup InHologramPostActivateGroup) {
}

void UHbkStaticMeshComponent::SetHbkShadowType(EHbkEnvShadowType InHbkShadowType) {
}

void UHbkStaticMeshComponent::SetHbkDynamicShadowMapType(EHbkDynamicShadowMapType InHbkDynamicShadowMapType) {
}

bool UHbkStaticMeshComponent::GetSkipCameraMotionBlur() const {
    return false;
}

EHbkHologramPostActivateGroup UHbkStaticMeshComponent::GetHologramPostActivateGroup() const {
    return EHbkHologramPostActivateGroup::HologramPostNoActivate;
}

void UHbkStaticMeshComponent::EnableSoloLightingForceLit(const bool bForceUpdate) {
}

void UHbkStaticMeshComponent::DisableSoloLightingForceLit(const bool bForceUpdate) {
}


