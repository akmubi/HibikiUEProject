#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_bg1080AnimState.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmick_bg1080AnimState : uint8 {
    None,
    Open,
    Opened,
    LookAround,
    Transfer,
};

