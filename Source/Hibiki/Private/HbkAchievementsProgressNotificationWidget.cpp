#include "HbkAchievementsProgressNotificationWidget.h"

UHbkAchievementsProgressNotificationWidget::UHbkAchievementsProgressNotificationWidget() {
    this->ShowPopupTime = 4.00f;
    this->TitleText = NULL;
    this->ProgressNumText = NULL;
    this->ProgressMaxText = NULL;
    this->ProgressBarArea = NULL;
    this->ProgressBar = NULL;
    this->CategoryIcon = NULL;
    this->ShowAnimation = NULL;
    this->HideAnimation = NULL;
    this->CompleteAnimation = NULL;
}

void UHbkAchievementsProgressNotificationWidget::OnFinishShowAnimation() {
}

void UHbkAchievementsProgressNotificationWidget::OnFinishLoadCategoryIconTexture() {
}

void UHbkAchievementsProgressNotificationWidget::OnFinishHideAnimation() {
}


