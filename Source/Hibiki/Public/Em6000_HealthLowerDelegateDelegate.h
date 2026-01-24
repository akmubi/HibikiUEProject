#pragma once
#include "CoreMinimal.h"
#include "Em6000_HealthLowerDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FEm6000_HealthLowerDelegate, float, TriggerHealthRate, float, CurrentHealthRate);

