#pragma once
#include "CoreMinimal.h"
#include "EHbkEqualizerWaveGridProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkEqualizerWaveGridProcess : uint8 {
    None,
    Floor,
    Wall,
    Deployed,
    Destroy,
};

