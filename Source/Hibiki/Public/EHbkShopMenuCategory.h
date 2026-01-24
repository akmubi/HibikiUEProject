#pragma once
#include "CoreMinimal.h"
#include "EHbkShopMenuCategory.generated.h"

UENUM(BlueprintType)
enum class EHbkShopMenuCategory : uint8 {
    None,
    Store_Combo,
    Store_Partner,
    Store_SpAttack,
    Store_PowerUp,
    Store_Chip,
    Store_ChipCustom,
    Equip_SpAttack,
    Equip_Chip,
};

