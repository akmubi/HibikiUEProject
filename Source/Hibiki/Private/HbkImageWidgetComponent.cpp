#include "HbkImageWidgetComponent.h"

UHbkImageWidgetComponent::UHbkImageWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WidgetClass = NULL;
    this->DrawScale = 1.00f;
    this->Widget = NULL;
}

void UHbkImageWidgetComponent::ShowWidget() {
}

void UHbkImageWidgetComponent::HideWidget() {
}


