#pragma once
#include "CoreMinimal.h"
#include "EHbkVendingMachine_RD_ProductType.generated.h"

UENUM(BlueprintType)
enum class EHbkVendingMachine_RD_ProductType : uint8 {
    None,
    Can,
    Item,
    Actor,
};

