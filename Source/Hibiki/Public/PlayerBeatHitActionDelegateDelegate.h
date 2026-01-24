#pragma once
#include "CoreMinimal.h"
#include "EHbkBeatHitType.h"
#include "PlayerBeatHitActionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerBeatHitActionDelegate, int32, BeatHitId, EHbkBeatHitType, BeatHitType);

