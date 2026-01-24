#pragma once
#include "CoreMinimal.h"
#include "EHbkLightType.generated.h"

UENUM(BlueprintType)
enum class EHbkLightType : uint8 {
    Color,
    ShadowMain,
    Shadow2,
    Shadow3,
    Shadow4,
};

