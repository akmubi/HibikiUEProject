#pragma once
#include "CoreMinimal.h"
#include "EHbkShadowSpotLightType.generated.h"

UENUM(BlueprintType)
enum class EHbkShadowSpotLightType : uint8 {
    EnvKeyLight,
    SceneSpotLight,
    CineToonShadingLight,
    Num,
};

