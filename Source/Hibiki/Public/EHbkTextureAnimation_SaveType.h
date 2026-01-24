#pragma once
#include "CoreMinimal.h"
#include "EHbkTextureAnimation_SaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkTextureAnimation_SaveType : uint8 {
    TAS_NONE,
    TAS_ACTIVATE,
    TAS_ACTIVATE_EXTINT,
    TAS_DEACTIVATE,
    TAS_DEACTIVATE_EXTINT,
    TAS_BEGINBATTLE,
    TAS_ENDBATTLE,
};

