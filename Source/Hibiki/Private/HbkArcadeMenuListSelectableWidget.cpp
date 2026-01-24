#include "HbkArcadeMenuListSelectableWidget.h"

UHbkArcadeMenuListSelectableWidget::UHbkArcadeMenuListSelectableWidget() {
    this->SelectAnim = NULL;
    this->DeselectAnim = NULL;
    this->GetScoreAnimation = NULL;
    this->ChallengeTextBlock = NULL;
    this->GameModeTextBlock = NULL;
    this->UnSelectedBackGround = NULL;
    this->GotRewardIcon = NULL;
    this->ChallengeClearIcon = NULL;
    this->OFFItemBG_Blue = NULL;
    this->OFFItemBG_Red = NULL;
}

void UHbkArcadeMenuListSelectableWidget::WidgetForceLayoutPrepass() {
}


