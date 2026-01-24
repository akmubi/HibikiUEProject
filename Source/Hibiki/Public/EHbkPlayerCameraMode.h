#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerCameraMode.generated.h"

UENUM(BlueprintType)
enum class EHbkPlayerCameraMode : uint8 {
    None,
    Moving,
    Combat_AutoCamera,
    Combat_Lockon,
};

