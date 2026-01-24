#pragma once
#include "CoreMinimal.h"
#include "PCManagerBeatHitNextBeatDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPCManagerBeatHitNextBeatDelegate, int32, BeatHitId, float, PlayRate);

