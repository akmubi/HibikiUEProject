#pragma once
#include "CoreMinimal.h"
#include "ETngMathFuncCountdownState.generated.h"

UENUM(BlueprintType)
enum class ETngMathFuncCountdownState : uint8 {
    AlreadyZero,
    Progressing,
    Completed,
};

