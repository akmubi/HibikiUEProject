#pragma once
#include "CoreMinimal.h"
#include "PlayerBeatHitInputDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerBeatHitInputDelegate, bool, bIsInputPerfect);

