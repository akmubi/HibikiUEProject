#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHbkBeatHitType.h"
#include "PCManagerBeatHitStartDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FPCManagerBeatHitStartDelegate, int32, BeatHitId, EHbkBeatHitType, BeatHitType, float, PlayRate, FVector2D, Offset, float, Scale);

