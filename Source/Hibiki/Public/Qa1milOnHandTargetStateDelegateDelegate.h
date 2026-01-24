#pragma once
#include "CoreMinimal.h"
#include "Qa1milOnHandTargetStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQa1milOnHandTargetStateDelegate, bool, bIsLeftHandEnable, bool, bIsRightHandEnable);

