#pragma once
#include "CoreMinimal.h"
#include "EHbkBeatHitInputResult.h"
#include "PCManagerBeatHitResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPCManagerBeatHitResultDelegate, int32, BeatHitId, EHbkBeatHitInputResult, InputResult);

