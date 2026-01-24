#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickMoveBeatType_t.generated.h"

UENUM(BlueprintType)
enum EHbkGimmickMoveBeatType_t {
    GMRA_TYPE_NONE,
    GMRA_TYPE_1LARGE2SMALLIN1BEAT,
    GMRA_TYPE_1LARGE1SMALL,
    GMRA_TYPE_2LARGE2SMALL,
    GMRA_TYPE_4LARGE4SMALL,
    GMRA_TYPE_CUSTOM,
};

