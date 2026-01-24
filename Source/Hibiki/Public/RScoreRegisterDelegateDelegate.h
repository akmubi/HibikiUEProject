#pragma once
#include "CoreMinimal.h"
#include "HbkRhythmNoteParam.h"
#include "RScoreRegisterDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRScoreRegisterDelegate, const TArray<FHbkRhythmNoteParam>&, ScoreList, float, OffsetTime);

