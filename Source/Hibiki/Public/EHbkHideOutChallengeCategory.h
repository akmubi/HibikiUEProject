#pragma once
#include "CoreMinimal.h"
#include "EHbkHideOutChallengeCategory.generated.h"

UENUM(BlueprintType)
enum class EHbkHideOutChallengeCategory : uint8 {
    Battle,
    Item,
    Stage,
    StageOnly,
    Etc,
    Max,
};

