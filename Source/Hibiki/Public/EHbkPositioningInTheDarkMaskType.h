#pragma once
#include "CoreMinimal.h"
#include "EHbkPositioningInTheDarkMaskType.generated.h"

UENUM(BlueprintType)
enum class EHbkPositioningInTheDarkMaskType : uint8 {
    None,
    Single,
    Cross,
    Block,
};

