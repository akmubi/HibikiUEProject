#include "HbkBPMRushStartWidget.h"

UHbkBPMRushStartWidget::UHbkBPMRushStartWidget() {
    this->DecideSound = NULL;
    this->NewGameDecideSound = NULL;
    this->ReturnToHideoutDecideSound = NULL;
    this->DescriptionText = NULL;
    this->ListArea = NULL;
    this->ListControl = NULL;
    this->NormalModeHighScore = NULL;
    this->EasyItem = NULL;
    this->NormalItem = NULL;
    this->ExItem = NULL;
    this->DisableExItem = NULL;
    this->ShowNormalModeHighScoreAnimation = NULL;
}

void UHbkBPMRushStartWidget::OnSelectListItem(UWidget* Widget, bool bPlayAnimation, bool bPlaySound) {
}

void UHbkBPMRushStartWidget::OnClosedDialog() {
}

void UHbkBPMRushStartWidget::OnClickedListItem(const UHbkButtonBaseWidget* Sender) {
}


