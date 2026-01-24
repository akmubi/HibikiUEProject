#pragma once
#include "CoreMinimal.h"
#include "EHbkPartnerTargetPointAction.generated.h"

UENUM(BlueprintType)
enum class EHbkPartnerTargetPointAction : uint8 {
    State_None,
    State_Idle,
    State_Visible,
    State_Available,
    State_Possible,
    State_Possible_Loop,
    State_LockOn_In,
    State_LockOn_Loop,
    State_Used,
    State_Sleep,
};

