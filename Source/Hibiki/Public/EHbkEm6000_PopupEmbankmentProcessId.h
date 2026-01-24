#pragma once
#include "CoreMinimal.h"
#include "EHbkEm6000_PopupEmbankmentProcessId.generated.h"

UENUM(BlueprintType)
enum class EHbkEm6000_PopupEmbankmentProcessId : uint8 {
    None,
    Begin,
    Wait,
    Enter,
    Move,
    Leave,
    Break,
    End,
};

