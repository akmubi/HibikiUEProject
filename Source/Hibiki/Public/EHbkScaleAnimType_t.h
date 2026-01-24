#pragma once
#include "CoreMinimal.h"
#include "EHbkScaleAnimType_t.generated.h"

UENUM(BlueprintType)
enum EHbkScaleAnimType_t {
    ANIMTYPE_NONE,
    ANIMTYPE_1LARGE2SMALLIN1BEAT,
    ANIMTYPE_1LARGE1SMALL,
    ANIMTYPE_2LARGE2SMALL,
    ANIMTYPE_4LARGE4SMALL,
};

