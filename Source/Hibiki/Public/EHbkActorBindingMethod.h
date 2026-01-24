#pragma once
#include "CoreMinimal.h"
#include "EHbkActorBindingMethod.generated.h"

UENUM(BlueprintType)
enum class EHbkActorBindingMethod : uint8 {
    None,
    All,
    LastOnly,
};

