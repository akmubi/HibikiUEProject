#pragma once
#include "CoreMinimal.h"
#include "PlayerRhythmModeCountDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerRhythmModeCountDelegate, int32, Count);

