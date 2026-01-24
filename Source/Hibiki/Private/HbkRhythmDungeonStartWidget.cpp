#include "HbkRhythmDungeonStartWidget.h"

UHbkRhythmDungeonStartWidget::UHbkRhythmDungeonStartWidget() {
    this->DecideSound = NULL;
    this->NewGameDecideSound = NULL;
    this->EquipmentChangeDecideSound = NULL;
    this->ReturnToHideoutDecideSound = NULL;
    this->DescriptionText = NULL;
    this->ListArea = NULL;
    this->ListControl = NULL;
    this->ContinueItem = NULL;
    this->NormalModeHighScore = NULL;
    this->NormalModeSuspendScore = NULL;
}

void UHbkRhythmDungeonStartWidget::OnSelectListItem(UWidget* Widget, bool bPlayAnimation, bool bPlaySound) {
}

void UHbkRhythmDungeonStartWidget::OnClickedListItem(const UHbkButtonBaseWidget* Sender) {
}


