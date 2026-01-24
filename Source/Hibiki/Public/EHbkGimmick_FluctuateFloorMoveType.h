#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_FluctuateFloorMoveType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_FluctuateFloorMoveType : uint8 {
    Once,
    Loop,
    UpStateChange,
    SignWait,
};

