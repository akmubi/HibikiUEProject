#pragma once
#include "CoreMinimal.h"
#include "MagnetRailJumpDelegateOneParamDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMagnetRailJumpDelegateOneParam, float, Time);

