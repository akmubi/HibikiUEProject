#pragma once
#include "CoreMinimal.h"
#include "EHbkCharacterShadowType2.generated.h"

UENUM(BlueprintType)
enum class EHbkCharacterShadowType2 : uint8 {
    NoShadow,
    CapsuleShadow,
    DynamicShadowMap,
};

