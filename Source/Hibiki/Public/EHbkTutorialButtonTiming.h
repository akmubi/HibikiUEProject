#pragma once
#include "CoreMinimal.h"
#include "EHbkTutorialButtonTiming.generated.h"

UENUM(BlueprintType)
enum class EHbkTutorialButtonTiming : uint8 {
    Timing_None,
    Timing_Early,
    Timing_Just,
    Timing_Late,
    Timing_Miss,
};

