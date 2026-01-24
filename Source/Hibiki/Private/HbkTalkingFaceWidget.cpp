#include "HbkTalkingFaceWidget.h"

UHbkTalkingFaceWidget::UHbkTalkingFaceWidget() {
    this->bTickableWhenPause = true;
}

void UHbkTalkingFaceWidget::UnLoadFace2D() {
}

void UHbkTalkingFaceWidget::LoadStartFace2D(FName EmotionKey, const UHbkTalkFace2DKit* Face2DKit) {
}

bool UHbkTalkingFaceWidget::IsLoadingFace2D() const {
    return false;
}

bool UHbkTalkingFaceWidget::IsEmptyFace2D() const {
    return false;
}


