#pragma once
#include "CoreMinimal.h"
#include "ShootingHitTestDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShootingHitTestDelegate, int32, ShootIndex);

