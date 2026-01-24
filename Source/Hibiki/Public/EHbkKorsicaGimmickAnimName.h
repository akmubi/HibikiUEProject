#pragma once
#include "CoreMinimal.h"
#include "EHbkKorsicaGimmickAnimName.generated.h"

UENUM(BlueprintType)
enum class EHbkKorsicaGimmickAnimName : uint8 {
    None,
    Open,
    RhythmShadow,
    CursorLoop,
    Clear,
    Failure_In,
    Failure_Out,
};

