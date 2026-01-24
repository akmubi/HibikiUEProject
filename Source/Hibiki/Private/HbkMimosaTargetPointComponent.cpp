#include "HbkMimosaTargetPointComponent.h"

UHbkMimosaTargetPointComponent::UHbkMimosaTargetPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LockonWidgetClass = NULL;
    this->VisibleRadius = 3000.00f;
}

void UHbkMimosaTargetPointComponent::RemoveWidget() {
}

void UHbkMimosaTargetPointComponent::CreateWidget() {
}


