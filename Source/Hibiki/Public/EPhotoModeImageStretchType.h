#pragma once
#include "CoreMinimal.h"
#include "EPhotoModeImageStretchType.generated.h"

UENUM(BlueprintType)
enum class EPhotoModeImageStretchType : uint8 {
    None,
    Stretch,
    Fixed,
    CountMax,
};

