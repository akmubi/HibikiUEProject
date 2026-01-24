#pragma once
#include "CoreMinimal.h"
#include "EHbkInventoryCategory.generated.h"

UENUM(BlueprintType)
enum class EHbkInventoryCategory : uint8 {
    None,
    PlayerItem,
    VariableItem,
    LatestVariableItem,
    FileItem,
    LatestFileItem,
};

