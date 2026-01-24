#pragma once
#include "CoreMinimal.h"
#include "EHbkEm5000RhythmParryAction.generated.h"

UENUM(BlueprintType)
enum class EHbkEm5000RhythmParryAction : uint8 {
    None,
    Preparation1,
    Preparation2,
    Wait,
};

