#include "HbkArcadeMenuFrontPageWidget.h"

UHbkArcadeMenuFrontPageWidget::UHbkArcadeMenuFrontPageWidget() {
    this->RewardClearRateTextBlock = NULL;
    this->NextRewardNameTextBlock = NULL;
    this->NextRewardTextPanel = NULL;
    this->ToRewardPageTextPanel = NULL;
    this->Divider_Horizontal = NULL;
    this->NoticeIcon = NULL;
    this->NoticeTextBlock = NULL;
    this->RightDescription = NULL;
    this->LeftDescription = NULL;
    this->CompletionRateText = NULL;
    this->PageTitleText = NULL;
    this->SelectLeft_Anim = NULL;
    this->DeselectLeft_Anim = NULL;
    this->SelectRight_Anim = NULL;
    this->DeselectRight_Anim = NULL;
    this->HoveredGameStadioButton_Anim = NULL;
    this->HoveredRewardButton_Anim = NULL;
    this->TangoChanArrow_LoopAnimation = NULL;
    this->Notice_LoopAnimation = NULL;
    this->VandelayButtonInAnim = NULL;
    this->ListControl = NULL;
    this->RhythmDungeonTab = NULL;
    this->BPMRushTab = NULL;
    this->ButtonIcon = NULL;
    this->ToRewardPageButton = NULL;
    this->ToVandelayGameWorksButton = NULL;
    this->ToRDButton = NULL;
    this->ToBPMRushButton = NULL;
    this->BackPageSE = NULL;
    this->ModeAcceptSE = NULL;
}

void UHbkArcadeMenuFrontPageWidget::TubSelect(UWidget* Widget, bool bPlayAnimation, bool bPlaySound) {
}

void UHbkArcadeMenuFrontPageWidget::TubDeselect(UWidget* Widget, bool bPlayAnimation, bool bPlaySound) {
}

void UHbkArcadeMenuFrontPageWidget::OnHoveredRewardPageButton(const UHbkButtonBaseWidget* Sender) {
}

void UHbkArcadeMenuFrontPageWidget::OnHoveredGameStadioButton(const UHbkButtonBaseWidget* Sender) {
}

void UHbkArcadeMenuFrontPageWidget::OnClickedRewardPageButton(const UHbkButtonBaseWidget* Sender) {
}

void UHbkArcadeMenuFrontPageWidget::OnClickedGameStadioButton(const UHbkButtonBaseWidget* Sender) {
}

void UHbkArcadeMenuFrontPageWidget::OnClickedGameModeButton(const UHbkButtonBaseWidget* Sender) {
}


