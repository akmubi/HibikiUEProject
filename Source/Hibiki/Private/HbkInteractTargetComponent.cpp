#include "HbkInteractTargetComponent.h"

UHbkInteractTargetComponent::UHbkInteractTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ButtonImageTag = TEXT("Interact");
    this->InteractIconType = EHbkInteractIconType::Interact;
    this->WidgetScale = 1.00f;
    this->bIsDrawRangeToPlayer = false;
    this->PopupDistance = 1500.00f;
    this->InteractAngle = 360.00f;
    this->bEnableAnytimeInteract = false;
    this->bEnableInteractDuringAction = false;
    this->pOnAppearSE = NULL;
    this->pOnDisappearSE = NULL;
    this->pOnChangeIconSE = NULL;
    this->Widget = NULL;
}

void UHbkInteractTargetComponent::SetPauseInteract(bool Pause) {
}

void UHbkInteractTargetComponent::SetInteractRequest(bool IsInteractRequest) {
}

void UHbkInteractTargetComponent::SetHiddenWithPauseInteract(bool Enabled) {
}

void UHbkInteractTargetComponent::SetActivateInteract(bool Active) {
}

void UHbkInteractTargetComponent::OnEndedWidgetAnimation() {
}

bool UHbkInteractTargetComponent::IsInteractWithinRange() const {
    return false;
}

bool UHbkInteractTargetComponent::IsInteractPause() const {
    return false;
}

bool UHbkInteractTargetComponent::IsInteractEnabled() const {
    return false;
}

bool UHbkInteractTargetComponent::IsInteractActive() const {
    return false;
}


