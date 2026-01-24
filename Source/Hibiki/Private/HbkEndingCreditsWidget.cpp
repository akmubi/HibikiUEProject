#include "HbkEndingCreditsWidget.h"

UHbkEndingCreditsWidget::UHbkEndingCreditsWidget() {
    this->SceneClass = NULL;
    this->SkipButtonClass = NULL;
    this->LayoutDataTable = NULL;
    this->LayoutDataTableNew = NULL;
    this->ScrollStartPos = 0.00f;
    this->WrapTextAt = 0.00f;
    this->PlaySceneSound = NULL;
    this->StopSceneSound = NULL;
    this->ScrollMaskTop = NULL;
    this->ScrollMaskBottom = NULL;
    this->SceneArea = NULL;
    this->SceneWidget = NULL;
    this->SkipButtonWidget = NULL;
}

void UHbkEndingCreditsWidget::StopScene() {
}



void UHbkEndingCreditsWidget::PlayScene(float InFadeDuration) {
}

void UHbkEndingCreditsWidget::OnFinishFadeOut() {
}


