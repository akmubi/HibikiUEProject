#pragma once
#include "CoreMinimal.h"
#include "EmCameraZoomEndDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEmCameraZoomEndDelegate, bool, bEnabledDodgeMode);

