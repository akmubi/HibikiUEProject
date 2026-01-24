#pragma once
#include "CoreMinimal.h"
#include "PlayerCreateLifeTankDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCreateLifeTankDelegate, int32, TankIndex);

