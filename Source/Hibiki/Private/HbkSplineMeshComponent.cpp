#include "HbkSplineMeshComponent.h"

UHbkSplineMeshComponent::UHbkSplineMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSkipCameraMotionBlur = false;
    this->HbkShadowType = EHbkEnvShadowType::NotSet;
    this->HbkDynamicShadowMapType = EHbkDynamicShadowMapType::DynamicShadowMapType3;
    this->ForwardLightType = EHbkForwardLightType::LightType1;
    this->bSkipKeyLight2 = false;
    this->HologramPostActivateGroup = EHbkHologramPostActivateGroup::HologramPostNoActivate;
}

void UHbkSplineMeshComponent::SetSkipCameraMotionBlur(const bool bInSkipCameraMotionBlur) {
}

void UHbkSplineMeshComponent::SetHologramPostActivateGroup(EHbkHologramPostActivateGroup InHologramPostActivateGroup) {
}

void UHbkSplineMeshComponent::SetHbkShadowType(EHbkEnvShadowType InHbkShadowType) {
}

void UHbkSplineMeshComponent::SetHbkDynamicShadowMapType(EHbkDynamicShadowMapType InHbkDynamicShadowMapType) {
}

bool UHbkSplineMeshComponent::GetSkipCameraMotionBlur() const {
    return false;
}

EHbkHologramPostActivateGroup UHbkSplineMeshComponent::GetHologramPostActivateGroup() const {
    return EHbkHologramPostActivateGroup::HologramPostNoActivate;
}


