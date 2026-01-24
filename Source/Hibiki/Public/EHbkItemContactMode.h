#pragma once
#include "CoreMinimal.h"
#include "EHbkItemContactMode.generated.h"

UENUM(BlueprintType)
enum class EHbkItemContactMode : uint8 {
    Standard,
    Special,
    OnMagnetRail,
    VolumeOnly,
    TriggerOnly,
};

