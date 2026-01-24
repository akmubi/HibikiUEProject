#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickAnimationActivateType_t.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmickAnimationActivateType_t : uint8 {
    ACT_TYPE_NONE,
    ACT_TYPE_ACTIVATE,
    ACT_TYPE_ACTIVATE_EXTINT,
    ACT_TYPE_DEACTIVATE,
    ACT_TYPE_DEACTIVATE_EXTINT,
};

