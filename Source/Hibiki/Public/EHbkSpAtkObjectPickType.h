#pragma once
#include "CoreMinimal.h"
#include "EHbkSpAtkObjectPickType.generated.h"

UENUM(BlueprintType)
enum class EHbkSpAtkObjectPickType : uint8 {
    All,
    Random,
    RandomOnce,
};

