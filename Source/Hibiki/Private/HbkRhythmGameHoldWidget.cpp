#include "HbkRhythmGameHoldWidget.h"

UHbkRhythmGameHoldWidget::UHbkRhythmGameHoldWidget() {
    this->HoldCount = 0.00f;
    this->bPlaySE = true;
    this->LeftBeatHitWidget = NULL;
    this->RightBeatHitWidget = NULL;
}

void UHbkRhythmGameHoldWidget::VisibilityChanged(ESlateVisibility InVisibility) {
}


void UHbkRhythmGameHoldWidget::RightBeatHitStart() {
}

bool UHbkRhythmGameHoldWidget::PlaySuccessAnim() {
    return false;
}

void UHbkRhythmGameHoldWidget::LeftBeatHitStart() {
}





