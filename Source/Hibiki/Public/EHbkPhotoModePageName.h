#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoModePageName.generated.h"

UENUM(BlueprintType)
enum class EHbkPhotoModePageName : uint8 {
    CameraAdjustment,
    Filter,
    Pose,
    Frame,
    Sticker,
    Max,
};

