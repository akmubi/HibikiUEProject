#include "HbkStageSelectMenuWidget.h"

UHbkStageSelectMenuWidget::UHbkStageSelectMenuWidget() {
    this->DecideSound = NULL;
    this->CancelSound = NULL;
    this->ScoreDetailOpenSound = NULL;
    this->ScoreDetailCloseSound = NULL;
    this->StageNameText = NULL;
    this->StageThumbnail = NULL;
    this->HighScoreText = NULL;
    this->DotList = NULL;
    this->LeftArrowButton = NULL;
    this->RightArrowButton = NULL;
    this->DifficultyArea = NULL;
    this->DifficultyListControl = NULL;
    this->SpectraRoomListItem = NULL;
    this->DetailCommandArea = NULL;
    this->ScoreDetail = NULL;
    this->CollectablesPanel = NULL;
    this->OpenAnimation = NULL;
    this->LeftArrowButtonHoveredAnimation = NULL;
    this->RightArrowButtonHoveredAnimation = NULL;
    this->StageSelectController = NULL;
    this->StageListControl = NULL;
}

void UHbkStageSelectMenuWidget::UpdateStageInfo(UWidget* Widget, bool bPlayAnimation, bool bPlaySound) {
}

void UHbkStageSelectMenuWidget::UpdateDifficultyInfo(UWidget* Widget, bool bPlayAnimation, bool bPlaySound) {
}

void UHbkStageSelectMenuWidget::OnUnhoveredRightArrowButton(const UHbkButtonBaseWidget* Sender) {
}

void UHbkStageSelectMenuWidget::OnUnhoveredLeftArrowButton(const UHbkButtonBaseWidget* Sender) {
}

void UHbkStageSelectMenuWidget::OnHoveredRightArrowButton(const UHbkButtonBaseWidget* Sender) {
}

void UHbkStageSelectMenuWidget::OnHoveredLeftArrowButton(const UHbkButtonBaseWidget* Sender) {
}

void UHbkStageSelectMenuWidget::OnClickedRightArrowButton(const UHbkButtonBaseWidget* Sender) {
}

void UHbkStageSelectMenuWidget::OnClickedLeftArrowButton(const UHbkButtonBaseWidget* Sender) {
}

void UHbkStageSelectMenuWidget::OnClickedDifficultyListItem(const UHbkButtonBaseWidget* Sender) {
}


