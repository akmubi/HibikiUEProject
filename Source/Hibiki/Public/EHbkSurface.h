#pragma once
#include "CoreMinimal.h"
#include "EHbkSurface.generated.h"

UENUM(BlueprintType)
enum class EHbkSurface : uint8 {
    Surface_None,
    Surface_Player,
    Surface_Enemy,
    Surface_Object,
};

