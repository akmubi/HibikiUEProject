#pragma once
#include "CoreMinimal.h"
#include "EHbkProductCategory.generated.h"

UENUM(BlueprintType)
enum class EHbkProductCategory : uint8 {
    None,
    Combos,
    Skills,
    Partners,
    SpAttack,
    Items,
    Chips,
    Costume,
};

