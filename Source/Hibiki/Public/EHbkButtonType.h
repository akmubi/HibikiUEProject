#pragma once
#include "CoreMinimal.h"
#include "EHbkButtonType.generated.h"

UENUM(BlueprintType)
enum class EHbkButtonType : uint8 {
    ShortAndLong,
    Short,
    Long,
};

