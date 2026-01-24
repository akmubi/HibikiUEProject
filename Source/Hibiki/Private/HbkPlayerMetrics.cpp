#include "HbkPlayerMetrics.h"

UHbkPlayerMetrics::UHbkPlayerMetrics() {
    this->MetricsSettings = NULL;
    this->CachedGameMode = NULL;
}

bool UHbkPlayerMetrics::ModifyStat_Increment(const FName& StatName) {
    return false;
}

bool UHbkPlayerMetrics::ModifyStat_Decrement(const FName& StatName) {
    return false;
}

bool UHbkPlayerMetrics::ModifyStat(const FName& StatName, int32 Value, EHbkPlayerMetricsStatModifier Modifier) {
    return false;
}

bool UHbkPlayerMetrics::IsUnlockedChallenge(FName ChallengeName) const {
    return false;
}

int32 UHbkPlayerMetrics::GetStatValueOnStage(const FName& StatName) const {
    return 0;
}

int32 UHbkPlayerMetrics::GetStatValueOnProfile(const FName& StatName) const {
    return 0;
}

int32 UHbkPlayerMetrics::GetStatValueOnGlobal(const FName& StatName) const {
    return 0;
}


