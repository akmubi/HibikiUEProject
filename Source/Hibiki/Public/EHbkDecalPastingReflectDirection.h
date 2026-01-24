#pragma once
#include "CoreMinimal.h"
#include "EHbkDecalPastingReflectDirection.generated.h"

UENUM(BlueprintType)
enum class EHbkDecalPastingReflectDirection : uint8 {
    World,
    Actor,
    Socket,
};

