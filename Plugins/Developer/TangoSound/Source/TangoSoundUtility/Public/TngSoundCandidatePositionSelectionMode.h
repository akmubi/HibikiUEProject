#pragma once
#include "CoreMinimal.h"
#include "TngSoundCandidatePositionSelectionMode.generated.h"

UENUM(BlueprintType)
enum class TngSoundCandidatePositionSelectionMode : uint8 {
    NearestOnly,
    MiddleOnly,
    FarestOnly,
    NearestOnce,
    MiddleOnce,
    FarestOnce,
    NearerFour,
    NearerTwo,
};

