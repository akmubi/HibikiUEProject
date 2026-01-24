#include "HbkTutorialWidget.h"

UHbkTutorialWidget::UHbkTutorialWidget() {
    this->BeatButtonClass = NULL;
    this->InputLineClass = NULL;
    this->ButtonLineClass = NULL;
    this->BeatJudgeClass = NULL;
    this->JustTimingRange = 0.05f;
    this->GoodTimingRange = 0.20f;
    this->FailedTimingRange = 0.30f;
}

void UHbkTutorialWidget::StartMoveLine() {
}

void UHbkTutorialWidget::SetTimingRange(float NewJustTimingRange, float NewGoodTimingRange, float NewFailedTimingRange) {
}

void UHbkTutorialWidget::SetScore(UHbkTutorialManager* Manager) {
}

void UHbkTutorialWidget::SetInfo(UPanelWidget* NewBeatPanel, UOverlay* NewButtonPanel, UOverlay* NewLineOverlayPanel, UCanvasPanel* NewLineCanvasPanel, UOverlay* NewJudgeTextPanel, UTngUserWidget* NewMoveLineWidget) {
}

void UHbkTutorialWidget::SetBeatHit(UHbkTutorialManager* Manager, FHbkTutorialScoreRow BeatHitNote) {
}

void UHbkTutorialWidget::ResetBeat() {
}

bool UHbkTutorialWidget::GetTutorialResult(EHbkTutorialResultType& Result, bool bCallDelegate) {
    return false;
}

int32 UHbkTutorialWidget::GetNearButtonNum() {
    return 0;
}

void UHbkTutorialWidget::CheckPlayerInput(FHbkTutorialScoreRow Note, EHbkTutorialButtonTiming ButtonTiming) {
}






