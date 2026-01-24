#pragma once
#include "CoreMinimal.h"
#include "EHbkTakeDamageType.generated.h"

UENUM(BlueprintType)
enum class EHbkTakeDamageType : uint8 {
    Damage,
    Block,
    Ignore,
};

