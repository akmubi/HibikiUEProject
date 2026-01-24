#pragma once
#include "CoreMinimal.h"
#include "FHbkGameplayTask_EVLabEventType.generated.h"

UENUM(BlueprintType)
enum class FHbkGameplayTask_EVLabEventType : uint8 {
    PreSupply,
    Prepare,
    BeforeSupply,
    Suppilied,
    SucceededParryPerfect,
    SucceededParryNice,
    Failed,
    DiedEnemyGroup,
    None,
};

