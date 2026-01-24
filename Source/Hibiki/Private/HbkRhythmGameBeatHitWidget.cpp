#include "HbkRhythmGameBeatHitWidget.h"

UHbkRhythmGameBeatHitWidget::UHbkRhythmGameBeatHitWidget() {
    this->BaseOverlay = NULL;
    this->PressButtonClass = NULL;
    this->Hold_RightClass = NULL;
    this->Hold_LeftClass = NULL;
    this->TwoBeatsHold_RightClass = NULL;
    this->TwoBeatsHold_LeftClass = NULL;
    this->ThreeBeatsHold_RightClass = NULL;
    this->ThreeBeatsHold_LeftClass = NULL;
    this->FourBeatsHold_RightClass = NULL;
    this->FourBeatsHold_LeftClass = NULL;
    this->NoteNum = -1.00f;
}

void UHbkRhythmGameBeatHitWidget::VisibilityChanged(ESlateVisibility InVisibility) {
}

void UHbkRhythmGameBeatHitWidget::Receive_OnScoreStart() {
}

void UHbkRhythmGameBeatHitWidget::Receive_OnScoreEnd() {
}

void UHbkRhythmGameBeatHitWidget::Receive_OnRhythmScoreResult(float TotalScoreRate) {
}

void UHbkRhythmGameBeatHitWidget::Receive_OnRegisterScore(const TArray<FHbkRhythmNoteParam>& ScoreList, float OffsetTime) {
}

void UHbkRhythmGameBeatHitWidget::Receive_OnInputResult(EHbkRhythmScoreResult ResultType, int32 Index, bool bInput) {
}

void UHbkRhythmGameBeatHitWidget::Receive_OnBeatTiming(int32 NoteIndex, const FHbkRhythmNoteParam& NoteParam) {
}





void UHbkRhythmGameBeatHitWidget::OnQuarterNote(int32 NoteCount, bool bDownBeat) {
}

void UHbkRhythmGameBeatHitWidget::On8thNote(int32 NoteCount, bool bDownBeat) {
}

void UHbkRhythmGameBeatHitWidget::On16thNote(int32 NoteCount, bool bDownBeat) {
}



