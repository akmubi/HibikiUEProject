#include "HbkRhythmTowerStartHighScoreItemWidget.h"

UHbkRhythmTowerStartHighScoreItemWidget::UHbkRhythmTowerStartHighScoreItemWidget() {
    this->ItemType = EHbkRhythmTowerStartHighScoreItemType::None;
    this->TitleText = NULL;
    this->ValueText = NULL;
    this->NoScoreValueText = NULL;
    this->RankIcon = NULL;
    this->NoRankIcon = NULL;
    this->NoScoreRankText = NULL;
    this->Background = NULL;
    this->NoScoreBackground = NULL;
    this->ShowTextAnimation = NULL;
    this->ShowIconAnimation = NULL;
}

void UHbkRhythmTowerStartHighScoreItemWidget::OnFinishLoadRankIconTexture() {
}


