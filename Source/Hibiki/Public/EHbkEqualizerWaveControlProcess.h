#pragma once
#include "CoreMinimal.h"
#include "EHbkEqualizerWaveControlProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkEqualizerWaveControlProcess : uint8 {
    None,
    Prepare,
    Grid,
    Launch,
    End,
};

