#include "HbkRhythmDungeonStatusWidget.h"

UHbkRhythmDungeonStatusWidget::UHbkRhythmDungeonStatusWidget() {
    this->OpenSound = NULL;
    this->ChangeSound = NULL;
    this->CancelSound = NULL;
    this->GauageDownSound = NULL;
    this->StatusList = NULL;
    this->InformationPanel = NULL;
    this->FooterButtonSwitcher = NULL;
    this->InAnimation = NULL;
    this->OutAnimation = NULL;
    this->AnimationSecond = 1.00f;
    this->WaitAnimationSecond = 0.00f;
    this->EasingType = EEasingFunc::Linear;
}

void UHbkRhythmDungeonStatusWidget::UpdateInformation(UWidget* Widget, bool bPlayAnimation, bool bPlaySound) {
}


