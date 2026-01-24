#pragma once
#include "CoreMinimal.h"
#include "EHbkVFXActorBase_SaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkVFXActorBase_SaveType : uint8 {
    VFXSTATE_NONE,
    VFXSTATE_ACTIVATE,
    VFXSTATE_DEACTIVATE,
};

