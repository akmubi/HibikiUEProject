#pragma once
#include "CoreMinimal.h"
#include "EHbkTalkStepType.generated.h"

UENUM(BlueprintType)
enum class EHbkTalkStepType : uint8 {
    Next,
    GoTo,
    Terminate,
};

