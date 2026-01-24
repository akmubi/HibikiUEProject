#pragma once
#include "CoreMinimal.h"
#include "EPhotoModeMotionParameterType.generated.h"

UENUM(BlueprintType)
enum class EPhotoModeMotionParameterType : uint8 {
    Normal,
    AttathWeapon,
    AttathItem,
    CatMode,
    OneHundGun,
    TwoHundGun,
    CountMax,
};

