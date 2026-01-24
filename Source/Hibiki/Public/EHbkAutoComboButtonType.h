#pragma once
#include "CoreMinimal.h"
#include "EHbkAutoComboButtonType.generated.h"

UENUM(BlueprintType)
enum class EHbkAutoComboButtonType : uint8 {
    None,
    X,
    Y,
    Rest,
    BH,
    Dash,
    Parry,
    Magnet,
};

