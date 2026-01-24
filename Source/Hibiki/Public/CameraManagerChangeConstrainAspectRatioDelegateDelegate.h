#pragma once
#include "CoreMinimal.h"
#include "CameraManagerChangeConstrainAspectRatioDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCameraManagerChangeConstrainAspectRatioDelegate, bool, bEnabled);

