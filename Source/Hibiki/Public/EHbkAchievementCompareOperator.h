#pragma once
#include "CoreMinimal.h"
#include "EHbkAchievementCompareOperator.generated.h"

UENUM(BlueprintType)
enum class EHbkAchievementCompareOperator : uint8 {
    Equal,
    Less,
    LessOrEqual,
    Greater,
    GreaterOrEqual,
};

