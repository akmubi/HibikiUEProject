#pragma once
#include "CoreMinimal.h"
#include "EHbkSoloLightBlendMode.generated.h"

UENUM(BlueprintType)
enum class EHbkSoloLightBlendMode : uint8 {
    BlendModeAddAndMult,
    BlendModeMult,
};

