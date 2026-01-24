#pragma once
#include "CoreMinimal.h"
#include "EHbkGameEnvBlendOption.generated.h"

UENUM(BlueprintType)
enum class EHbkGameEnvBlendOption : uint8 {
    Linear,
    EaseInOut,
    EaseIn,
    EaseOut,
    CustomCurve,
};

