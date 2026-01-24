#pragma once
#include "CoreMinimal.h"
#include "EHbkInteractIconAnimationType.generated.h"

UENUM(BlueprintType)
enum class EHbkInteractIconAnimationType : uint8 {
    None,
    AppearIcon,
    AppearButton,
    Disappear,
    ChangeToIcon,
    ChangeToButton,
    Loop,
};

