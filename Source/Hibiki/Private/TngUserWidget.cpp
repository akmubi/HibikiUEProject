#include "TngUserWidget.h"

UTngUserWidget::UTngUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->IsChangeDraw = true;
    this->RegisterLayer = 0;
    this->DrawType = 0;
    this->IsChangeVisibleDrawType = true;
}

bool UTngUserWidget::SetGamePauseWithWidget(APlayerController* PlayerController, bool bPause) {
    return false;
}


bool UTngUserWidget::IsConsoleMachine() const {
    return false;
}


void UTngUserWidget::FinishTngUserWidget() {
}












