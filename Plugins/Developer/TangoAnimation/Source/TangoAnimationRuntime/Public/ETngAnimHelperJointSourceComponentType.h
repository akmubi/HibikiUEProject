#pragma once
#include "CoreMinimal.h"
#include "ETngAnimHelperJointSourceComponentType.generated.h"

UENUM(BlueprintType)
enum class ETngAnimHelperJointSourceComponentType : uint8 {
    None,
    RotationX,
    RotationY,
    RotationZ,
    TranslationX,
    TranslationY,
    TranslationZ,
    Distance,
};

