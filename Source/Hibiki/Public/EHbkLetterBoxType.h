#pragma once
#include "CoreMinimal.h"
#include "EHbkLetterBoxType.generated.h"

UENUM(BlueprintType)
enum class EHbkLetterBoxType : uint8 {
    Horizontal,
    Vertical,
    Invalid,
};

