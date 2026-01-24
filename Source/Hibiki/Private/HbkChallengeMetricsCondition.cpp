#include "HbkChallengeMetricsCondition.h"

FHbkChallengeMetricsCondition::FHbkChallengeMetricsCondition() {
    this->MetricsType = EHbkChallengeMetricsType::Global;
    this->TargetNum = 0;
    this->CompOperator = EHbkChallengeCompOperator::Equal;
}

