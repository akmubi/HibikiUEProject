#pragma once
#include "CoreMinimal.h"
#include "EHbkEnemyVisualizeType.generated.h"

UENUM(BlueprintType)
enum class EHbkEnemyVisualizeType : uint8 {
    None,
    ToughDeactive,
    OverKill,
};

