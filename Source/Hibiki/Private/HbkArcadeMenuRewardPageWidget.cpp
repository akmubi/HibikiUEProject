#include "HbkArcadeMenuRewardPageWidget.h"

UHbkArcadeMenuRewardPageWidget::UHbkArcadeMenuRewardPageWidget() {
    this->RewardList = NULL;
    this->RewardScroll = NULL;
    this->DescriptionScroll = NULL;
    this->ListControl = NULL;
    this->GetRewardButton = NULL;
    this->GetRewardPanel = NULL;
    this->GotRewardPanel = NULL;
    this->GetAllRewardsButton = NULL;
    this->NextNextRewardPanel = NULL;
    this->NextRewardPanel = NULL;
    this->PreviousRewardPanel = NULL;
    this->SpAttackReward_1 = NULL;
    this->SpAttackReward_2 = NULL;
    this->FinalReward = NULL;
    this->ScoreHorizontalBox = NULL;
    this->ScoreTitle = NULL;
    this->ChallengeProgressBar = NULL;
    this->DescriptionTextBlock = NULL;
    this->SerialNumTextBlock = NULL;
    this->ChallengeTextBlock = NULL;
    this->ScoreTextBlock = NULL;
    this->ClearedRewardNumTextBlock = NULL;
    this->MaxRewardNumTextBlock = NULL;
    this->GetPointTextBlock = NULL;
    this->MaxPointTextBlock = NULL;
    this->GetPointRateTextBlock = NULL;
    this->NextRewardTextBlock = NULL;
    this->PreviousRewardTextBlock = NULL;
    this->NextNextRewardTextBlock = NULL;
    this->NextMaxPointTextBlock = NULL;
    this->PreviousMaxPointTextBlock = NULL;
    this->NextNextMaxPointTextBlock = NULL;
    this->NextCurrentPointTextBlock = NULL;
    this->PreviousCurrentPointTextBlock = NULL;
    this->NextNextCurrentPointTextBlock = NULL;
    this->GaugeValue = NULL;
    this->RewardIconPos_1_Anim = NULL;
    this->RewardIconPos_2_Anim = NULL;
    this->RewardWidgetClass = NULL;
    this->SelectSE = NULL;
    this->GetScorePointSE = NULL;
    this->HoldButtonSE = NULL;
    this->ReleaseHoldButtonSE = NULL;
    this->ScrollOffsetValue = 1.00f;
    this->BigReward1_ScorePointLine = 400.00f;
    this->BigReward2_ScorePointLine = 1800.00f;
    this->LastReward_ScorePointLine = 4000.00f;
}

void UHbkArcadeMenuRewardPageWidget::SelectItem(UWidget* Widget, bool bPlayAnimation, bool bPlaySound) {
}

void UHbkArcadeMenuRewardPageWidget::OnCompletedGetAllScorePointButton(const UHbkButtonBaseWidget* Sender) {
}

void UHbkArcadeMenuRewardPageWidget::OnCloseRewardDialog() {
}

void UHbkArcadeMenuRewardPageWidget::DeselectItem(UWidget* Widget, bool bPlayAnimation, bool bPlaySound) {
}


