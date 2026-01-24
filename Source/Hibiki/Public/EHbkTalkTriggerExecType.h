#pragma once
#include "CoreMinimal.h"
#include "EHbkTalkTriggerExecType.generated.h"

UENUM(BlueprintType)
enum class EHbkTalkTriggerExecType : uint8 {
    OnTrigger,
    WaitInTrigger,
};

