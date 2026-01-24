#pragma once
#include "CoreMinimal.h"
#include "EHbkShadeDirectionOverrideType.generated.h"

UENUM(BlueprintType)
enum class EHbkShadeDirectionOverrideType : uint8 {
    WorldRelative,
    CameraRelative,
    Num,
};

