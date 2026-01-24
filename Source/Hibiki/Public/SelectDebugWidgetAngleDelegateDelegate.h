#pragma once
#include "CoreMinimal.h"
#include "SelectDebugWidgetAngleDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSelectDebugWidgetAngleDelegate, int32, Page, float, Angle);

