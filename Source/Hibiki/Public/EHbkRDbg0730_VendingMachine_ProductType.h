#pragma once
#include "CoreMinimal.h"
#include "EHbkRDbg0730_VendingMachine_ProductType.generated.h"

UENUM(BlueprintType)
enum class EHbkRDbg0730_VendingMachine_ProductType : uint8 {
    None,
    Can,
    Item,
    Actor,
};

