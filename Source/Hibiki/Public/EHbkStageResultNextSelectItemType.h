#pragma once
#include "CoreMinimal.h"
#include "EHbkStageResultNextSelectItemType.generated.h"

UENUM(BlueprintType)
enum class EHbkStageResultNextSelectItemType : uint8 {
    GotoHideOut,
    NextStage,
    Retry,
    Max,
};

