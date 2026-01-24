#pragma once
#include "CoreMinimal.h"
#include "EHbkPartnerIconState.generated.h"

UENUM(BlueprintType)
enum class EHbkPartnerIconState : uint8 {
    State_None,
    State_Idle,
    State_Visible,
    State_Available,
    State_Possible,
    State_LockOn,
    State_Used,
    State_Sleep,
    State_ScreenEdgeNear,
    State_ScreenEdgeFar,
};

