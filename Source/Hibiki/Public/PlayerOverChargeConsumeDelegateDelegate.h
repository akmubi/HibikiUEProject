#pragma once
#include "CoreMinimal.h"
#include "PlayerOverChargeConsumeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerOverChargeConsumeDelegate, int32, Count);

