#pragma once
#include "CoreMinimal.h"
#include "EHbkSpecialAttackTargetSelectType.generated.h"

UENUM(BlueprintType)
enum class EHbkSpecialAttackTargetSelectType : uint8 {
    Normal,
    CameraDirection,
    NotSelect,
};

