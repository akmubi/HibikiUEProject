#pragma once
#include "CoreMinimal.h"
#include "TngSoundCandidateListSelectionMode.generated.h"

UENUM(BlueprintType)
enum class TngSoundCandidateListSelectionMode : uint8 {
    CoordinateDirection,
    ListenerDirection,
};

