#pragma once
#include "CoreMinimal.h"
#include "ShootingFireDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShootingFireDelegate, int32, ShootIndex);

