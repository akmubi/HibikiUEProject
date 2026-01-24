#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_SecDHatchSaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_SecDHatchSaveType : uint8 {
    HOC_NONE,
    HOC_OPEN,
    HOC_CLOSE,
};

