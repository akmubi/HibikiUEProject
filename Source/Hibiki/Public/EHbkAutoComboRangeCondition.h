#pragma once
#include "CoreMinimal.h"
#include "EHbkAutoComboRangeCondition.generated.h"

UENUM(BlueprintType)
enum class EHbkAutoComboRangeCondition : uint8 {
    None,
    Short,
    Middle,
    Far,
};

