#pragma once
#include "CoreMinimal.h"
#include "EHbkTriggerCapsule_SaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkTriggerCapsule_SaveType : uint8 {
    HBKTRGCPS_NONE,
    HBKTRGCPS_ACTIVATE,
    HBKTRGCPS_DEACTIVATE,
    HBKTRGCPS_HITBEGIN,
    HBKTRGCPS_ENDOVERLAP,
    HBKTRGCPS_DESTROY,
};

