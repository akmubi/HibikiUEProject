#include "HbkJukeBoxMusicPlayerWidget.h"

UHbkJukeBoxMusicPlayerWidget::UHbkJukeBoxMusicPlayerWidget() {
    this->TimeBarSizeBox = NULL;
    this->Text_MusicTitle = NULL;
    this->Text_CurrentTime = NULL;
    this->Text_TotalTime = NULL;
    this->NowPlaying = NULL;
    this->ControlPanel = NULL;
    this->JukeboxPurchaseBar_UI = NULL;
    this->JukeboxRepeatButton_UI = NULL;
    this->JukeboxPlayStopButton_UI = NULL;
    this->JukeboxShuffleButton_UI = NULL;
    this->JukeboxNextButton_UI = NULL;
    this->JukeboxBackButton_UI = NULL;
    this->NotEnoughText = NULL;
    this->Text_RequiredTicket = NULL;
}

void UHbkJukeBoxMusicPlayerWidget::SwitchRepeatTypeNotify(EHbkJukeBoxRepeatType RepeatType) {
}

void UHbkJukeBoxMusicPlayerWidget::StopMusicNotify() {
}









void UHbkJukeBoxMusicPlayerWidget::PlayMusicNotify(FText PlayingMusicText) {
}


void UHbkJukeBoxMusicPlayerWidget::FinishMusicNotify() {
}

void UHbkJukeBoxMusicPlayerWidget::ChangeShuffleEnable(bool bShuffleEnable) {
}



