#pragma once
#include "CoreMinimal.h"
#include "EHbkEm6000_MovingEmbankmentProcessId.generated.h"

UENUM(BlueprintType)
enum class EHbkEm6000_MovingEmbankmentProcessId : uint8 {
    None,
    Wait,
    Playing,
    End,
};

