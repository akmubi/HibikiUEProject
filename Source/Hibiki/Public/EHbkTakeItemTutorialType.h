#pragma once
#include "CoreMinimal.h"
#include "EHbkTakeItemTutorialType.generated.h"

UENUM(BlueprintType)
enum class EHbkTakeItemTutorialType : uint8 {
    None,
    Recovery,
    battery,
    Gear,
    OverCharge,
};

