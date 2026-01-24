#include "HbkGimmickVisibilityComponent.h"

UHbkGimmickVisibilityComponent::UHbkGimmickVisibilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->ParamType = EHbkGimmickVisibilityParamType::None;
    this->ParamExtIntValue = 0;
}

void UHbkGimmickVisibilityComponent::OnDeactivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkGimmickVisibilityComponent::OnDeactivate(AActor* Activator) {
}

void UHbkGimmickVisibilityComponent::OnActivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkGimmickVisibilityComponent::OnActivate(AActor* Activator) {
}


