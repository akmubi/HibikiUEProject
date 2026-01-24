#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_SplineMagnetRailEndAnimType.h"
#include "SplineMagnetDelegateOneParamDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSplineMagnetDelegateOneParam, EHbkGimmick_SplineMagnetRailEndAnimType, EndAnimType);

