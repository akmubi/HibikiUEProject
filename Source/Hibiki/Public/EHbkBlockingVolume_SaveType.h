#pragma once
#include "CoreMinimal.h"
#include "EHbkBlockingVolume_SaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkBlockingVolume_SaveType : uint8 {
    HBKBVOL_NONE,
    HBKBVOL_ACTIVATE,
    HBKBVOL_DEACTIVATE,
    HBKBVOL_DESTROY,
};

