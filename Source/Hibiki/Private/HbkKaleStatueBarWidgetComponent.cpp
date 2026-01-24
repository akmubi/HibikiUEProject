#include "HbkKaleStatueBarWidgetComponent.h"

UHbkKaleStatueBarWidgetComponent::UHbkKaleStatueBarWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PopupDistance = 1000.00f;
    this->WidgetClass = NULL;
    this->GaugeWidget = NULL;
    this->WidgetComp = NULL;
}

void UHbkKaleStatueBarWidgetComponent::SetHealthGauge(float Rate) {
}

void UHbkKaleStatueBarWidgetComponent::OpenGaugeWidget() {
}

void UHbkKaleStatueBarWidgetComponent::EndGaugeWidget() {
}

void UHbkKaleStatueBarWidgetComponent::CloseGaugeWidget() {
}


