#pragma once
#include "CoreMinimal.h"
#include "EHbkEm5000SpotlightTrackMode.generated.h"

UENUM(BlueprintType)
enum class EHbkEm5000SpotlightTrackMode : uint8 {
    None,
    Transform,
    Angle,
};

