#include "HbkRhythmTowerResultWidget.h"

UHbkRhythmTowerResultWidget::UHbkRhythmTowerResultWidget() {
    this->SucceededOpenSound = NULL;
    this->SucceededOpenSound_LowRank = NULL;
    this->FailedOpenSound = NULL;
    this->RetryDecideSound = NULL;
    this->ReturnToHideoutDecideSound = NULL;
    this->MusicStopSound = NULL;
    this->NormalItemArea = NULL;
    this->SpecialItemArea = NULL;
    this->RewardRateValueText = NULL;
    this->RewardGearValueText = NULL;
    this->Background = NULL;
    this->ClearBaseBG = NULL;
}

void UHbkRhythmTowerResultWidget::OnFinishShowAnimation() {
}


