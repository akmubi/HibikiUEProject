#pragma once
#include "CoreMinimal.h"
#include "PlayerMoveRhythmJumpDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerMoveRhythmJumpDelegate, int32, Count);

