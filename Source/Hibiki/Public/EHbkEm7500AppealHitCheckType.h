#pragma once
#include "CoreMinimal.h"
#include "EHbkEm7500AppealHitCheckType.generated.h"

UENUM(BlueprintType)
enum class EHbkEm7500AppealHitCheckType : uint8 {
    None,
    Any,
    BlowOff,
};

