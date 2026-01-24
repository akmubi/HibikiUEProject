#pragma once
#include "CoreMinimal.h"
#include "Em6000_ActionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FEm6000_ActionDelegate, float, DeltaTime, float, ElapsedTime);

