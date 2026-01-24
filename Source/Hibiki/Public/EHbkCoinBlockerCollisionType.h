#pragma once
#include "CoreMinimal.h"
#include "EHbkCoinBlockerCollisionType.generated.h"

UENUM(BlueprintType)
enum class EHbkCoinBlockerCollisionType : uint8 {
    None,
    Sphere,
    Capsule,
};

