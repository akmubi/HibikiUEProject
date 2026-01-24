#pragma once
#include "CoreMinimal.h"
#include "EHbkVS_StreamingViewer_BeatHitState_t.generated.h"

UENUM(BlueprintType)
enum EHbkVS_StreamingViewer_BeatHitState_t {
    BH_NONE,
    BH_START,
    BH_UPDATE,
    BH_WAIT,
    BH_END,
};

