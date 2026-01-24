#include "HbkUserWidget.h"

UHbkUserWidget::UHbkUserWidget() {
    this->bIsDelayOneFrame = false;
    this->DelayCount = -1;
    this->bRequestGCOnDestruct = false;
    this->bIsEnabledDefaultConstrainAspectRatio = false;
    this->bIsEnabledPhotoModeChangeVisiblity = false;
}

void UHbkUserWidget::OnStartedPhotoMode(UHbkGameRuleManager* Sender) {
}

void UHbkUserWidget::OnFinishedInOutAnimation() {
}

void UHbkUserWidget::OnEndedPhotoMode(UHbkGameRuleManager* Sender) {
}

void UHbkUserWidget::InvalidateViewportWidget() {
}

void UHbkUserWidget::InvalidateCachedWidget() {
}

void UHbkUserWidget::InvalidateAllWidgets() {
}

void UHbkUserWidget::HbkAddToViewport(int32 ZOrder) {
}


