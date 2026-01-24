#pragma once
#include "CoreMinimal.h"
#include "EHbkEmAttackSyncType.generated.h"

UENUM(BlueprintType)
enum class EHbkEmAttackSyncType : uint8 {
    EAST_NoSync,
    EAST_NextBeat,
    EAST_AdjustBeat,
};

