#pragma once
#include "CoreMinimal.h"
#include "EEraseResult.generated.h"

UENUM(BlueprintType)
enum class EEraseResult : uint8 {
    Erased,
    CouldntErased,
    NotFound,
};

