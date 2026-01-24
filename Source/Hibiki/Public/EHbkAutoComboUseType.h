#pragma once
#include "CoreMinimal.h"
#include "EHbkAutoComboUseType.generated.h"

UENUM(BlueprintType)
enum class EHbkAutoComboUseType : uint8 {
    Ground,
    ToAir,
    InAir,
};

