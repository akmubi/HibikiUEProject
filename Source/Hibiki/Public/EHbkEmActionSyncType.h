#pragma once
#include "CoreMinimal.h"
#include "EHbkEmActionSyncType.generated.h"

UENUM(BlueprintType)
enum class EHbkEmActionSyncType : uint8 {
    EAST_NoSync,
    EAST_NextBeat,
    EAST_AdjustBeat,
    EAST_AdjustOrNextBeat = 4,
};

