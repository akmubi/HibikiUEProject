#pragma once
#include "CoreMinimal.h"
#include "EHbkLevelSeqStopReason.generated.h"

UENUM(BlueprintType)
enum class EHbkLevelSeqStopReason : uint8 {
    GameSysem,
    BranchOnGameDesign,
};

