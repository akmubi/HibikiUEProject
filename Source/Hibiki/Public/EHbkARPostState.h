#pragma once
#include "CoreMinimal.h"
#include "EHbkARPostState.generated.h"

UENUM(BlueprintType)
enum class EHbkARPostState : uint8 {
    StartState,
    State1,
    State2,
    State3,
    State4,
    DefaultState,
};

