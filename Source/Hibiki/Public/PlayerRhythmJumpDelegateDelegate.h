#pragma once
#include "CoreMinimal.h"
#include "PlayerRhythmJumpDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerRhythmJumpDelegate, int32, Count);

