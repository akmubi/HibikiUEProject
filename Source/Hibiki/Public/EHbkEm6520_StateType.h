#pragma once
#include "CoreMinimal.h"
#include "EHbkEm6520_StateType.generated.h"

UENUM(BlueprintType)
enum class EHbkEm6520_StateType : uint8 {
    None,
    Wait,
    Begin,
    Loop,
    Win,
    Lose,
};

