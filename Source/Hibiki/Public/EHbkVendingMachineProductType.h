#pragma once
#include "CoreMinimal.h"
#include "EHbkVendingMachineProductType.generated.h"

UENUM(BlueprintType)
enum class EHbkVendingMachineProductType : uint8 {
    None,
    Can,
    Item,
    Actor,
};

