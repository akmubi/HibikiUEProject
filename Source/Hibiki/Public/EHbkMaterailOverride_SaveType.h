#pragma once
#include "CoreMinimal.h"
#include "EHbkMaterailOverride_SaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkMaterailOverride_SaveType : uint8 {
    ST_NONE,
    ST_ACTIVATE,
    ST_DEACTIVATE,
    ST_ACTIVATEEXTINT,
    ST_DEACTIVATEEXTINT,
    ST_BEGINBATTLE,
    ST_ENDBATTLE,
};

