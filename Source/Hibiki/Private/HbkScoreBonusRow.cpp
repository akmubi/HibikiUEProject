#include "HbkScoreBonusRow.h"

FHbkScoreBonusRow::FHbkScoreBonusRow() {
    this->ActionType = EHbkScoreActionType::None;
    this->Score = 0.00f;
    this->ScoreScale = 0.00f;
    this->ScoreScaleTime = 0.00f;
    this->ValidNoteCount = 0;
}

