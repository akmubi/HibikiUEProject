#pragma once
#include "CoreMinimal.h"
#include "EHbkTSUpdateState.generated.h"

UENUM(BlueprintType)
enum class EHbkTSUpdateState : uint8 {
    Idle,
    NewLine,
    Wait,
    Choices,
    Terminate,
};

