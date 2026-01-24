#pragma once
#include "CoreMinimal.h"
#include "AltitudeControlEndDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAltitudeControlEndDelegate, float, Altitude, int32, Priority);

