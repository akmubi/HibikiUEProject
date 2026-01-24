#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_SplineConveyor_MoveDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkGimmick_SplineConveyor_MoveDelegate, int32, MoveCount);

