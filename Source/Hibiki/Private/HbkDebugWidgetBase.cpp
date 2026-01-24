#include "HbkDebugWidgetBase.h"

UHbkDebugWidgetBase::UHbkDebugWidgetBase() {
    this->bIsOpacityHide = false;
    this->isDisplayDuringAction = true;
    this->isEnableOnly = true;
    this->isDisplayAfterClosing = false;
    this->isHiddenWhenLRReleased = true;
    this->PartsWidth = 200.00f;
    this->PartsHeight = 40.00f;
    this->RepeatDelayTime = 0.20f;
}

void UHbkDebugWidgetBase::ShowWidget() {
}

void UHbkDebugWidgetBase::Show() {
}

void UHbkDebugWidgetBase::SetIsEnableOnly(bool NewEnableOnly) {
}

void UHbkDebugWidgetBase::SetDisplayDuringAction(bool NewDisplayDuringAction) {
}

void UHbkDebugWidgetBase::RightShoulderReleased() {
}

void UHbkDebugWidgetBase::LeftShoulderReleased() {
}

void UHbkDebugWidgetBase::HideWidget() {
}

void UHbkDebugWidgetBase::Hide() {
}

FGameplayTag UHbkDebugWidgetBase::GetDebugWidgetTag() const {
    return FGameplayTag{};
}

void UHbkDebugWidgetBase::Enable() {
}

void UHbkDebugWidgetBase::Disable() {
}



void UHbkDebugWidgetBase::Action() {
}


