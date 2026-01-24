#include "HbkPlayerMetricsFunction.h"

UHbkPlayerMetricsFunction::UHbkPlayerMetricsFunction() {
}

bool UHbkPlayerMetricsFunction::ModifyStat_Increment(UObject* WorldContextObject, const FName& StatName) {
    return false;
}

bool UHbkPlayerMetricsFunction::ModifyStat_Decrement(UObject* WorldContextObject, const FName& StatName) {
    return false;
}

bool UHbkPlayerMetricsFunction::ModifyStat(UObject* WorldContextObject, const FName& StatName, int32 Value, EHbkPlayerMetricsStatModifier Modifier) {
    return false;
}

int32 UHbkPlayerMetricsFunction::GetStatValueOnStage(UObject* WorldContextObject, const FName& StatName) {
    return 0;
}

int32 UHbkPlayerMetricsFunction::GetStatValueOnProfile(UObject* WorldContextObject, const FName& StatName) {
    return 0;
}

int32 UHbkPlayerMetricsFunction::GetStatValueOnGlobal(UObject* WorldContextObject, const FName& StatName) {
    return 0;
}

UHbkPlayerMetrics* UHbkPlayerMetricsFunction::GetPlayerMetrics(UObject* WorldContextObject) {
    return NULL;
}


