#pragma once
#include "CoreMinimal.h"
#include "EHbkLatticeLaserCreateType.generated.h"

UENUM(BlueprintType)
enum class EHbkLatticeLaserCreateType : uint8 {
    Start,
    PrepareEnd,
    End,
};

