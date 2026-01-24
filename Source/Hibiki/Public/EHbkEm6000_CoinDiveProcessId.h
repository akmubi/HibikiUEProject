#pragma once
#include "CoreMinimal.h"
#include "EHbkEm6000_CoinDiveProcessId.generated.h"

UENUM(BlueprintType)
enum class EHbkEm6000_CoinDiveProcessId : uint8 {
    None,
    Wait,
    MoveEmbankment,
    PopupEmbankment,
    DestroyEmbankment,
    End,
};

