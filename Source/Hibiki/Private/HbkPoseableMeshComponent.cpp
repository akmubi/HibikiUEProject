#include "HbkPoseableMeshComponent.h"

UHbkPoseableMeshComponent::UHbkPoseableMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HbkCharacterShadowType = EHbkCharacterShadowType2::NoShadow;
    this->HbkDynamicShadowMapType = EHbkDynamicShadowMapType::DynamicShadowMapType3;
    this->bForceDisableReceiveShadow2 = false;
    this->bForceDisableReceiveShadow3 = false;
    this->bSkipCameraMotionBlur = false;
    this->ForwardLightType = EHbkForwardLightType::LightType1;
    this->bSkipKeyLight2 = false;
    this->bForceDisableReceiveShadowMain = false;
    this->HologramPostActivateGroup = EHbkHologramPostActivateGroup::HologramPostNoActivate;
}

void UHbkPoseableMeshComponent::SetSkipCameraMotionBlur(const bool bInSkipCameraMotionBlur) {
}

void UHbkPoseableMeshComponent::SetHologramPostActivateGroup(EHbkHologramPostActivateGroup InHologramPostActivateGroup) {
}

void UHbkPoseableMeshComponent::SetHbkDynamicShadowMapType(EHbkDynamicShadowMapType InHbkDynamicShadowMapType) {
}

void UHbkPoseableMeshComponent::SetHbkCharacterShadowType2(EHbkCharacterShadowType2 InHbkCharacterShadowType2) {
}

void UHbkPoseableMeshComponent::SetForceDisableReceiveShadowMain(const bool bInForceDisableReceiveShadowMain) {
}

void UHbkPoseableMeshComponent::SetForceDisableReceiveShadow3(const bool bInForceDisableReceiveShadow3) {
}

void UHbkPoseableMeshComponent::SetForceDisableReceiveShadow2(const bool bInForceDisableReceiveShadow2) {
}

bool UHbkPoseableMeshComponent::GetSkipCameraMotionBlur() const {
    return false;
}

EHbkHologramPostActivateGroup UHbkPoseableMeshComponent::GetHologramPostActivateGroup() const {
    return EHbkHologramPostActivateGroup::HologramPostNoActivate;
}


