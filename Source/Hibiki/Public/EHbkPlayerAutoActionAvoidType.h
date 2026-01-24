#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerAutoActionAvoidType.generated.h"

UENUM(BlueprintType)
enum class EHbkPlayerAutoActionAvoidType : uint8 {
    None,
    Dash,
    Parry,
    Jump,
};

