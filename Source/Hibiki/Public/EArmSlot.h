#pragma once
#include "CoreMinimal.h"
#include "EArmSlot.generated.h"

UENUM(BlueprintType)
enum class EArmSlot : uint8 {
    ArmSlotUpL,
    ArmSlotDownL,
    ArmSlotUpR,
    ArmSlotDownR,
};

