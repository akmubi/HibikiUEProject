#include "HbkBossCommandScoreBarWidget.h"

UHbkBossCommandScoreBarWidget::UHbkBossCommandScoreBarWidget() {
    this->ButtonClass = NULL;
    this->BeatLineClass = NULL;
    this->ScoreTime = 0.00f;
    this->ShrinkedTimeNum = 0.00f;
    this->AddOffsetTime = 0.75f;
}

void UHbkBossCommandScoreBarWidget::Start7500(UHbkEm7500_CommandBattleParameter* DataAsset, EHbkDifficultyType Type, int32 CommandIndex, float ShrinkedTime) {
}

void UHbkBossCommandScoreBarWidget::Start6000(UHbkEm6000_CommandBattleParameterAsset* DataAsset, EHbkDifficultyType Type, int32 CommandIndex, float ShrinkedTime) {
}

void UHbkBossCommandScoreBarWidget::Start5000(UHbkEm5000_BridgeParameterAsset* DataAsset, EHbkDifficultyType Type, int32 CommandIndex, float ShrinkedTime) {
}

void UHbkBossCommandScoreBarWidget::SetPartsWidget(UOverlay* NewScorePanel, UOverlay* NewLinePanel, UPanelWidget* NewSizePanel) {
}

void UHbkBossCommandScoreBarWidget::SetOffsetTime(int32 OffsetTime) {
}

void UHbkBossCommandScoreBarWidget::Receive_OnScoreStart() {
}

void UHbkBossCommandScoreBarWidget::Receive_OnScoreEnd() {
}

void UHbkBossCommandScoreBarWidget::Receive_OnRegisterScore(const TArray<FHbkBossCommandBattleCommand>& ScoreList) {
}

void UHbkBossCommandScoreBarWidget::Receive_OnInputResult(int32 Index, EHbkBossCommandBattleResult ResultType, bool IsJust) {
}

void UHbkBossCommandScoreBarWidget::Receive_OnInputPreBegin(float ShrinkedTime) {
}

void UHbkBossCommandScoreBarWidget::Receive_OnInputEnd() {
}

void UHbkBossCommandScoreBarWidget::Receive_OnBeatTiming(int32 NoteIndex, const FHbkRhythmNoteParam& NoteParam) {
}

void UHbkBossCommandScoreBarWidget::OnQuarterNote(int32 NoteCount, bool bDownBeat) {
}



void UHbkBossCommandScoreBarWidget::On8thNote(int32 NoteCount, bool bDownBeat) {
}


