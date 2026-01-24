#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_BuildingSlideCameraTriggerType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_BuildingSlideCameraTriggerType : uint8 {
    ChangeCamera,
    ChangeFocus,
    ChangePlayerCamera,
    PlayCameraShake,
    StopCameraShake,
    None,
};

