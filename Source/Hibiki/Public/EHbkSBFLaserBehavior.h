#pragma once
#include "CoreMinimal.h"
#include "EHbkSBFLaserBehavior.generated.h"

UENUM(BlueprintType)
enum class EHbkSBFLaserBehavior : uint8 {
    None,
    AllSynchronize,
    AllAlternating,
    AllTracking,
    Num,
};

