#pragma once
#include "CoreMinimal.h"
#include "PlayerChangeCameraDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerChangeCameraDelegate, FName, CameraName);

