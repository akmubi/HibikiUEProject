#pragma once
#include "CoreMinimal.h"
#include "EHbkEm2000PipeEquipState.generated.h"

UENUM(BlueprintType)
enum class EHbkEm2000PipeEquipState : uint8 {
    NoEquip,
    OneHandEquip,
    BothHandEquip,
};

