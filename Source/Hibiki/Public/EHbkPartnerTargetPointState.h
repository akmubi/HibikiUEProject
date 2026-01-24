#pragma once
#include "CoreMinimal.h"
#include "EHbkPartnerTargetPointState.generated.h"

UENUM(BlueprintType)
enum class EHbkPartnerTargetPointState : uint8 {
    State_None,
    State_Idle,
    State_Visible,
    State_Available,
    State_Possible,
    State_LockOn,
    State_Used,
    State_Sleep,
    State_LongRange,
    State_ScreenOut,
};

