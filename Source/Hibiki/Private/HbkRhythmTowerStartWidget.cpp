#include "HbkRhythmTowerStartWidget.h"

UHbkRhythmTowerStartWidget::UHbkRhythmTowerStartWidget() {
    this->DecideSound = NULL;
    this->NewGameDecideSound = NULL;
    this->EquipmentChangeDecideSound = NULL;
    this->DescriptionText = NULL;
    this->ListArea = NULL;
    this->ListControl = NULL;
    this->ContinueItem = NULL;
    this->NormalModeHighScore = NULL;
    this->NormalModeSuspendSave = NULL;
    this->ShowNormalModeHighScoreAnimation = NULL;
    this->ShowNormalModeSuspendSaveAnimation = NULL;
    this->ShowStoreTask = NULL;
}

void UHbkRhythmTowerStartWidget::OnSelectListItem(UWidget* Widget, bool bPlayAnimation, bool bPlaySound) {
}

void UHbkRhythmTowerStartWidget::OnCloseStore() {
}

void UHbkRhythmTowerStartWidget::OnClickedListItem(const UHbkButtonBaseWidget* Sender) {
}


