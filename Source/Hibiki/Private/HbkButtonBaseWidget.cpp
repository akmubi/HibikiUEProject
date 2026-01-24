#include "HbkButtonBaseWidget.h"

UHbkButtonBaseWidget::UHbkButtonBaseWidget() {
    this->HoldDownDuration = 1.00f;
}

void UHbkButtonBaseWidget::SetDelegateButtonWidget(UHbkButtonBaseWidget* NewDelegateButtonWidget) {
}

void UHbkButtonBaseWidget::SetCanHoldDown(bool bEnable) {
}

void UHbkButtonBaseWidget::SetButtonType(EHbkButtonType Type) {
}

void UHbkButtonBaseWidget::ResetButtonState() {
}

void UHbkButtonBaseWidget::ReleaseKey() {
}

void UHbkButtonBaseWidget::PressKey() {
}

bool UHbkButtonBaseWidget::IsHoldDown() const {
    return false;
}











