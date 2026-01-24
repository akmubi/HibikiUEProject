#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickBoneAnimParamType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmickBoneAnimParamType : uint8 {
    None,
    Default,
    Activate,
    ActivateExtInt,
    Deactivate,
    DeactivateExtInt,
    BeginBattle,
    EndBattle,
    HitBegin,
    HitEnd,
};

