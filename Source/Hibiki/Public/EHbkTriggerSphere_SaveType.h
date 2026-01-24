#pragma once
#include "CoreMinimal.h"
#include "EHbkTriggerSphere_SaveType.generated.h"

UENUM(BlueprintType)
enum class EHbkTriggerSphere_SaveType : uint8 {
    HBKTRGSPH_NONE,
    HBKTRGSPH_ACTIVATE,
    HBKTRGSPH_DEACTIVATE,
    HBKTRGSPH_HITBEGIN,
    HBKTRGSPH_ENDOVERLAP,
    HBKTRGSPH_DESTROY,
};

