#pragma once
#include "CoreMinimal.h"
#include "RhythmJumpCountDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FRhythmJumpCountDelegate, int32, Count);

