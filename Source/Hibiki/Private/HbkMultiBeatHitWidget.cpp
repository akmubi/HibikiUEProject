#include "HbkMultiBeatHitWidget.h"

UHbkMultiBeatHitWidget::UHbkMultiBeatHitWidget() {
    this->MyBeatHitId = -1;
}

void UHbkMultiBeatHitWidget::SetAnimation(UWidgetAnimation* NewScaleAnimation, UWidgetAnimation* NewGoodAnimation, UWidgetAnimation* NewPerfectAnimation) {
}

void UHbkMultiBeatHitWidget::NextBeatHit(int32 BeatHitId, float PlayRate) {
}

float UHbkMultiBeatHitWidget::GetPlayRate() {
    return 0.0f;
}







void UHbkMultiBeatHitWidget::BeatHitResult(int32 BeatHitId, EHbkBeatHitInputResult InputResult) {
}


