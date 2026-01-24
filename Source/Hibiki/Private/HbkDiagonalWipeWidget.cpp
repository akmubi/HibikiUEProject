#include "HbkDiagonalWipeWidget.h"

UHbkDiagonalWipeWidget::UHbkDiagonalWipeWidget() {
    this->OverlayVTop = NULL;
    this->OverlayVBottom = NULL;
    this->Top = NULL;
    this->Bottom = NULL;
    this->AnimationCurve = NULL;
}

void UHbkDiagonalWipeWidget::StartAnimation(UWidgetAnimation* Animation, EHbkScreenWipeType Type, EHbkTalkFadeFunc FadeFuncType) {
}

void UHbkDiagonalWipeWidget::OnFinishedCurrentAnimation() {
}


