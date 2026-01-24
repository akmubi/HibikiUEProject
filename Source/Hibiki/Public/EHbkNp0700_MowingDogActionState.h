#pragma once
#include "CoreMinimal.h"
#include "EHbkNp0700_MowingDogActionState.generated.h"

UENUM(BlueprintType)
enum class EHbkNp0700_MowingDogActionState : uint8 {
    None,
    Idle,
    Sit,
    Down,
    Run,
    TurnLeft,
    TurnRight,
    TurnAround,
};

