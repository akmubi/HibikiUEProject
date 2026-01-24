#pragma once
#include "CoreMinimal.h"
#include "HbkMultipleToughParam.h"
#include "MultipleToughActivateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMultipleToughActivateDelegate, int32, Index, const FHbkMultipleToughParam&, ToughParam);

