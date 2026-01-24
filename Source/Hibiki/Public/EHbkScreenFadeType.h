#pragma once
#include "CoreMinimal.h"
#include "EHbkScreenFadeType.generated.h"

UENUM(BlueprintType)
enum class EHbkScreenFadeType : uint8 {
    None,
    Fade_Normal,
    Fade_FromCenter,
};

