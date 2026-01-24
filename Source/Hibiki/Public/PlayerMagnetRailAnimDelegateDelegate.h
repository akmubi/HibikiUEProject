#pragma once
#include "CoreMinimal.h"
#include "PlayerMagnetRailAnimDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerMagnetRailAnimDelegate, int32, AnimIndex, float, PlayRate);

