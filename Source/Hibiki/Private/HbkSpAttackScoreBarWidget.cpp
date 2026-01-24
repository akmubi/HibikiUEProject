#include "HbkSpAttackScoreBarWidget.h"

UHbkSpAttackScoreBarWidget::UHbkSpAttackScoreBarWidget() {
    this->ButtonClass = NULL;
    this->BeatLineClass = NULL;
}

void UHbkSpAttackScoreBarWidget::SetPartsWidget(UOverlay* NewScorePanel, UOverlay* NewLinePanel, UPanelWidget* NewSizePanel) {
}

void UHbkSpAttackScoreBarWidget::Receive_OnScoreStart() {
}

void UHbkSpAttackScoreBarWidget::Receive_OnScoreEnd() {
}

void UHbkSpAttackScoreBarWidget::Receive_OnRhythmScoreResult(float TotalScoreRate) {
}

void UHbkSpAttackScoreBarWidget::Receive_OnRegisterScore(const TArray<FHbkRhythmNoteParam>& ScoreList, float OffsetTime) {
}

void UHbkSpAttackScoreBarWidget::Receive_OnInputResult(EHbkRhythmScoreResult ResultType, int32 Index, bool bInput) {
}

void UHbkSpAttackScoreBarWidget::Receive_OnBeatTiming(int32 NoteIndex, const FHbkRhythmNoteParam& NoteParam) {
}

void UHbkSpAttackScoreBarWidget::OnQuarterNote(int32 NoteCount, bool bDownBeat) {
}



void UHbkSpAttackScoreBarWidget::On8thNote(int32 NoteCount, bool bDownBeat) {
}


