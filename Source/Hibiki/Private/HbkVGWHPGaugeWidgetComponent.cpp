#include "HbkVGWHPGaugeWidgetComponent.h"

UHbkVGWHPGaugeWidgetComponent::UHbkVGWHPGaugeWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PopupDistance = 1000.00f;
    this->WidgetClass = NULL;
    this->GaugeWidget = NULL;
    this->WidgetComp = NULL;
}

void UHbkVGWHPGaugeWidgetComponent::OpenGaugeWidget() {
}

void UHbkVGWHPGaugeWidgetComponent::CloseGaugeWidget() {
}


