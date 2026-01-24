#include "HbkCommonTimerWidget.h"

UHbkCommonTimerWidget::UHbkCommonTimerWidget() {
    this->AddTimeSound = NULL;
    this->TimeUpSound = NULL;
    this->TickingSound = NULL;
    this->TitleText = NULL;
    this->RemainingTimeText = NULL;
    this->AddSecondText = NULL;
    this->AddMilliSecondText = NULL;
    this->SubtractTimeText = NULL;
    this->AddTimeAnimation = NULL;
    this->SubtractTimeAnimation = NULL;
    this->NotEnoughTimeAnimation = NULL;
    this->ToNormalAnimation = NULL;
}

void UHbkCommonTimerWidget::SetTitleText(const FText& Text) {
}

void UHbkCommonTimerWidget::SetTimerUnlimited() {
}

void UHbkCommonTimerWidget::SetRemainingTime(float Time) {
}

void UHbkCommonTimerWidget::SetNotEnoughTime(float Time) {
}

void UHbkCommonTimerWidget::PlaySubtractTimeAnimation(float Time) {
}

void UHbkCommonTimerWidget::PlayAddTimeAnimation(float Time) {
}


