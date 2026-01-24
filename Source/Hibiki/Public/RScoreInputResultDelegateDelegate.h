#pragma once
#include "CoreMinimal.h"
#include "EHbkRhythmScoreResult.h"
#include "RScoreInputResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRScoreInputResultDelegate, EHbkRhythmScoreResult, ResultType, int32, Index, bool, bInput);

