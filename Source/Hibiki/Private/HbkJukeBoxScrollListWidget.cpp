#include "HbkJukeBoxScrollListWidget.h"

UHbkJukeBoxScrollListWidget::UHbkJukeBoxScrollListWidget() {
    this->ItemWidgetClass = NULL;
    this->SoundVerticalBox = NULL;
    this->SoundScrollBox = NULL;
    this->ListControl = NULL;
}

void UHbkJukeBoxScrollListWidget::StopMusicNotify() {
}

void UHbkJukeBoxScrollListWidget::PlayNextMusicNotify() {
}

void UHbkJukeBoxScrollListWidget::PlayMusicNotify(FText PlayingMusicText) {
}

void UHbkJukeBoxScrollListWidget::FinishRepeatAllNotify() {
}


