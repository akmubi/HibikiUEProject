#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerEquipResult.generated.h"

UENUM(BlueprintType)
enum class EHbkPlayerEquipResult : uint8 {
    UnknownError,
    Success,
    FailedEquip,
    CanEquip,
    Chip_NotHave,
    Chip_AlreadySameTypeEquip,
    Chip_SlotOver,
    Chip_CostOver,
    Costume_CanNotWear,
};

