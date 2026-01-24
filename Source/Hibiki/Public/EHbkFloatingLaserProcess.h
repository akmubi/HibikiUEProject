#pragma once
#include "CoreMinimal.h"
#include "EHbkFloatingLaserProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkFloatingLaserProcess : uint8 {
    None,
    Notice,
    Attack,
    Move,
};

