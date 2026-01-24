#include "HbkImageWidget.h"

UHbkImageWidget::UHbkImageWidget() {
    this->IconArea = NULL;
    this->DirectionArea = NULL;
    this->ShowAnimation = NULL;
    this->HideAnimation = NULL;
    this->LoopAnimation = NULL;
    this->DirectionLoopAnimation = NULL;
    this->bIsDrawAtScreenEdgeEvenOffScreen = true;
}

void UHbkImageWidget::PlayLoopAnimation(int32 NoteCount, bool bDownBeat) {
}

void UHbkImageWidget::PlayDirectionLoopAnimation(int32 NoteCount, bool bDownBeat) {
}

void UHbkImageWidget::OnFinishShowAnimation() {
}


