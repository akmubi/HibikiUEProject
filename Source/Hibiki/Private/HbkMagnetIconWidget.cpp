#include "HbkMagnetIconWidget.h"

UHbkMagnetIconWidget::UHbkMagnetIconWidget() {
    this->Animation = NULL;
    this->BaseOverlay = NULL;
    this->GuideAngleOverlay = NULL;
    this->CircleImg = NULL;
    this->Guide_InRangeAnim = NULL;
    this->Guide_OutRangeAnim = NULL;
    this->SubCircleBase = NULL;
    this->RangeIcon = NULL;
    this->TimingWidget = NULL;
    this->BeforeScale = 0.00f;
    this->AvailableLoopAnim = NULL;
    this->CheckState = EHbkMagnetAction::State_None;
    this->dist = 0.00f;
}

void UHbkMagnetIconWidget::SuccessMagnetTiming(bool bJustTiming) {
}

void UHbkMagnetIconWidget::StopAction(EHbkMagnetAction PlayAnim) {
}

void UHbkMagnetIconWidget::StartMagnetTimingGame() {
}

void UHbkMagnetIconWidget::PlayGuideLoopAnim(int32 NoteCount, bool bDownBeat) {
}

void UHbkMagnetIconWidget::PlayAvailableLoopAnim(int32 NoteCount, bool bDownBeat) {
}

bool UHbkMagnetIconWidget::PlayAction(EHbkMagnetAction PlayAnim, int32 LoopNum, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaySpeed, bool BlockPlaySameAnimation) {
    return false;
}

void UHbkMagnetIconWidget::FailedMagnetTimingGame() {
}




void UHbkMagnetIconWidget::BindPlayGuideLoopAnim() {
}

void UHbkMagnetIconWidget::BindPlayAvailableLoopAnim() {
}


