#pragma once
#include "CoreMinimal.h"
#include "EHbkProductStateType.generated.h"

UENUM(BlueprintType)
enum class EHbkProductStateType : uint8 {
    None,
    Hidden,
    New,
    Unpurchase,
    Purchased,
};

