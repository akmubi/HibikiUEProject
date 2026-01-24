#pragma once
#include "CoreMinimal.h"
#include "EHbkEqualizerWaveGeneratorProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkEqualizerWaveGeneratorProcess : uint8 {
    None,
    Attach,
    DuringInstallation,
    Installed,
    Launch,
    Break,
    End,
};

