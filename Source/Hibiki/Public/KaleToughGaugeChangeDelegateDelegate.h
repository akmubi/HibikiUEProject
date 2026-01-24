#pragma once
#include "CoreMinimal.h"
#include "KaleToughGaugeChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKaleToughGaugeChangeDelegate, float, ToughGaugeRate);

