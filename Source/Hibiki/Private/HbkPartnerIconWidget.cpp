#include "HbkPartnerIconWidget.h"

UHbkPartnerIconWidget::UHbkPartnerIconWidget() {
    this->DistRateViewer = NULL;
    this->DistRate = 0.00f;
    this->BaseCanvas = NULL;
    this->st = EHbkPartnerIconState::State_None;
}

bool UHbkPartnerIconWidget::PlayAction(EHbkPartnerIconState Action, int32 LoopNum, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaySpeed, bool BlockPlaySameAnimation) {
    return false;
}






