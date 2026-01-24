#include "HbkAchievementsWidget.h"

UHbkAchievementsWidget::UHbkAchievementsWidget() {
    this->ChangeSoundState = NULL;
    this->RestoreSoundState = NULL;
    this->OpenSound = NULL;
    this->CloseSound = NULL;
    this->ChangeViewModeSound = NULL;
    this->GetRewardSuccessSound = NULL;
    this->CommonBackground = NULL;
    this->AchievementTabList = NULL;
    this->AchievementList = NULL;
    this->GetAllRewardsButton = NULL;
    this->InformationPanel = NULL;
    this->WallPainting = NULL;
    this->OpenAnimation = NULL;
    this->ToViewAnimation = NULL;
    this->ToListAnimation = NULL;
    this->SelectListItem = NULL;
}

void UHbkAchievementsWidget::UpdateInformation(UWidget* Widget, bool bPlayAnimation, bool bPlaySound) {
}


void UHbkAchievementsWidget::OnHoldDownCompletedGetAllRewardsButton(const UHbkButtonBaseWidget* Sender) {
}

void UHbkAchievementsWidget::OnFinishMoveAnimation() {
}

void UHbkAchievementsWidget::OnClickedTabListItem(const UHbkButtonBaseWidget* Sender) {
}

void UHbkAchievementsWidget::OnClickedGetRewardButton(const UHbkButtonBaseWidget* Sender) {
}

void UHbkAchievementsWidget::AfterGetAllRewards() {
}


