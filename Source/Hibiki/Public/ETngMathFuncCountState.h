#pragma once
#include "CoreMinimal.h"
#include "ETngMathFuncCountState.generated.h"

UENUM(BlueprintType)
enum class ETngMathFuncCountState : uint8 {
    AlreadyMin,
    ArriveMin,
    Progressing,
    ArriveMax,
    AlreadyMax,
};

