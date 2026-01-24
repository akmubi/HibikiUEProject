#pragma once
#include "CoreMinimal.h"
#include "EHbkHUDFollowDevice.h"
#include "HbkHUDLatestFollowDeviceChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkHUDLatestFollowDeviceChanged, EHbkHUDFollowDevice, LatestDeviceType);

