#include "HbkGimmickTransformComponent.h"

UHbkGimmickTransformComponent::UHbkGimmickTransformComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->ParamType = EHbkGimmickTransformParamType::None;
    this->ParamExtIntValue = 0;
}

void UHbkGimmickTransformComponent::OnDeactivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkGimmickTransformComponent::OnDeactivate(AActor* Activator) {
}

void UHbkGimmickTransformComponent::OnActivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkGimmickTransformComponent::OnActivate(AActor* Activator) {
}


