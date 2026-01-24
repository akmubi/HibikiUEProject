#pragma once
#include "CoreMinimal.h"
#include "EHbkInteractEventType.generated.h"

UENUM(BlueprintType)
enum class EHbkInteractEventType : uint8 {
    Tutorial,
    Gimmick,
    Talk,
    Custom,
};

