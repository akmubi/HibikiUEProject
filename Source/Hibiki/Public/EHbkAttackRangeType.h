#pragma once
#include "CoreMinimal.h"
#include "EHbkAttackRangeType.generated.h"

UENUM(BlueprintType)
enum class EHbkAttackRangeType : uint8 {
    Range_None,
    Range_Short,
    Range_Middle,
    Range_Long = 4,
    Range_All = 7,
};

