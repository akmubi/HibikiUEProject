#pragma once
#include "CoreMinimal.h"
#include "TngSoundAssignToLayer.generated.h"

UENUM(BlueprintType)
enum class TngSoundAssignToLayer : uint8 {
    Layer_Uncategorized,
    Layer_Disable,
    Layer_100M,
    Layer_200M,
    Layer_500M,
    Layer_10km,
    Layer_50M,
    Layer_0M,
    Layer_1000M,
};

