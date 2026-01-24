#pragma once
#include "CoreMinimal.h"
#include "EHbkEnvShadowType.generated.h"

UENUM(BlueprintType)
enum class EHbkEnvShadowType : uint8 {
    NoShadow,
    DynamicShadowMap,
    StaticShadowMap,
    DynamicAndStaticShadowMap,
    NotSet,
};

