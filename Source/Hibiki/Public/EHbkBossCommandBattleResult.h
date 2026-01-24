#pragma once
#include "CoreMinimal.h"
#include "EHbkBossCommandBattleResult.generated.h"

UENUM(BlueprintType)
enum class EHbkBossCommandBattleResult : uint8 {
    None,
    Success,
    Failed,
};

