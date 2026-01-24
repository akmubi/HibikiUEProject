#pragma once
#include "CoreMinimal.h"
#include "EHbkDynamicShadowMapType.generated.h"

UENUM(BlueprintType)
enum class EHbkDynamicShadowMapType : uint8 {
    DynamicShadowMapPlayer,
    DynamicShadowMapType3,
    DynamicShadowMapType2,
    DynamicShadowMapTypeColor,
    DynamicShadowMapTypeMain,
};

