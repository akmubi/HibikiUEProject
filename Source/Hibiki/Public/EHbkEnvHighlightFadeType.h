#pragma once
#include "CoreMinimal.h"
#include "EHbkEnvHighlightFadeType.generated.h"

UENUM(BlueprintType)
enum class EHbkEnvHighlightFadeType : uint8 {
    EnvHighlightAlways,
    EnvHighlightDistanceFade,
};

