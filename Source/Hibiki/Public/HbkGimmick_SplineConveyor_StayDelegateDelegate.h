#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_SplineConveyor_StayDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkGimmick_SplineConveyor_StayDelegate, int32, StayCount);

