#include "HbkGimmickClockComponent.h"

UHbkGimmickClockComponent::UHbkGimmickClockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->bActivate = false;
    this->ActivateTimer = 0.00f;
}

void UHbkGimmickClockComponent::OnDeactivate(AActor* Activator) {
}

void UHbkGimmickClockComponent::OnActivate(AActor* Activator) {
}


