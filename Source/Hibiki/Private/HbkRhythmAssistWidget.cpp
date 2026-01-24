#include "HbkRhythmAssistWidget.h"

UHbkRhythmAssistWidget::UHbkRhythmAssistWidget() {
    this->CirclePartsClass = NULL;
}

void UHbkRhythmAssistWidget::StartRhythmAssist() {
}

void UHbkRhythmAssistWidget::SetPartsWidget(UOverlay* NewCirclePanel, UWidget* NewSizePanel, UHbkRhythmAssistCatWidget* NewCatWidget, UPanelWidget* NewInputPanel) {
}

void UHbkRhythmAssistWidget::Receive_OnBeatEvent(int32 NoteCount, bool bDownBeat) {
}

void UHbkRhythmAssistWidget::OnNotJustTimingInput() {
}

void UHbkRhythmAssistWidget::OnJustTimingInput() {
}

void UHbkRhythmAssistWidget::OnBeatHitPerfect() {
}

void UHbkRhythmAssistWidget::OnBeatHitGood() {
}

void UHbkRhythmAssistWidget::OnBeatHitFailure() {
}


void UHbkRhythmAssistWidget::OnAutoActionStateChange(bool bEnable) {
}

void UHbkRhythmAssistWidget::OnAutoActionInputSuccess() {
}

void UHbkRhythmAssistWidget::OnAutoActionInputFailure() {
}

void UHbkRhythmAssistWidget::EndRhythmAssist() {
}


