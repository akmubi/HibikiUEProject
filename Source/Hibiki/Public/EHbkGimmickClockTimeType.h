#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickClockTimeType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmickClockTimeType : uint8 {
    TotalPlayTime,
    LocalTime,
    ActivateTime,
};

