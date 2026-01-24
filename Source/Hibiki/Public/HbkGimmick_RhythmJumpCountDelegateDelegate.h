#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_RhythmJumpCountDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkGimmick_RhythmJumpCountDelegate, int32, Count);

