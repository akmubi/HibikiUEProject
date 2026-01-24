#pragma once
#include "CoreMinimal.h"
#include "EHbkMagnetState.generated.h"

UENUM(BlueprintType)
enum class EHbkMagnetState : uint8 {
    None,
    State_Init,
    State_Wait,
    State_Connect,
    State_Move,
    State_StayAttach,
    State_Finish,
    State_ExThrow,
};

