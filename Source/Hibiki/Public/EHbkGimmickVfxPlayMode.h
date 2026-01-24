#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickVfxPlayMode.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmickVfxPlayMode : uint8 {
    None,
    FirstTimeOnly,
    CallEveryBeat,
    SpecifyBeat,
};

