#include "HbkMagnetActionWidget.h"

UHbkMagnetActionWidget::UHbkMagnetActionWidget() {
    this->DistRateViewer = NULL;
    this->DistRate = 0.00f;
    this->BaseCanvas = NULL;
    this->TimingWidget = NULL;
    this->TestState = EHbkMagnetActionState::State_None;
}

void UHbkMagnetActionWidget::SuccessMagnetTiming(bool bJustTiming) {
}

void UHbkMagnetActionWidget::StartMagnetTimingGame_Whole() {
}

void UHbkMagnetActionWidget::StartMagnetTimingGame_Half() {
}

void UHbkMagnetActionWidget::StartMagnetTimingGame() {
}

bool UHbkMagnetActionWidget::PlayAction(EHbkMagnetActionState Action, int32 LoopNum, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaySpeed, bool BlockPlaySameAnimation) {
    return false;
}


void UHbkMagnetActionWidget::FailedMagnetTimingGame() {
}

void UHbkMagnetActionWidget::EndInputResultAnim() {
}




