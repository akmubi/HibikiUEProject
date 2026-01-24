#pragma once
#include "CoreMinimal.h"
#include "EHbkHowToPlayStateType.generated.h"

UENUM(BlueprintType)
enum class EHbkHowToPlayStateType : uint8 {
    None,
    Hidden,
    New,
    Checked,
};

