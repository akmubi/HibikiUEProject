#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickEmissiveComp_EmType.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmickEmissiveComp_EmType : uint8 {
    PT_NONE,
    PT_DEFAULT,
    PT_ACTIVATE,
    PT_ACTIVATE_EXTINT,
    PT_DEACTIVATE,
    PT_DEACTIVATE_EXTINT,
    PT_COLLISION,
    PT_BEGINBATTLE,
    PT_ENDBATTLE,
    PT_MOVEEND,
};

