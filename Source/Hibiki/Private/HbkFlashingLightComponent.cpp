#include "HbkFlashingLightComponent.h"

UHbkFlashingLightComponent::UHbkFlashingLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDefaultActivate = true;
    this->flashingLightType = FLTYPE_NONE;
}

void UHbkFlashingLightComponent::OnSignificanceStateChanged(bool IsActive) {
}

void UHbkFlashingLightComponent::OnGimmickDeactivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkFlashingLightComponent::OnGimmickDeactivate(AActor* Activator) {
}

void UHbkFlashingLightComponent::OnGimmickActivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkFlashingLightComponent::OnGimmickActivate(AActor* Activator) {
}

void UHbkFlashingLightComponent::OnCommonResourceSuccess() {
}

float UHbkFlashingLightComponent::GetValue(float TimeScale) {
    return 0.0f;
}

void UHbkFlashingLightComponent::EnemyAtk_Event(int32 ActionType) {
}

void UHbkFlashingLightComponent::Button_Event(int32 Count) {
}

void UHbkFlashingLightComponent::AtkTag_Event(int32 ActionType, FGameplayTag Tag) {
}


