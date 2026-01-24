#pragma once
#include "CoreMinimal.h"
#include "EHbkFootStepActionType.generated.h"

UENUM(BlueprintType)
enum class EHbkFootStepActionType : uint8 {
    None,
    Walk,
    Quick,
    Landing,
};

