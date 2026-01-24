#pragma once
#include "CoreMinimal.h"
#include "EHbkTriggerBox_SaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkTriggerBox_SaveType : uint8 {
    HBKTRGBOX_NONE,
    HBKTRGBOX_ACTIVATE,
    HBKTRGBOX_DEACTIVATE,
    HBKTRGBOX_HITBEGIN,
    HBKTRGBOX_ENDOVERLAP,
    HBKTRGBOX_DESTROY,
};

