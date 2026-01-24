#pragma once
#include "CoreMinimal.h"
#include "EHbkEqualizerWaveGroundProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkEqualizerWaveGroundProcess : uint8 {
    None,
    Scale,
    Wait,
    Destroy,
};

