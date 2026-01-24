#include "HbkStageResultStats.h"

FHbkStageResultStats::FHbkStageResultStats() {
    this->TotalDamage = 0.00f;
    this->ClearTime = 0.00f;
    this->JustTimingPercent = 0.00f;
    this->ContinueCount = 0;
    this->SecretFoundCount = 0;
    this->SecretFoundCountMax = 0;
    this->IsDifficultyChanged = false;
    this->bRankDownByContinue = false;
}

