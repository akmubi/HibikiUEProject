#pragma once
#include "CoreMinimal.h"
#include "EAreaPointRangeType.generated.h"

UENUM(BlueprintType)
enum class EAreaPointRangeType : uint8 {
    Short = 2,
    Middle = 5,
    Long = 10,
    Other = 16,
    None = 0,
};

