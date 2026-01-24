#pragma once
#include "CoreMinimal.h"
#include "EmAimOffsetLimitDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEmAimOffsetLimitDelegate, bool, IsLeft);

