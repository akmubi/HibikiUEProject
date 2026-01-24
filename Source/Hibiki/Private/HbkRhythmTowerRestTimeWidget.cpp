#include "HbkRhythmTowerRestTimeWidget.h"

UHbkRhythmTowerRestTimeWidget::UHbkRhythmTowerRestTimeWidget() {
    this->StoreWidgetClass = NULL;
    this->OpenSound = NULL;
    this->CloseSound = NULL;
    this->DecideSound = NULL;
    this->WaveNumText = NULL;
    this->RemainingTimeText = NULL;
    this->PoolGearText = NULL;
    this->RewardRateText = NULL;
    this->RewardGearText = NULL;
    this->DescriptionText = NULL;
    this->ListArea = NULL;
    this->ListControl = NULL;
    this->OpenAnimation = NULL;
    this->CloseAnimation = NULL;
    this->TimerWidget = NULL;
}

void UHbkRhythmTowerRestTimeWidget::UpdateDescription(UWidget* Widget, bool bPlayAnimation, bool bPlaySound) {
}

void UHbkRhythmTowerRestTimeWidget::ProcessSuspendSave() {
}

void UHbkRhythmTowerRestTimeWidget::ProcessReady() {
}

void UHbkRhythmTowerRestTimeWidget::ProcessGiveUp() {
}

void UHbkRhythmTowerRestTimeWidget::OnClickedListItem(const UHbkButtonBaseWidget* Sender) {
}


