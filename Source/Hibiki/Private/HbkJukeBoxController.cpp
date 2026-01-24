#include "HbkJukeBoxController.h"

AHbkJukeBoxController::AHbkJukeBoxController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->JukeBoxWidget = NULL;
    this->StringTable = NULL;
    this->MusicDataTable = NULL;
    this->StopAudio = NULL;
    this->MenuInEvent = NULL;
    this->MenuOutEvent = NULL;
    this->PlayPrevMusicTime = 2.00f;
    this->HistorySavedNum = 20;
}

UHbkJukeBoxWidget* AHbkJukeBoxController::GetJukeBoxWidget() {
    return NULL;
}


