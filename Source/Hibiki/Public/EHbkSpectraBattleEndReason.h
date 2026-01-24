#pragma once
#include "CoreMinimal.h"
#include "EHbkSpectraBattleEndReason.generated.h"

UENUM(BlueprintType)
enum class EHbkSpectraBattleEndReason : uint8 {
    Clear,
    GiveUp,
    NoParam,
    Error,
};

