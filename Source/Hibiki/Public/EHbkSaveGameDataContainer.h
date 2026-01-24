#pragma once
#include "CoreMinimal.h"
#include "EHbkSaveGameDataContainer.generated.h"

UENUM(BlueprintType)
enum class EHbkSaveGameDataContainer : uint8 {
    Global,
    Global_Latest,
    StageProgress,
    StageCheckpoint,
    Max,
};

