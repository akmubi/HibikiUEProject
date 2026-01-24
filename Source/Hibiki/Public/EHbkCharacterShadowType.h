#pragma once
#include "CoreMinimal.h"
#include "EHbkCharacterShadowType.generated.h"

UENUM(BlueprintType)
enum class EHbkCharacterShadowType : uint8 {
    NoShadow,
    CapsuleShadow,
    DynamicShadowMap,
};

