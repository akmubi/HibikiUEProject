#pragma once
#include "CoreMinimal.h"
#include "EEnvQueryHightlightMode2.generated.h"

UENUM(BlueprintType)
enum class EEnvQueryHightlightMode2 : uint8 {
    All,
    Best5Pct,
    Best25Pct,
};

