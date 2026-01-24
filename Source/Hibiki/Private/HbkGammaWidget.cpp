#include "HbkGammaWidget.h"

UHbkGammaWidget::UHbkGammaWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MaxSliderValue = 5.00f;
    this->InputRepeatInitialSpeed = 0.00f;
    this->InputRepeatMaxSpeed = 0.00f;
    this->InputRepeatChangeSpeed = 0.00f;
}

void UHbkGammaWidget::Show() {
}


void UHbkGammaWidget::SetDisplayGamma(float Value) {
}

void UHbkGammaWidget::Hide() {
}

float UHbkGammaWidget::GetDisplayGamma() {
    return 0.0f;
}


