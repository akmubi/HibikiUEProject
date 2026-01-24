#include "HbkAchievementCondition.h"

FHbkAchievementCondition::FHbkAchievementCondition() {
    this->StatValue = 0;
    this->StatSection = EHbkAchievementStatSection::Global;
    this->CompareOperator = EHbkAchievementCompareOperator::Equal;
    this->bTriggerUnlock = false;
}

