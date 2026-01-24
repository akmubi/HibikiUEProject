#pragma once
#include "CoreMinimal.h"
#include "EHbkKaleBitState.generated.h"

UENUM(BlueprintType)
enum class EHbkKaleBitState : uint8 {
    Deactive,
    Activating,
    Active,
    Deactivating,
    ExecFloatLaser,
    ExecFloatLaserQuick,
    ExecShotFourCombi,
    ExecRhtyhmParry,
};

