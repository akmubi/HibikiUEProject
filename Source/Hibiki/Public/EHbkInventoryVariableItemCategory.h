#pragma once
#include "CoreMinimal.h"
#include "EHbkInventoryVariableItemCategory.generated.h"

UENUM(BlueprintType)
enum class EHbkInventoryVariableItemCategory : uint8 {
    None,
    Circuit,
    LifeUp,
    LifeUp_Piece,
    GaugeUp,
    GaugeUp_Piece,
    LifeTank,
    LifeTank_Piece,
    SpecialAttackSlot,
    ChipSlot,
    Ticket,
};

