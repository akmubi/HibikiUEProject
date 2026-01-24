#pragma once
#include "CoreMinimal.h"
#include "PlayerLifeTankAccumulateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerLifeTankAccumulateDelegate, const TArray<float>&, AccumulateTankRate);

