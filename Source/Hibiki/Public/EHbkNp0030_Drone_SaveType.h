#pragma once
#include "CoreMinimal.h"
#include "EHbkNp0030_Drone_SaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkNp0030_Drone_SaveType : uint8 {
    NP0030_SAVE_NONE,
    NP0030_SAVE_ACTIVATE,
    NP0030_SAVE_DEACTIVATE,
    NP0030_SAVE_STOPHIDE,
    NP0030_SAVE_SHOW,
};

