#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_SecDScanLaserSaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_SecDScanLaserSaveType : uint8 {
    SSL_NONE,
    SSL_ACTIVATE,
    SSL_DEACTIVATE,
};

