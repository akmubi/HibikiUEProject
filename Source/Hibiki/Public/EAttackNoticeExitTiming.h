#pragma once
#include "CoreMinimal.h"
#include "EAttackNoticeExitTiming.generated.h"

UENUM(BlueprintType)
enum class EAttackNoticeExitTiming : uint8 {
    BarFirst,
    BarLast,
};

