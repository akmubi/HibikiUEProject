#pragma once
#include "CoreMinimal.h"
#include "EHbkEmStrongFly_DownReasonType.generated.h"

UENUM(BlueprintType)
enum class EHbkEmStrongFly_DownReasonType : uint8 {
    ToughDeactive,
    MagnetCatch,
    Hunting,
};

