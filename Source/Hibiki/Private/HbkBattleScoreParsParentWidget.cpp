#include "HbkBattleScoreParsParentWidget.h"

UHbkBattleScoreParsParentWidget::UHbkBattleScoreParsParentWidget() {
    this->AddSoreWidgetClass = NULL;
    this->PlusMagnificationScoreWidgetClass = NULL;
    this->MinusMagnificationScoreWidgetClass = NULL;
    this->DrawAllNum = 4;
    this->DrawMagnificationNum = 3;
    this->PartsSize = 150.00f;
    this->DrawTextAsset = NULL;
}

void UHbkBattleScoreParsParentWidget::UpdateAddPartsPos() {
}

void UHbkBattleScoreParsParentWidget::StartMagnification(EHbkScoreActionType ActionType, float ScoreScale, int32 BarCount, float Duration) {
}

void UHbkBattleScoreParsParentWidget::SetInfo(UPanelWidget* NewAddScorePanel, UPanelWidget* NewMagnificationScorePanel) {
}

void UHbkBattleScoreParsParentWidget::FinishMagnification(EHbkScoreActionType ActionType) {
}

void UHbkBattleScoreParsParentWidget::AddScore(EHbkScoreActionType ActionType, FGameplayTagContainer ActionTags, float ChangeValue) {
}


