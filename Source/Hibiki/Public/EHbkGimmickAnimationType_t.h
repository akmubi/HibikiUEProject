#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickAnimationType_t.generated.h"

UENUM(BlueprintType)
enum EHbkGimmickAnimationType_t {
    TYPE_NONE,
    TYPE_DEF,
    TYPE_ACTIVATE,
    TYPE_DEACTIVATE,
    TYPE_BEGINBATTLE,
    TYPE_ENDBATTLE,
    TYPE_HITBEGIN,
    TYPE_HITEND,
    TYPE_ACTIVATE_EXTINT,
    TYPE_DEACTIVATE_EXTINT,
};

