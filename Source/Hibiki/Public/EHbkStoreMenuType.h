#pragma once
#include "CoreMinimal.h"
#include "EHbkStoreMenuType.generated.h"

UENUM(BlueprintType)
enum class EHbkStoreMenuType : uint8 {
    None,
    PurchaseAttacks,
    PurchaseSpecialAttacks,
    PurchaseItems,
    PurchaseChips,
    EquipmentSpecialAttacks,
    EquipmentChips,
};

