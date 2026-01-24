#pragma once
#include "CoreMinimal.h"
#include "EHbkTutorialDisplayType.generated.h"

UENUM(BlueprintType)
enum class EHbkTutorialDisplayType : uint8 {
    Display_None,
    Display_Attack1,
    Display_Attack2,
    Display_Attack3,
    Display_Attack4,
    Display_BeatHit,
};

