#pragma once
#include "CoreMinimal.h"
#include "EHbkBPMRushStartListItemType.generated.h"

UENUM(BlueprintType)
enum class EHbkBPMRushStartListItemType : uint8 {
    None,
    Easy,
    Normal,
    Ex,
    DisabledEx,
    ReturnToHideout,
};

