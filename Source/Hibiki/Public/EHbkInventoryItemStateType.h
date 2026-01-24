#pragma once
#include "CoreMinimal.h"
#include "EHbkInventoryItemStateType.generated.h"

UENUM(BlueprintType)
enum class EHbkInventoryItemStateType : uint8 {
    None,
    New,
    Checked,
};

