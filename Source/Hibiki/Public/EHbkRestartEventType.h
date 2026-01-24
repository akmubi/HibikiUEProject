#pragma once
#include "CoreMinimal.h"
#include "EHbkRestartEventType.generated.h"

UENUM(BlueprintType)
enum class EHbkRestartEventType : uint8 {
    Normal,
    Pressed,
    Burned,
};

