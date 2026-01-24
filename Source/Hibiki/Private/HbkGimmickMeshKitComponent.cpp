#include "HbkGimmickMeshKitComponent.h"

UHbkGimmickMeshKitComponent::UHbkGimmickMeshKitComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->ParamType = EHbkGimmickMeshKitParamType::None;
    this->ParamExtIntValue = 0;
}

void UHbkGimmickMeshKitComponent::OnDeactivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkGimmickMeshKitComponent::OnDeactivate(AActor* Activator) {
}

void UHbkGimmickMeshKitComponent::OnActivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkGimmickMeshKitComponent::OnActivate(AActor* Activator) {
}


