#include "HbkSkeletalMeshComponent.h"

UHbkSkeletalMeshComponent::UHbkSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReceivesDecals = false;
    this->HbkCharacterShadowType = EHbkCharacterShadowType::CapsuleShadow;
    this->HbkDynamicShadowMapType = EHbkDynamicShadowMapType::DynamicShadowMapType3;
    this->bForceDisableReceiveShadow2 = false;
    this->bForceDisableReceiveShadow3 = false;
    this->bSkipCameraMotionBlur = false;
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
    this->bUseHologramCharaPost2 = false;
    this->bUseHologramCharaPostKale = false;
    this->bEnableHologramCharaPostOnRegister = false;
    this->bSkipPixelatePost = false;
    this->bSoloLightingForceLit = false;
    this->bUseCameraDitherAlpha = false;
    this->bUsePSECameraDitherAlpha = false;
    this->EnvHighlightFadeType = EHbkEnvHighlightFadeType::EnvHighlightAlways;
    this->EnvHighlightDistanceFadeStart = 1000.00f;
    this->bNeedInitMeshKit = true;
}

void UHbkSkeletalMeshComponent::ShowMeshKit(FName KitName, bool bShow, int32 LODIndex) {
}

void UHbkSkeletalMeshComponent::ShowMaterialSectionBySlotName(FName materialSlotName, bool bShow, int32 LODIndex) {
}

void UHbkSkeletalMeshComponent::ShowDefaultMeshKit(int32 LODIndex) {
}

void UHbkSkeletalMeshComponent::SetSkipCameraMotionBlur(const bool bInSkipCameraMotionBlur) {
}

void UHbkSkeletalMeshComponent::SetHologramPostActivateGroup(EHbkHologramPostActivateGroup InHologramPostActivateGroup) {
}

void UHbkSkeletalMeshComponent::SetHbkDynamicShadowMapType(EHbkDynamicShadowMapType InHbkDynamicShadowMapType) {
}

void UHbkSkeletalMeshComponent::SetHbkCharacterShadowType(EHbkCharacterShadowType InHbkCharacterShadowType) {
}

void UHbkSkeletalMeshComponent::SetForceDisableReceiveShadowMain(const bool bInForceDisableReceiveShadowMain) {
}

void UHbkSkeletalMeshComponent::SetForceDisableReceiveShadow3(const bool bInForceDisableReceiveShadow3) {
}

void UHbkSkeletalMeshComponent::SetForceDisableReceiveShadow2(const bool bInForceDisableReceiveShadow2) {
}

bool UHbkSkeletalMeshComponent::GetSkipCameraMotionBlur() const {
    return false;
}

int32 UHbkSkeletalMeshComponent::GetMeshKitStateAll(TArray<FHbkMeshKitState>& OutMeshKitState) {
    return 0;
}

bool UHbkSkeletalMeshComponent::GetMeshKitState(FName MeshKitName) {
    return false;
}

EHbkHologramPostActivateGroup UHbkSkeletalMeshComponent::GetHologramPostActivateGroup() const {
    return EHbkHologramPostActivateGroup::HologramPostNoActivate;
}

void UHbkSkeletalMeshComponent::EnableSoloLightingForceLit(const bool bForceUpdate) {
}

void UHbkSkeletalMeshComponent::EnableSkipPixelatePost() {
}

void UHbkSkeletalMeshComponent::DisableSoloLightingForceLit(const bool bForceUpdate) {
}

void UHbkSkeletalMeshComponent::DisableSkipPixelatePost() {
}


