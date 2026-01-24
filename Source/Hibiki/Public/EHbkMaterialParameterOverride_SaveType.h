#pragma once
#include "CoreMinimal.h"
#include "EHbkMaterialParameterOverride_SaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkMaterialParameterOverride_SaveType : uint8 {
    ST_NONE,
    ST_ACTIVATE,
    ST_ACTIVATE_EXTINT,
    ST_DEACTIVATE,
    ST_DEACTIVATE_EXTINT,
    ST_BEGINBATTLE,
    ST_ENDBATTLE,
};

