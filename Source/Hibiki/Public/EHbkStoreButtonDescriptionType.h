#pragma once
#include "CoreMinimal.h"
#include "EHbkStoreButtonDescriptionType.generated.h"

UENUM(BlueprintType)
enum class EHbkStoreButtonDescriptionType : uint8 {
    CostumeMenu,
    SelectMenu,
    ItemMenu,
    AttackMenu,
    SpecialAttackMenu,
    ChipMenu,
};

