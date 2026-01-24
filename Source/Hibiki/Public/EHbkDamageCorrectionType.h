#pragma once
#include "CoreMinimal.h"
#include "EHbkDamageCorrectionType.generated.h"

UENUM(BlueprintType)
enum class EHbkDamageCorrectionType : uint8 {
    Rate,
    Limit,
};

