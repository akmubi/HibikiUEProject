#pragma once
#include "CoreMinimal.h"
#include "EHbkEm6000_CoinSplashProcessId.generated.h"

UENUM(BlueprintType)
enum class EHbkEm6000_CoinSplashProcessId : uint8 {
    None,
    Begin,
    Move,
    End,
};

