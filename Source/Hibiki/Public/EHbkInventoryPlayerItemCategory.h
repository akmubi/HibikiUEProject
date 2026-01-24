#pragma once
#include "CoreMinimal.h"
#include "EHbkInventoryPlayerItemCategory.generated.h"

UENUM(BlueprintType)
enum class EHbkInventoryPlayerItemCategory : uint8 {
    None,
    Ability,
    Attack,
    Combo,
    SpecialAttack,
    Partner,
    Chip,
    Costume,
};

