#pragma once
#include "CoreMinimal.h"
#include "EHbkEm5000SolidVocalProcess.generated.h"

UENUM(BlueprintType)
enum class EHbkEm5000SolidVocalProcess : uint8 {
    None,
    Appearance,
    OnYourMark,
    Follow,
    Assault,
    Break,
    Explode,
};

