#include "HbkGimmickOneShotAnimComponent.h"

UHbkGimmickOneShotAnimComponent::UHbkGimmickOneShotAnimComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->bAnimStarted = false;
}

void UHbkGimmickOneShotAnimComponent::OnDeactivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkGimmickOneShotAnimComponent::OnDeactivate(AActor* Activator) {
}

void UHbkGimmickOneShotAnimComponent::OnActivateExtInt(AActor* Activator, int32 Value) {
}

void UHbkGimmickOneShotAnimComponent::OnActivate(AActor* Activator) {
}


