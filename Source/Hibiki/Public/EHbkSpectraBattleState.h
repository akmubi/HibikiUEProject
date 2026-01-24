#pragma once
#include "CoreMinimal.h"
#include "EHbkSpectraBattleState.generated.h"

UENUM(BlueprintType)
enum class EHbkSpectraBattleState : uint8 {
    WaitBattle,
    InBattle,
    Continue,
    Result,
};

