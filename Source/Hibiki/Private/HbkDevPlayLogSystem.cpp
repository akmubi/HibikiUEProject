#include "HbkDevPlayLogSystem.h"

UHbkDevPlayLogSystem::UHbkDevPlayLogSystem() {
    this->ProfileStatLogStartDelaySeconds = 10.00f;
    this->ProfileStatLogSendIntervalSeconds = 5.00f;
    this->bAllowStatGroupMemoryAggregation = true;
    this->LevelEntries.AddDefaulted(13);
    this->Asset = NULL;
}


