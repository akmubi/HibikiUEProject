#pragma once
#include "CoreMinimal.h"
#include "PlayerLifeTankAccumulatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerLifeTankAccumulatedDelegate, int32, AccumulatedTankIndex);

