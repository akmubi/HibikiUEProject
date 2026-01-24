#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_SplineConveyor_PeripheralsEndDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHbkGimmick_SplineConveyor_PeripheralsEndDelegate, int32, EndCount, int32, InterlockCounter);

